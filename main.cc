/* Write a program with a string object. 
 * Make a pointer to that string object, 
 * and print out the size of that object. 
 * (Use the size() member function). 
 * Then, get a pointer to that pointer, 
 * and call the size member function again.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "I'm a string!";
	
	string* pStr1 = &str;
	string* pStr2 = pStr1;
	
	cout << (*pStr1).size() << endl;
	cout << (*pStr2).size() << endl;
	
	cin.get();
	return 0;
}

