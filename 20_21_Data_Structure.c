#include<stdio.h>
#include <windows.h>

void linearSearch(int,int,int);
void bubbleSort(int,int);
void binarySearch(int,int,int);
void insertionSort(int,int);

int main(){
    int select;

    do{
        int ForgC=50;
        WORD wColor;
     //This handle is needed to get the current background attribute

        HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        //csbi is used for wAttributes word

        if(GetConsoleScreenBufferInfo(hStdOut, &csbi)){
            //To mask out all but the background attribute, and to add the color
            wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
            SetConsoleTextAttribute(hStdOut, wColor);
        }

        printf("                                                         \n");
        printf("                          ******                         \n");
        printf("     ********************* MENU ************************ \n");
        printf("    *                     ******                        *\n");
        printf("    *                                                   *\n");
        printf("    *  1. Linear Search          2. Bubble Sort         *\n");
        printf("    *  3. Binary Search          4. Insertion Sort      *\n");
        printf("    *  5. Find Factorial         6. Fibonacci Series    *\n");
        printf("    *  7. Tower of Hanoi                                *\n");
        printf("    *                                                   *\n");
        printf("     *************************************************** \n");
        printf("                                                         \n");

        printf("     Please enter your job index as per the above menu: ");
        scanf("%d",&select);

        ForgC=0;
        WORD wColor1;
        //This handle is needed to get the current background attribute

        HANDLE hStdOut1 = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi1;
        //csbi is used for wAttributes word

        if(GetConsoleScreenBufferInfo(hStdOut, &csbi1)){
            //To mask out all but the background attribute, and to add the color
            wColor1 = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
            SetConsoleTextAttribute(hStdOut, wColor1);
        }

        switch(select){

            case 0:{
                printf("-The End-\n");
                break;
            }

            case 1:{
                printf("\n\nWe are now performing 'Linear Search'.\n");
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
                printf("\n");
                break;
            }

            case 2:{
                printf("\n\nWe are now performing 'Bubble Sort'.\n");
                printf("How many numbers do you want to enter? ");
                int n;
                scanf("%d",&n);

                int arr[n];
                printf("Please enter the numbers below -\n");

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

                printf("The sorted numbers in ascending order are as follows -\n");

                bubbleSort(n,arr);
                printf("\n");
                break;
            }

            case 3:{
                printf("\n\nWe are now performing 'Binary Search'.\n");
                printf("How many number(s) do you want to enter? ");
                int n;
                scanf("%d",&n);

                int arr[n];
                printf("Please enter the number(s) below must be sorted in ascending order -\n");

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

                binarySearch(n,arr,x);
                printf("\n");
                break;
            }

            case 4:{
                printf("\n\nWe are now performing 'Insertion Sort'.\n");
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

                printf("The sorted numbers in ascending order are as follows -\n");

                insertionSort(n,arr);
                printf("\n");
                break;
            }

            case 5:{
                printf("\n\nWe are now performing 'Find Factorial'.\n");
                printf("Enter the number you want factorial: ");
                printf("\n");
                break;
            }

            case 6:{
                printf("\n\nWe are now performing 'Fibonacci Series'.\n");
                printf("How many terms do you want the series up to? ");
                printf("\n");
                break;
            }

            default:{
                ForgC=12;
                WORD wColor1;
                //This handle is needed to get the current background attribute

                HANDLE hStdOut1 = GetStdHandle(STD_OUTPUT_HANDLE);
                CONSOLE_SCREEN_BUFFER_INFO csbi1;
                //csbi is used for wAttributes word

                if(GetConsoleScreenBufferInfo(hStdOut, &csbi1)){
                    //To mask out all but the background attribute, and to add the color
                    wColor1 = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
                    SetConsoleTextAttribute(hStdOut, wColor1);
                }
                printf("\nInvalid selection! Please enter a valid index as per the menu.\n");
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
            printf("%d is found at the position %d.\n",x1,i+1);
        }
        else{
            counter++;
        }
    }

    if(counter==n1){
        printf("\n%d is not found at the position nowhere!",x1);
    }
}

bubbleSort(int n1,int arr1[]){
    for(int i=0,j=1;i<=n1-1-1;i++,j++){ //array size (n1), index (-1), last but one position (-1)
        for(int k=0; k<=n1-1-j;k++){
            if(arr1[k]>arr1[k+1]){
                int container;
                container=arr1[k];
                arr1[k]=arr1[k+1];
                arr1[k+1]=container;
            }
        }
    }

    for(int i=0;i<=n1-1;i++){
        printf("%d ",arr1[i]);
    }
}

binarySearch(int n1,int arr1[],int x1){
    int n2=2*n1,mid,s=0,e=n1-1;

    for(int i=1;i<=n1;i++){
            mid=arr1[(s+e)/2];

            if((x1<arr1[0])||(x1>arr1[n1-1])){
                printf("You are searching for %d and it is located at the position nowhere!\n",x1);
                break;
            }

            if(s==e&&x1!=mid){
                printf("You are searching for %d and it is located at the position nowhere!\n",x1);
                break;
            }

            if(s>e){
                printf("You are searching for %d and it is located at the position nowhere!\n",x1);
                break;
            }

            if(x1==mid){
                printf("You are searching for %d and it is located at the position %d.\n",x1,(s+e)/2+1);
                break;
            }
            else if(x1<mid){
                e=(s+e)/2-1;
            }
            else if(x1>mid){
                s=(s+e)/2+1;
            }
            else{
            }
        }
}

insertionSort(int n1,int arr1[]){
    for(int i=1;i<n1;i++){
        if(arr1[i]<arr1[i-1]){
            int temp=arr1[i];

            for(int j=i-1;(j>=0)&&(temp<arr1[j]);j--){
                arr1[j+1]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    printf("The numbers you entered are sorted in ascending order as follows:\n");
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
}
