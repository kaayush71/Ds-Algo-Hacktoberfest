#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;
const int ARRAY_SIZE = 7;

void selectionSort(int list[], int length);

int main()
{
	int i;
	int arr[] = { 35, 12, 27, 18, 45, 16, 38 };

	cout << "The unsorted list is: ";

	for (i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	selectionSort(arr, ARRAY_SIZE);

	cout << "The sorted list is: ";

	for (i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}

void selectionSort(int list[], int length) {
	int index;
	int smallestIndex;
	int location;
	int temp;

	for (index = 0; index < length - 1; index++) {
		// step a (find smallest element)
		smallestIndex = index;
		for (location = index + 1; location < length; location++) {
			if (list[location] < list[smallestIndex]) {
				smallestIndex = location;
			}
		}
		// step b (swap elements)
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}
}
