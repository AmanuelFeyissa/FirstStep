// Iterative C++ program to reverse an array
#include <iostream>
using namespace std;

/* Function to reverse arr[] from the beginning to end*/
void revArray(int arr[], int begin, int end)
{
	while (begin < end)
	{
		int tempo = arr[begin]; 
		arr[begin] = arr[end];
		arr[end] = tempo;
		begin++;
		end--;
	} 
}	 

/* function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
} 

/* Driver function to test above functions */
int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	int n = sizeof(arr) / sizeof(arr[0]); 

	// To print original array 
	printArray(arr, n);
	
	// Function calling
	revArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	// To print the Reversed array
	printArray(arr, n);
	
	return 0;
}
