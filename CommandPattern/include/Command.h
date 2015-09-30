// based on discussions here
// http://gameprogrammingpatterns.com/command.html
#ifndef COMMAND_H__
#define COMMAND_H__
class Agent;

class Command
{
public:
 Command(){}
 virtual ~Command() {}
 virtual void execute(Agent& _agent) = 0;
};


class RunCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};

class WalkCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};

class LeftCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};

class RightCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};

class UpCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};
class DownCommand :public Command
{
  public:
  virtual void execute(Agent& _agent);
};





#endif
