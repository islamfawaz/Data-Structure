// Vector(array data structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class vector {

	int size;
	int length;
	int* item;
	vector(int arrsize) {
		size = arrsize;
		length = 0;
		item = new int[arrsize];
  }
	void fill() {
		int no_of_item;
		cout << "how many item you fill" << endl;
		cin >> no_of_item;
	
		if (no_of_item > size) {
			cout << "you cant exceed the array";
			return;
		} 
		else {
			for (int i = 0;i < no_of_item;i++) {
				cout << "enter item no " << i <<endl;
				cin >> item[i];
				length++;
			}
		}
	  }
	void display() {
		cout << "display array content";

		for (int i = 0;i < length;i++) {
			cout << item[i]<<"\t";
		}
		cout << endl;
	}
};



int main()
{
	int arraysize;
	cout << "enter array size";
	cin >> arraysize;
	vector object(arraysize);
	vector.fill();
	vector.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
