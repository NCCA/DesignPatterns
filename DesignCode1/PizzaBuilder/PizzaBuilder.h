#ifndef PIZZABUILDER_H_
#define PIZZABUILDER_H_

#include "Pizza.h"
#include "PizzaBuilder.h"
#include <memory>
// "Abstract Builder"
class PizzaBuilder
{
public:
  std::unique_ptr<Pizza> getPizza()
  {
    return std::move(m_pizza);
  }
  void createNewPizzaProduct()
  {
    m_pizza.reset(  new Pizza);
  }
  virtual void buildDough() = 0;
  virtual void buildSauce() = 0;
  virtual void buildTopping() = 0;
  virtual ~PizzaBuilder(){}
protected:
  std::unique_ptr<Pizza> m_pizza;
};

#endif
