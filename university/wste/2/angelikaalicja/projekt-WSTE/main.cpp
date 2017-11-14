#include "Game.h"
#include <iostream>

using namespace std;

#define F() cout << __func__ << " " << (this) << " " << ii << endl;
#define N() cout << endl;

class C
{
public:
	C(int i) :
			ii(i)
	{
		F();
	}
	C(const C & c) :
			ii(c.ii)
	{
		F();
	}
	C& operator=(const C& c)
	{
		F();
		ii = c.ii*10;
		return *this;
	}
	~C()
	{
		F();
	}
	void f()
	{
		F();
	}

	int ii;
};
int main(int argc, char* argv[])
{
	C c1(1);
	C c2(2);
	C& r1 = c1;
	N();

	r1.f();
	c1.f();
	N();

	r1 = c2;
	r1.f();
	c1.f();
	N();
}
