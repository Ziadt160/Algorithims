// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* selectionSort(int ar[], int size);
void swap(int* x, int* y);
void printArray(int ar[], int size);

int main()
{
	int ar[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int* sorted_ar = selectionSort(ar, size);
	cout << "Sorted array: \n";
	printArray(ar, size);
	return 0;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int* selectionSort(int ar[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex,temp;
		minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (ar[minIndex] > ar[j])
			{
				minIndex = j;
			}
		}
		swap(ar[minIndex], ar[i]);
	}
	return ar;
}


void printArray(int ar[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << ar[i] << " ";
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
