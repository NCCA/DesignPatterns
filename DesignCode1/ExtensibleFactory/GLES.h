#ifndef GLES_H
#define GLES_H
#include <iostream>
#include "Renderer.h"

class GLES : public Renderer
{
public:

  bool loadScene(const std::string &_filename) {return true;}
  void setViewportSize(int _w, int _h) {;}
  void setCameraPos(double _x, double _y, double _z) {;}
  void setLookAt(double _x, double _y, double _z) {;}
  void render() {std::cout<<"GLES Render\n";}
  ~GLES(){std::cout<<"GLES dtor called\n";}
  static Renderer *create() { return new GLES; }

};

#endif
