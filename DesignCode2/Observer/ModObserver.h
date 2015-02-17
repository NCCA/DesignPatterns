#ifndef MODOBSERVER_H__
#define MODOBSERVER_H__

#include "Observer.h"
#include <iostream>

class ModObserver: public Observer
{
  public:
    ModObserver(Subject *_mod, int _div): Observer(_mod, _div){}
    void update()
    {
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " mod " << d << " is " << v % d << '\n';
    }
};

#endif
