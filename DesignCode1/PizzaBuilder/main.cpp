#include "PizzaBuilder.h"
#include "Cook.h"
#include "HawaiianPizzaBuilder.h"
#include "SpicyPizzaBuilder.h"
#include <memory>

int main()
{
  Cook cook;
  std::unique_ptr<PizzaBuilder> hawaiianPizzaBuilder(new HawaiianPizzaBuilder);
  std::unique_ptr<PizzaBuilder> spicyPizzaBuilder( new SpicyPizzaBuilder);

  cook.setPizzaBuilder(std::move(hawaiianPizzaBuilder));
  cook.constructPizza();

  std::unique_ptr<Pizza> hawaiian(cook.getPizza());
  hawaiian->open();

  cook.setPizzaBuilder(std::move(spicyPizzaBuilder));
  cook.constructPizza();

  std::unique_ptr<Pizza> spicy(cook.getPizza());
  spicy->open();

}
