#include "ParticlePool.h"

void ParticlePool::animate()
{
  for (int i = 0; i < POOL_SIZE; i++)
  {
    m_particles[i].animate();
  }
}

void ParticlePool::create(double _x, double _y,double _xVel, double _yVel, int _lifetime)
{
  // Find an available particle.
  for (int i = 0; i < POOL_SIZE; i++)
  {
    if (!m_particles[i].inUse())
    {
      m_particles[i].init(_x, _y, _xVel, _yVel, _lifetime);
      return;
    }
  }
}
