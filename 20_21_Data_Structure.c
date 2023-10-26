/*//Bubble Sort
# include<stdio.h>
int main(){
    printf("Please enter array size: ");
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("\nPlease enter array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nExcellent! You entered the array as: ");
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0,j=1;i<=n-1-1;i++,j++){ //array size (n), index (-1), last but one position (-1)
        for(int k=0; k<=n-1-j;k++){
            if(arr[k]>arr[k+1]){
                int container;
                container=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=container;
            }
        }
    }

    printf("\n\nAnd it is sorted ascending order as: ");
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}*/



//Insertion sort

#include<stdio.h>

int main(){
    printf("How many numbers do you want to enter?: ");
    int n;
    scanf("%d",&n);
    printf("\n");

    int a[n],i;
    for(i=0;i<n;i++){
        printf("Please enter the %d st/nd/rd/th number: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            int temp=a[i];

            for(int j=i-1;(j>=0)&&(temp<a[j]);j--){
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("The numbers you entered are sorted (Insertion Sort) ascending order as follows:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}
