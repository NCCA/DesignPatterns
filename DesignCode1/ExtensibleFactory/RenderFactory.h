#include "Renderer.h"
#include <string>
#include <map>

class RendererFactory
{
public :
  /// The type for the callback that creates an IRenderer instance
  typedef Renderer *(*createCallback)();

  /// Add a new 3D renderer to the system
  static void registerRenderer(const std::string &type,createCallback cb);
  /// Remove an existing 3D renderer from the system
  static void unregisterRenderer(const std::string &type);

  /// Create an instance of a named 3D renderer
  static Renderer *createRenderer(const std::string &type);
private :
    static std::map<std::string, createCallback> m_renderers;

};
