#include "ParticlePool.h"

int main()
{
  ParticlePool pool;
  pool.create(0, 0, 1, 1, 10);
  pool.create(1, 0, 1, 1, 10);
  pool.create(2, 0, 1, 1, 10);

  while(1)
  {
    pool.animate();
  }

}
