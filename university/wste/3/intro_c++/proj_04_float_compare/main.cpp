#include <iostream>
#include <math.h> 

using namespace std;

bool isEqual(float f1, float f2)
{
	float f = fabs(f1 - f2);
	return f < 0.1;
}

int main()
{
	cout << (true == isEqual(1.f,1.f)) << endl;
	cout << (false == isEqual(1.f,2.f)) << endl;
	cout << (false == isEqual(1.1f,1.f)) << endl;
	cout << (false == isEqual(1.2f,1.f)) << endl;
}

