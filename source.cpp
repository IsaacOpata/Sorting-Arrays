#include <iostream>
#include <string>
using namespace std;

void selectionSort(string [], int);
void displayArray(string [], int);

int main()
{
	const int NUM_NAMES = 6;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stanley, Marty", "Rose, Geri" };

	cout << "The unsorted list is as follows: \n";
	displayArray(names, NUM_NAMES);
	selectionSort(names, NUM_NAMES);
	
	cout << "\n\nThe sorted list is as follows: \n";
	displayArray(names, NUM_NAMES);

	return 0;
}

void selectionSort(string names[], int size)
{
	int start, minIndex;
	string minValue;

	for (start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = names[minIndex];
		for (int index = start + 1; index < size; index++)
		{
			if (names[index] < minValue)
			{
				minValue = names[index];
				minIndex = index;
			}
		}
		names[minIndex] = names[start];
		names[start] = minValue;
	}
}

void displayArray(string names[], int size)
{
	for (int i = 0; i < size; i++)
		cout << names[i] << "\n";
}