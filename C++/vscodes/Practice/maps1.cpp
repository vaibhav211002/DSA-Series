// C++ program to demonstrate the
// working of array of maps in C++

#include <bits/stdc++.h>
using namespace std;

// Function to print map elements specified
// at the index, "index"
void print(map<string, bool>& myMap,
		int index)
{
	cout << "The map elements stored at the index " <<
			index << ": \n";
	cout << "Key	 Value\n";

	// Each element of the map is a pair
	// on its own
	for (auto pr : myMap)
	{
		cout << pr.first << "	 " <<
				pr.second << '\n';
	}

	cout << '\n';
}

// Function to iterate over the map
// corresponding to an index
void print(map<string, bool>* myContainer,
		int n)
{
	for (int i = 0; i < n; i++)
	{
		print(myContainer[i], i);
	}
}

// Driver code
int main()
{
	// Declaring an array of maps
	// In map Key is of type string
	// Value is of type bool
	map<string, bool> myContainer[3];

	// Mapping values to the map stored
	// at the index 0
	myContainer[0]["Code"] = true;
	myContainer[0]["HTML"] = false;
	myContainer[0]["Java"] = true;
	myContainer[0]["Solo"] = false;

	// Mapping values to the map stored
	// at the index 1
	myContainer[1]["PHP"] = true;
	myContainer[1]["CSS"] = false;
	myContainer[1]["C++"] = true;
	myContainer[1]["Lab"] = false;

	// Mapping values to the map stored
	// at the index 2
	myContainer[2]["Swift"] = true;
	myContainer[2]["Cobol"] = false;
	myContainer[2]["Fizzy"] = true;

	// Calling print function to print
	// myContainer elements
	print(myContainer, 3);

	return 0;
}
