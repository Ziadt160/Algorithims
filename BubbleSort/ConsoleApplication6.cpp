#include<iostream>
using namespace std;

int* bubbleSort(int ar[],int size);

int main()
{
	int ar[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(ar) / sizeof(ar[0]);
	int* sorted_ar = bubbleSort(ar,size);
	for (int i = 0; i < 8; i++)
	{
		cout << sorted_ar[i] << " ";
	}
};


int* bubbleSort(int ar[],int size) {
	int temp;
	bool condition = true;
	while (condition)
	{
		for (int i = 0; i < size - 1; i++)
		{
			condition = false;
			if (ar[i] > ar[i + 1])
			{
				condition = true;
				temp = ar[i + 1];
				ar[i + 1] = ar[i];
				ar[i] = temp;
			}
		}
	}
	return ar;
}