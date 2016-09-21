#ifndef SUBJECT_H__
#define SUBJECT_H__
#include <vector>

class Observer;
class Subject
{
  private :
    std::vector <  Observer * > m_views;
    int m_value;
  public:
    void attach(Observer *_obs)
    {
        m_views.push_back(_obs);
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
  int size=m_views.size();
  for (int i = 0; i < size; ++i)
      m_views[i]->update();
}

#endif













