#ifndef DIVOBSERVER_H__
#define DIVOBSERVER_H__

#include "Subject.h"
#include "Observer.h"
#include <iostream>

class DivObserver: public Observer
{
  public:
    DivObserver(Subject *_mod, int _div): Observer(_mod, _div){}
    void update()
    {
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " div " << d << " is " << v / d << '\n';
    }
};

#endif
