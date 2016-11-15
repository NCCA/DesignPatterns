/// modified from Martin Reddy book
/// See http://APIBook.com/ for the latest version.

#ifndef PROXY_H
#define PROXY_H

class Original;


class Proxy
{
public:
	Proxy();
	~Proxy();

	/// Call through to the Original::DoSomething() function
  bool doSomething(int value);

private:
	// prevent copying of this class because we had a pointer data member
	Proxy(const Proxy &);
	const Proxy &operator =(const Proxy &);

  Original *m_orig;
};

#endif
