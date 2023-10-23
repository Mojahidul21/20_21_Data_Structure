//Bubble Sort
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
}
