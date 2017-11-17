#include <iostream>
#include <bitset>
#include <cstdio>

using namespace std;

int main()
{
	// C
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",x);
		printf("%x\n",x);
		printf("%o\n",x);
	}
	// C++
	{
		int x;
		cin >> x;
		cout << x << endl;
		cout << hex << x << endl;
		cout << oct << x << endl;
		cout << bitset<8>(x) << endl;
	}
}

