#include <iostream>
#include <string>

using namespace std;


int main() {
	/*
		- Unlike C-style strings, CPP-style strings can change size dynamically
		- They are still contiguous in memory
		- Operators for comparison work on strings (+, =, <=, >=, !=, ==, etc.)
		- Can be converted to C-style strings if needed
		- CPP style strings are safer since they do checking.
	*/

	//would have to do std::string, but using nampespace ignores that.
	
	string s1; //Unlike C, string are automatically initialized to be ""
	string s2 {"Frank"};
	string s3 {s2}; //can pass by value and assign
	string s4 {"Frank", 3}; //Concatenates to the first 3 letters, "Fra"
	string s5 {s4, 0, 2}; //Concatenating the value of s3 to start at index 0 and go 2 in length: "Fr"
	string s6 (3, 'x'); //will create a string of size 3 with values 'x': "xxx"

	string unnamed;
	unnamed = "Hema";

	string named {"Dhiya"};
	named = unnamed;


	string sentence = named + " " + named; //This is legal since there is a string type
	//string sentence = "Hello "  + "there"; is illegal since you cannot add two c-type literals


	/*
		You can use [] or .at() to grab indiviudal chars
		Should use .at() though since it has error checking. 
		.substr(startIndex, length) returns a substring of that amount of characters from starting position
		.find(searchableString) returns the index of the first found char or the end index if no match
		.find(searchableString, starting index) searches from that index
		.erase(startIndex, length) wipes from that point
		.clear() clears all
		.length() returns length of string
	*/

	/*
		getline(cin, stringName) will read the entire line until the \n (not first whitespace)
		getLine(cin, stringName, ',') will stop at the delimiter as specified.
	*/






}
