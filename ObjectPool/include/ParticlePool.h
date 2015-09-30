// based on http://gameprogrammingpatterns.com/object-pool.html
#ifndef PARTICLEPOOL_H__
#define PARTICLEPOOL_H__
#include "Particle.h"
class ParticlePool
{
public:
  void create(double _x, double _y,double _xVel, double _yVel, int _lifetime);

  void animate();


private:
  static const int POOL_SIZE = 100;
  Particle m_particles[POOL_SIZE];
};



#endif
