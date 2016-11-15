#ifndef COOK_H_
#define COOK_H_
#include "PizzaBuilder.h"
#include <memory>
class Cook
{
  public:
    void setPizzaBuilder(std::unique_ptr<PizzaBuilder> pb)
    {
      m_pizzaBuilder= std::move(pb);
    }
    std::unique_ptr<Pizza> getPizza()
    {
      return m_pizzaBuilder->getPizza();
    }
    void constructPizza()
    {
      m_pizzaBuilder->createNewPizzaProduct();
      m_pizzaBuilder->buildDough();
      m_pizzaBuilder->buildSauce();
      m_pizzaBuilder->buildTopping();
    }
  private:
    std::unique_ptr<PizzaBuilder> m_pizzaBuilder;
};

#endif
