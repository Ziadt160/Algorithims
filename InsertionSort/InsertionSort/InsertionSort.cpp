// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* insertionSort(int ar[],int size);
void printArray(int arr[], int size);

int main()	
{
	int ar[] = { 12, 14, 13, 5, 6 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int* sorted_ar  = insertionSort(ar, size);
	printArray(sorted_ar, size);
}

int* insertionSort(int ar[], int size)
{
	int key, j;
	for (int i = 1; i < size; i++)
	{
		key = ar[i];
		j = i - 1;
		if (key < ar[j])
		{
			for (;j >= 0 && ar[j] > key; j--)
			{
				ar[j + 1] = ar[j];
			}
			ar[j + 1] = key;
		}
	}
	return ar;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
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
