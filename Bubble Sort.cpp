#include <iostream>
template <class T>
void Bubble_Sort(T arr[], int size_arr)			//шаблон сортировки Bubble Sort
{	
	for (int i = 0; i < size_arr - 1; i++) {
		for (int j = 0; j < size_arr - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
int main() {

	int arr[] = { 1,9,7,4,11, 3, -6, 95, 0, 53, -123 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr, size_arr);

	for (int i = 0; i < size_arr; i++) {		//вывод отсортированного массива
		std::cout << arr[i] << " ";
	}
	return 0;
}