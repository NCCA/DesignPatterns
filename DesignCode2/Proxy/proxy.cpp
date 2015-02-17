/// modified from Martin Reddy book
/// See http://APIBook.com/ for the latest version.


#include "proxy.h"
#include "original.h"
#include <iostream>


Proxy::Proxy()
	: m_orig(new Original)
{
  std::cout << "Allocated new Original object inside Proxy\n";
}

Proxy::~Proxy()
{
	delete m_orig;
  std::cout << "Destroyed Original object inside Proxy\n";
}

bool Proxy::doSomething(int value)
{
  std::cout << "About to call Original::doSomething from Proxy\n";
	return m_orig->doSomething(value);
}

