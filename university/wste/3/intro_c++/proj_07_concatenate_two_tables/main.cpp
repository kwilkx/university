#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	// C
	{
		int tab1[] = {0,1,2,3,4,5,6,7,8,9};
		int tab2[] = {10,20,30,40,50,60,70,80,90,100};
		
		int len = (sizeof(tab1)+sizeof(tab2))/sizeof(int);
		int len1 = (sizeof(tab1)/sizeof(int));
		int* some_copy = (int*)malloc(sizeof(int)*(len));

		for (int i = 0 ; i < len ; ++i)
		{
			if (i < len1)
				some_copy[i] = tab1[i];
			else
				some_copy[i] = tab2[i-len1];
		}

		for (int i = 0 ; i < len ; ++i)
		{
			printf("%d \n",some_copy[i]);
		}
		
		free(some_copy);
	}

	// C++
	{
		std::vector<int> tab1 = {0,1,2,3,4,5,6,7,8,9};
		std::vector<int> tab2 = {10,20,30,40,50,60,70,80,90,100};
		std::vector<int> some_copy = tab1;
		some_copy.insert(some_copy.end(),tab2.begin(),tab2.end());

		for (auto e : some_copy)
			cout << e << ",";
	}
}
