#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partir(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{

		int pi = partir(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void print(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		cout << "%d ", arr[i];
	}
	cout << "n" << endl;
}



int main()
{
	int i, b = 0, num = 5;
	double suma = 0.0;
	cout << "Para salir ingresa cero" << endl;
	while (num <= 5) {
		cout << "Ingresa un numero" << endl;
		cin >> num;
		suma = suma + num;
		b++;
	}

	cout << suma / (b - 1)<<endl;

	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Array ordenando: n" << endl;
	cout << arr, n;
	return 0;

	system("pause");
	return 0;
}

	

