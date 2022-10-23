#include <iostream>
int const globalsize = 5;
void max_varib(int a,int b, int c) 
{
	int max = a > b ? a : b > c ? b : c;
	int& maxref = max;
	b, c = maxref;
	a = maxref;
	std::cout << a << ' ' << b << ' ' << c << '\n';
}
int& rarr(int arr[], int const length)
{
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			return arr[i];
	return arr[0];
}
void show_arr(int arr[], int const length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\b\.\n";
}
void null_element(int arr1[], int arr2[], int const length)
{
	 int* px = &arr1[0];
	 int* py = &arr2[0];
	for ( int i = 0; i < length; i++)
	{
		if (*px == *py)
			*py = 0;
	px++;
	py++;
		std::cout << arr2[i] << ' ';
	}	
}
int main ()
{
	int A = 3, B = 6, C = 4;
	std::cout << "\nTask1: ";
	max_varib(A, B, C);

	
	int arr[5]{ 1,2,3,-4,5 };
	std::cout << "\nTask2: ";
	std::cout << rarr(arr, globalsize) << '\n';

	std::cout << "\nTask3:\nStarted arrays\n";
	int arr1[globalsize]{ 1,2,3,4,5 };
	int arr2[globalsize]{ 1,1,3,3,5 };
	show_arr(arr1, globalsize);
	show_arr(arr2, globalsize);
	null_element(arr1, arr2, globalsize);
	
	
	return 0;
}