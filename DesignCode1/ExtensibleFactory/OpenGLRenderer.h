#ifndef OPENGLRENDERER_H
#define OPENGLRENDERER_H
#include <iostream>
#include "Renderer.h"


class OpenGLRenderer : public Renderer
{
public:

  bool loadScene(const std::string &_filename) {return true;}
  void setViewportSize(int _w, int _h) {;}
  void setCameraPos(double _x, double _y, double _z) {;}
  void setLookAt(double _x, double _y, double _z) {;}
  void render() {std::cout<<"OpenGL Render\n";}
  ~OpenGLRenderer(){std::cout<<"OpenGL dtor called\n";}
  static Renderer *create() { return new OpenGLRenderer; }

};

#endif
