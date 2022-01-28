/*Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa. Order of elements in output doesn’t matter. Extra positive or negative elements should be moved to end.*/

#include <bits/stdc++.h>
using namespace std;

// Function to rearrange positive and negative integers in alternate fashion. The below code doesn't maintain original order of elements
void rearrange(int arr[], int n)
{
	int i = 0, j = n-1;

	// shift all negative values to the end
	while (i < j) {
		while (i <= n - 1 and arr[i] > 0)
			i += 1;
		while (j >= 0 and arr[j] < 0)
			j -= 1;
		if (i < j )
			swap(arr[i], arr[j]);
	}

	// i has index of leftmost negative element
	if (i == 0 || i == n)
		return;

	// start with first positive element at index 0

	// Rearranging array in alternating positive & negative items
	int k = 0;
	while (k < n && i < n ) {
		// swap next positive
		// element at even position
		// from next negative element.
		swap(arr[k], arr[i]);
		i = i + 1;
		k = k + 2;
	}
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr[] = { 2, 3, -4, -1, 6, -9 };

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "Rearranged array is \n";
	printArray(arr, n);

	return 0;
}
