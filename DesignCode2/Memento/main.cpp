#include "Command.h"
#include "Number.h"

int main()
{
  int i;
  std::cout << "Integer: ";
  std::cin >> i;
  Number *object = new Number(i);

  Command *commands[3];
  commands[1] = new Command(object, &Number::makeDouble);
  commands[2] = new Command(object, &Number::half);

  std::cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
  std::cin >> i;

  while (i)
  {
    if (i == 3)
      Command::undo();
    else if (i == 4)
      Command::redo();
    else
      commands[i]->execute();
    std::cout << "   " << object->getValue() << std::endl;
    std::cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
    std::cin >> i;
  }
}
