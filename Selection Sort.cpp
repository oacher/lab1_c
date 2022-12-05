#include<iostream>
template <class T>
void SelectionSort(T arr[], int size_arr)      //шаблон для сортировки Selection Sort
{
	int temp;
	for (int i = 0; i < size_arr - 1; ++i)
	{
		temp = i;
		for (int j = i + 1; j < size_arr; j++)
		{
			if (arr[j] < arr[temp]) {
				temp = j;
			}

		}

		arr[temp] = arr[i] + arr[temp];
		arr[i] = arr[temp] - arr[i];
		arr[temp] = arr[temp] - arr[i];
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
	int arr[] = { 6, 0, -345, 64, 9, 1, -3 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, size_arr);
	PrintArray(arr, size_arr);
	return 0;
}