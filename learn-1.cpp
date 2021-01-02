#include <iostream>

using std::cout;
using std::cin;


int main()
{
	int slices; //declare variable
	int eaten;
	cout << "how many slices? \n ";
	cin >> slices; //define variable
	cout << "How many slices eaten? \n";
	cin >> eaten;
	int left = slices - eaten;
	cout << left << " slices of pizza remaining." << std::endl;
}
