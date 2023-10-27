/*1) Linear Search

#include<stdio.h>

int main(){
    printf("How many numbers do you want to enter?: ");
    int n;
    scanf("%d",&n);

    int a[n],i;
    for (i=0;i<n;i++){
        printf("\nPlease enter the %d st/nd/rd/th element: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nPlease enter the number you want to search: ");
    int x;
    scanf("%d",&x);


    int counter=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("\n%d is found at the position %d.\n",x,i+1);
        }
        else{
            counter++;
        }
    }

    if(counter==n){
        printf("\n%d is not found at the position nowhere!\n",x);
    }

    return 0;
}*/



/*2) Bubble Sort

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



/*3) Binary Search

#include<stdio.h>
int main(){
    printf("How many number(s) do you want to enter?: ");
    int n;
    scanf("%d",&n);
    for(;n<1;){
        printf("\nPlease enter at least one!: ");
        scanf("%d",&n);
    }

    printf("\nCaution! You must enter the numbers in ascending order!\n\n");
    int arr[n],i;

    for(i=0;i<n;i++){
        if(i==0){
            printf("Enter the 1st element: ");
        }
        else if(i==1){
            printf("Enter the 2nd element: ");
        }
        else if(i==2){
            printf("Enter the 3rd element: ");
        }
        else{
            printf("Enter the %dth element: ",i+1);
        }
        scanf("%d",&arr[i]);

    }

    printf("\nNow enter the number you want to search: ");
    int x;
    scanf("%d",&x);

        int n1=2*n,mid,s=0,e=n-1;

        for(i=1;i<=n;i++){
            mid=arr[(s+e)/2];

            if((x<arr[0])||(x>arr[n-1])){
                printf("\nYou are searching for %d and it is located at the position nowhere!\n",x);
                break;
            }

            if(s==e&&x!=mid){
                printf("\nYou are searching for %d and it is located at the position nowhere!\n",x);
                break;
            }

            if(s>e){
                printf("\nYou are searching for %d and it is located at the position nowhere!\n",x);
                break;
            }

            if(x==mid){
                printf("\nYou are searching for %d and it is located at the position %d.\n",x,(s+e)/2+1);
                break;
            }
            else if(x<mid){
                e=(s+e)/2-1;
            }
            else if(x>mid){
                s=(s+e)/2+1;
            }
            else{
            }
        }

    return 0;
}*/



/*4) Insertion sort

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
}*/
