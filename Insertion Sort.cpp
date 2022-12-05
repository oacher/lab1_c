#include<iostream>
template <class T>
void InsertionSort(T arr[], int size_arr)      //шаблон для сортировки Insertion Sort
{
	int i, j;
	T temp;

	for (int i = 1; i < size_arr; ++i)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;

	}
}
template <class T>                  //шаблон для вывода массива
void PrintArray(T arr[], int size_arr)
{
	for (int i = 0; i < size_arr; ++i)
	{
		std::cout << arr[i] << ' ';
	}
}

int main()
{
	int arr[] = { 9, -34, 0, 6, 5, 10, -123, 8, 43, -3, 5, 987 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	InsertionSort(arr, size_arr);
	PrintArray(arr, size_arr);
	return 0;
}