// selectoin sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void selectoinSort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
	   int minimumItem = i;

	   for ( int j =i+1; j < n; j++)
	   {
		   if (arr[j] < minimumItem)
		   {
			   minimumItem = j;
			   swap(arr[j], minimumItem);
		 }
	   }
	}
}
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
 }


int main()
{   
	int arr[] = { 6,4,7,2,1,5,7,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selectoinSort(arr, n);
	print(arr, n);

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
