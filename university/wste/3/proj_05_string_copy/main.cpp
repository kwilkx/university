#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	// C
	{
		char org[] = "Ala ma ...";
		int len = strlen(org);
		char * some_copy = (char*)malloc(sizeof(char)*(len+1));
		strncpy(some_copy, org, len+1);
		//...
		printf("C: %s", some_copy);
		free(some_copy);
	}

	// C++
	{
		string org("Ala ma ...");
		string some_copy = org;
		cout << "C++:" << some_copy << endl;
	}
}
