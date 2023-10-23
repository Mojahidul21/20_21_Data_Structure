//Bubble Sort
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
}
