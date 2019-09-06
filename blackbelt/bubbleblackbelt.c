/* CSCI 240 Week 2 Assignment BlackBelt Assignment
 * Bubble sort algorithm 
 * Sort an Array of n Elements in ascending order taking user inputed size of array and integers in array.
 * */

#include <stdio.h>

int main () {

	int array [50];
	int n;
	int i;
	int j;
	int swap;

	//print the statement in quotations.
	printf("Enter the number of elements in your array \n");
	
	//scan user input to determine size of array.
	scanf("%d", &n);
	
	//print the statement in quotations.
	printf("Enter a series of %d integers for your %d element array \n", n, n); 

	//scan user inputed integers into array.
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	
	//sort integers in array.
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j+1]) {
				swap = array[j];
				array[j] = array[j+1];
				array[j+1] = swap;
			}
		}
	}
	
	//print statement in quotations.
	printf("Sorted list in ascending order: \n");
	
	//print sorted array.
	for (i = 0; i < n; i++) {
		printf("%d\n", array[i]);
	}

	return 0;
}
