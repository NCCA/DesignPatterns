#ifndef OBSERVER_H__
#define OBSERVER_H__

#include "Subject.h"

class Observer
{
  private :
    Subject *m_subject;
    int m_denom;
  public:
    Observer(Subject *_mod, int _div)
    {
        m_subject = _mod;
        m_denom = _div;
        m_subject->attach(this);
    }
    virtual void update() = 0;
  protected:
    Subject *getSubject() { return m_subject;}
    int getDivisor() const { return m_denom; }
};

#endif
