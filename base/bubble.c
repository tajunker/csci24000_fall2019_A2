//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int* a, int* b);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
    printf("Before: \n");
    printValues();
    sort();
    printf("\n");
    printf("After: \n");
    printValues();

    return(0);
} // end main

// printValues() prints the values in the array values[]
void printValues() {
    int loop;
    
    printf("[");
    for (loop = 0; loop < MAX; loop++) {

        printf(" %d ", values[loop]);	
    }
    
    printf("]");
            												
}

// sort() sorts the values in the array values[]
void sort() {

    int i;
    int j;

    for (i = 0; i < MAX - 1; i++) {
        for (j = 0; j < MAX - i - 1; j++) {
            if (values[j] > values[j+1]) {
                swap (&values[j], &values[j+1]);												  printf("\n"); 														    printValues();														 
            }              													
        }   															
    }
}             															

// swap() swaps the values in the array values[]
void swap(int* a, int* b) {
    
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;

}
