#include "RenderFactory.h"
#include "DirectXRenderer.h"
#include "OpenGLRenderer.h"



// instantiate the static variable in RendererFactory
std::map<std::string, RendererFactory::createCallback>  RendererFactory::m_renderers;

void RendererFactory::registerRenderer(const std::string &type,createCallback cb)
{
  m_renderers[type] = cb;
}

void RendererFactory::unregisterRenderer(const std::string &type)
{
  m_renderers.erase(type);
}

Renderer *RendererFactory::createRenderer(const std::string &type)
{
  std::map<std::string, createCallback>::iterator it = m_renderers.find(type);
  if (it != m_renderers.end())
  {
    // call the creation callback to construct this derived type
    return (it->second)();
  }
  return NULL;
}











