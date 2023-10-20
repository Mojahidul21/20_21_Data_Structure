#include<stdio.h>
#include<string.h>

//Now I will add this file to my repository. Then it will be modified time to time.
void LinearSearch(int arr[], int arrSize, int searchNum);
void BinarySearch(int arr[], int arrSize, int searchNum);
void BubbleSort(int arr[], int arrSize);
void InsertionSort(int arr[], int n);

int main() {
    int select;
    do {
        printf("Please select from menu: \n");
        printf("0.End\n1.Linear Search\n2.Binary Search\n3.Bubble Sort\n4.Insertion Sort\n");
        scanf("%d", &select);

        switch(select){
            case 0:
                printf("End");

                break;


            case 1:

                break;


            case 2:

                break;


            case 3:

                break;


            case 4:

                break;


            default:
                printf("\nInvalid selection. Please select a valid number from the menu.\n");
                break;
        }
    }
    while(select != 0);

    return 0;
}
