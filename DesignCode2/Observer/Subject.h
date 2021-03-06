#ifndef SUBJECT_H_
#define SUBJECT_H_
#include <vector>
#include <memory>
#include <iostream>
class Observer;
class Subject
{
  private :
    std::vector <  Observer *> m_views;
    int m_value;
  public:
    ~Subject(){std::cout<<"Subject dtor\n";}
    void attach(Observer *_obs)
    {
      // note as using smart pointer we emplace
       m_views.emplace_back(_obs);
    }
    void setVal(int _val)
    {
        m_value = _val;
        notify();
    }
    int getVal() const { return m_value; }
    void notify();

};

#include "Observer.h"

void Subject::notify()
{
  for(auto &n : m_views )
    n->update();
}

#endif













