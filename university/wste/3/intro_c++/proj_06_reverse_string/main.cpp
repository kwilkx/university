#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	// C
	{
		char org[] = "ABC";
		int len = strlen(org);
		char * some_copy = (char*)malloc(sizeof(char)*(len+1));
		for (int i = 0 ; i < len ; ++i)
		{
			some_copy[i] = org[len-i-1];//??
		}
		some_copy[len] = '\0';

		printf("R: %s\n",some_copy);
		free(some_copy);
	}

	// C++
	{
		string org("ABC");
		string some_copy = org;
		reverse(some_copy.begin(), some_copy.end());
		cout << "C++:" << endl;
		cout << some_copy << endl;
	}
}
