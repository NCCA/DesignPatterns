#ifndef MEMENTO_
#define MEMENTO_

#include "Number.h"
class Memento
{
  public:
    Memento(int _val)
    {
        m_state = _val;
    }
  private:
    friend class Number;
    int m_state;
};


#endif
