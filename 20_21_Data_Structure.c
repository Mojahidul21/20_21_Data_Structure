//Linear Search

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

    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("\n%d is found at the position %d.\n",x,i+1);
        }
    }
    return 0;
}
