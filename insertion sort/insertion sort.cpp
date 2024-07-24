
// insertion sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{                              //  j  key
    int key,j;                  // 0  1  2  3  4   5  6 
	for (int i = 1; i < n; i++)// 60  |80 90 30 50 70 40
	{       
		key = arr[i];//80
		j = i - 1;  //0

		while (j>=0 && arr[j]>key)
		{
			arr[j + 1] = arr[j];
			j --;
		}
		arr[j + 1] = key;  //90
	}
}
void printArray(int arr[], int n)
{
	for (int i = 0; i <n; i++)
	{
		cout << arr[i]<<" ";
		cout << endl;
	}
  }

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[n];
	}

	insertionSort(arr, n);
	printArray(arr, n);
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
