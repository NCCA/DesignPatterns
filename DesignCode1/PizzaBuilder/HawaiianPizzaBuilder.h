#ifndef HAWAIIAN_H_
#define HAWAIIAN_H_

#include "PizzaBuilder.h"

class HawaiianPizzaBuilder : public PizzaBuilder
{

public:
  virtual void buildDough()
  {
    m_pizza->setDough("cross");
  }
  virtual void buildSauce()
  {
    m_pizza->setSauce("mild");
  }
  virtual void buildTopping()
  {
    m_pizza->setTopping("ham+pineapple");
  }
};

#endif
