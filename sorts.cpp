#include<iostream>
#include<array>
#include<vector>
using namespace std;

int ARRAY[] = { 1, 7, 2, 78, 4, 3, 5, 7, 4, 5 };


void show(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
}

void bubbleSort() {
	for (int i = 0; i < size(ARRAY); i++) {
		for (int j = 0; j < size(ARRAY) - 1 - i; j++) {
			if (ARRAY[j] > ARRAY[j + 1]) {
				int buff = ARRAY[j];
				ARRAY[j] = ARRAY[j + 1];
				ARRAY[j + 1] = buff;
			}
		}
	}

	show(ARRAY, size(ARRAY));
}


int main() {
	bubbleSort();
	return 0;
}