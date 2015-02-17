#ifndef NUMBER_H__
#define NUMBER_H__
#include "Memento.h"

class Number
{
  public:
    Number(int _value)
    {
        m_value = _value;
    }
    void makeDouble()
    {
        m_value = 2 * m_value;
    }
    void half()
    {
        m_value = m_value / 2;
    }
    int getValue()
    {
        return m_value;
    }
    Memento *createMemento()
    {
        return new Memento(m_value);
    }
    void reinstateMemento(Memento *mem)
    {
        m_value = mem->m_state;
    }
  private:
    int m_value;
};


#endif
