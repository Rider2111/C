//This program is all about finding nth greatest number in an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], n, temp, KEY;

    printf("Enter the number of elements you want to enter (between 1 to 100): ");
    scanf("%d",&n);
    
    //taking input from user
    for (int i=0; i<n; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }
    
    //sorting the array using bubble sort technique
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (array[j] <array[j+1]){    // we will sort array in descending order for sorting array in ascending order we will use array[j] > array[j+1]
                temp = array[j];          // here we will swap the numbers
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    // here we will print the array in sorted order
    for (int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    printf("\nEnter the rank of greatest number: ");
    scanf("%d",&KEY);
    
    // here we will check if the nth rank is actually available or not according to the total number of elements present in the array 
    if (KEY< n)
        printf("%d",array[KEY-1]);
    else
        printf("INVALID INPUT!");   //if rank exceed the number of elements in the array it will show this message

}
