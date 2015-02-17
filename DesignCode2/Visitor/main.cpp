#include "Visitors.h"

int main()
{
  Element *list[] =
  {
    new A(), new B(), new C()
  };
  SomeOperation op;
  SomeOtherOp other;

  for (int i = 0; i < 3; i++)
    list[i]->accept(op);
  for (int i = 0; i < 3; i++)
    list[i]->accept(other);

}
