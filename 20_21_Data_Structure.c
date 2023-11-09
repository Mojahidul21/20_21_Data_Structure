#include<stdio.h>

void linearSearch(int,int,int);
void bubbleSort(int,int,int);
void binarySearch(int,int,int);
void insertionSort(int,int);

int main(){
    int select;

    do{
        printf("Please enter your job index from the list below: \n\n");
        printf("1. Linear Search\n2. Bubble Sort\n3. Binary Search\n4. Insertion Sort\n0. End\n\n");


        scanf("%d",&select);

        switch(select){

            case 0:{
                printf("\nThe End.\n");
                break;
            }

            case 1:{
                printf("Welcome! Now we are performing Linear Search.\n");
                printf("How many number(s) do you want to enter? ");
                int n;
                scanf("%d",&n);

                int arr[n];
                printf("Please enter the number(s) below -\n");

                for (int i=0;i<n;i++){
                    if(i==0){
                        printf("%dst number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else if(i==1){
                        printf("%dnd number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else if(i==2){
                        printf("%drd number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else{
                        printf("%dth number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                }

                printf("Now, enter the number you want to search for: ");
                int x;
                scanf("%d",&x);

                linearSearch(n,arr,x);
                printf("\n\n");
                break;
            }

            case 2:{
                printf("Welcome! Now we are performing Bubble Sort.\n");
                printf("How many number(s) do you want to enter? ");
                int n;
                scanf("%d",&n);

                int arr[n];
                printf("Please enter the number(s) below -\n");

                for (int i=0;i<n;i++){
                    if(i==0){
                        printf("%dst number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else if(i==1){
                        printf("%dnd number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else if(i==2){
                        printf("%drd number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    else{
                        printf("%dth number: ",i+1);
                        scanf("%d",&arr[i]);
                    }
                }

                printf("Now, enter the number you want to search for: ");
                int x;
                scanf("%d",&x);

                linearSearch(n,arr,x);
                break;
            }

            case 3:{
                printf("3");
                break;
            }

            case 4:{
                printf("4");
                break;
            }

            default:{
                printf("Invalid selection!\n");
                printf("Please enter a valid index from the menu: ");
                break;
            }
        }
    }
    while(select!=0);

    return 0;
}

linearSearch(int n1,int arr1[],int x1){
    int counter=0;
    for(int i=0;i<n1;i++){
        if(arr1[i]==x1){
            printf("\n%d is found at the position %d.",x1,i+1);
        }
        else{
            counter++;
        }
    }

    if(counter==n1){
        printf("\n%d is not found at the position nowhere!",x1);
    }
}

