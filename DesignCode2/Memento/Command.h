#ifndef COMMAND_H__
#define COMMAND_H__
#include "Number.h"
#include <iostream>
class Command
{
  public:
  typedef void(Number:: *Action)();
    Command(Number *receiver, Action action)
    {
        m_receiver = receiver;
        m_action = action;
    }
    virtual void execute()
    {
        m_mementoList[m_numCommands] = m_receiver->createMemento();
        m_commandList[m_numCommands] = this;
        if (m_numCommands > m_limitGuard)
          m_limitGuard = m_numCommands;
        m_numCommands++;
        (m_receiver->*m_action)();
    }
    static void undo()
    {
        if (m_numCommands == 0)
        {
            std::cout << "*** Attempt to run off the end!! ***" << std::endl;
            return ;
        }
        m_commandList[m_numCommands - 1]->m_receiver->reinstateMemento
          (m_mementoList[m_numCommands - 1]);
        m_numCommands--;
    }
    void static redo()
    {
        if (m_numCommands > m_limitGuard)
        {
            std::cout << "*** Attempt to run off the end!! ***" << std::endl;
            return ;
        }
        (m_commandList[m_numCommands]->m_receiver->*(m_commandList[m_numCommands]
          ->m_action))();
        m_numCommands++;
    }
  protected:
    Number *m_receiver;
    Action m_action;
    static Command *m_commandList[20];
    static Memento *m_mementoList[20];
    static int m_numCommands;
    static int m_limitGuard;
};

Command *Command::m_commandList[];
Memento *Command::m_mementoList[];
int Command::m_numCommands = 0;
int Command::m_limitGuard = 0;

#endif
