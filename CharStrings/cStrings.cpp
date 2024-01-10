#include <iostream>
#include <cctype>

int main() {
	/*
		Include cctype to test characters for certain functions:
		isalpha(), isalum(), isdigit(), islower(), isprint(), ispunct(), isupper(), isspace().
		toupper(), tolower(); 

	*/

	char name[] = "Aditya";
	char name[0] = 'a';

	//char name[7] = '!'; would work, but the null terminator would be removed causing issues
	//name = "Dhiya"; would not work, as you need to use strcpy(name, "Dhiya);

	return 0;
}
