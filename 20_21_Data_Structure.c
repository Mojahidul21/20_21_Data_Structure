# include<stdio.h>
# include <windows.h>
# include <math.h>

void linearSearch(int,int,int);
void bubbleSort(int,int);
void binarySearch(int,int,int);
void insertionSort(int,int);
long long int factorial(int);
int FibonacciSeries(int);
void ToH(int, char, char, char);
void StackOperations();


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
        printf("    *  0. End                    1. Linear Search       *\n");
        printf("    *  2. Bubble Sort            3. Binary Search       *\n");
        printf("    *  4. Insertion Sort         5. Factorial           *\n");
        printf("    *  6. Fibonacci Series       7. Tower of Hanoi      *\n");
        printf("    *  8. Stack Operations                              *\n");
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
                printf("\n-The End-\n");
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
                printf("\n\nWe are now performing 'Factorial'.");
                printf("\nEnter the number (from 1 to 20) you want factorial: ");
                int n;
                scanf("%d",&n);
                while(n<0||n>20){
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

                    printf("Please enter a valid number! from 0 to 20: ");

                    ForgC=0;
                    WORD wColor2;
                    //This handle is needed to get the current background attribute

                    HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);
                    CONSOLE_SCREEN_BUFFER_INFO csbi2;
                    //csbi is used for wAttributes word

                    if(GetConsoleScreenBufferInfo(hStdOut2, &csbi2)){
                        //To mask out all but the background attribute, and to add the color
                        wColor2 = (csbi2.wAttributes & 0xF0) + (ForgC & 0x0F);
                        SetConsoleTextAttribute(hStdOut2, wColor2);
                    }
                    scanf("%d",&n);
                }

                printf("The factorial of %d is: %I64d.\n",n,factorial(n));

                printf("\n");
                break;
            }

            case 6:{
                printf("\n\nWe are now performing 'Fibonacci Series'.\n");
                printf("How many terms do you want the series up to? ");

                int n1;
                scanf("%d",&n1);
                while(n1<1){
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

                    printf("Please enter a valid number! Enter above 0: ");

                    ForgC=0;
                    WORD wColor2;
                    //This handle is needed to get the current background attribute

                    HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);
                    CONSOLE_SCREEN_BUFFER_INFO csbi2;
                    //csbi is used for wAttributes word

                    if(GetConsoleScreenBufferInfo(hStdOut2, &csbi2)){
                        //To mask out all but the background attribute, and to add the color
                        wColor2 = (csbi2.wAttributes & 0xF0) + (ForgC & 0x0F);
                        SetConsoleTextAttribute(hStdOut2, wColor2);
                    }

                    scanf("%d",&n1);
                }

                printf("You entered %d and the series is as below:\n",n1);
                for(int i=1;i<=n1;i++){
                    if(i<n1){
                        printf("%d, ",FibonacciSeries(i));
                    }
                    else{
                        printf("%d.\n",FibonacciSeries(i));
                    }
                }

                printf("\n");
                break;
            }

            case 7:{
                printf("\n\nWe are now performing 'Tower of Hanoi'.");
                printf("\nEnter the number of disk(s): ");
                int n;
                scanf("%d",&n);
                while(n<1){
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
                    printf("Invalid input! Enter above 0: ");

                    ForgC=0;
                    WORD wColor2;
                    //This handle is needed to get the current background attribute

                    HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);
                    CONSOLE_SCREEN_BUFFER_INFO csbi2;
                    //csbi is used for wAttributes word

                    if(GetConsoleScreenBufferInfo(hStdOut2, &csbi2)){
                        //To mask out all but the background attribute, and to add the color
                        wColor2 = (csbi2.wAttributes & 0xF0) + (ForgC & 0x0F);
                        SetConsoleTextAttribute(hStdOut2, wColor2);
                    }

                    scanf("%d",&n);
                }

                printf("Note-1: Disks are marked 1, 2, 3, ... from top to bottom.");
                printf("\nNote-2: Pegs are marked A, B, C from left to right (smallest to biggest.");
                printf("\nNote-3: Total disk(s) = n = %d and so total move(s) = 2^n - 1 = 2^%d - 1 = %.0lf.",n,n,pow(2,n)-1);
                printf("\nThe step by step moves are as follows -");
                ToH(n,'A','C','B');

                printf("\n");
                break;
            }

            case 8:{
                printf("\n\nWe are now performing 'Stack Operations'.");
                StackOperations();

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

long long int factorial(int n1){
    if(n1==0){
        return 1;
    }

    else{
        return n1*factorial(n1-1);
    }
}

int FibonacciSeries(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return FibonacciSeries(n-2)+FibonacciSeries(n-1);
    }
}

ToH(int n1,char from_peg,char to_peg,char aux_peg){
    // Base Condition
    if (n1==1){
        printf("\nMove disk-1 from peg-%c to peg-%c",from_peg,to_peg);
        return;
    }

    // Calling the function recursively twice
    ToH(n1-1, from_peg, aux_peg, to_peg);
    printf("\nMove disk-%d from peg-%c to peg-%c",n1,from_peg,to_peg);
    ToH(n1-1,aux_peg,to_peg,from_peg);
}

StackOperations(){
    int option,top=-1,value;
    printf("\n\nPlease type the maximum number of element(s) in your stack: ");
    int n;
    scanf("%d",&n);
    int stack[n];

    do{
        printf("\nPlease select your desired index from the menu below:\n");
        printf("\n0. Exit from Stack Operations   1. push()");
        printf("\n2. pop()                        3. peek()");
        printf("\n4. Show the Stack                    \n\n");
        scanf("%d",&option);
        switch(option){
            case 0:{
                printf("\nYou selected 0. Exit from Stack Operations\n");
                printf("\nExiting from Stack Operation! And entering the main menu!");
                break;
            }

            case 1:{
                printf("\nYou selected 1. push()\n");
                if (top == n-1 ){
                    printf("\nOverflow! To push a new element, you must pop first!\n");
                }
                else{
                    if(top==-1){
                        printf("\nEnter the 1st element: ");
                    }
                    else if(top==0){
                        printf("\nEnter the 2nd element: ");
                    }
                    else if(top==1){
                        printf("\nEnter the 3rd element: ");
                    }
                    else{
                        printf("\nEnter the %dth element: ",top+2);
                    }
                    scanf("%d",&value);
                    top++;
                    stack[top]=value;
                }
                break;
            }

            case 2:{
                printf("\nYou selected 2. pop()\n");
                if(top == -1){
                    printf("\nUnderflow!");
                }
                else{
                    if(top==0){
                        printf("\nThe top (1st) element %d is now being pop.\n",stack[top]);
                    }
                    else if(top==1){
                        printf("\nThe top (2nd) element %d is now being pop.\n",stack[top]);
                    }
                    else if(top==2){
                        printf("\nThe top (3rd) element %d is now being pop.\n",stack[top]);
                    }
                    else{
                        printf("\nThe top (%dth) element %d is now being pop.\n",top+1,stack[top]);
                    }
                    top--;
                }
                break;
            }

            case 3:{
                printf("\nYou selected 3. peek()\n");
                if(top == -1){
                    printf("\nStack is empty!\n");
                }
                else{
                    printf("\n%d",stack[top]);
                }
                break;
            }

            case 4:{
                printf("\nYou selected 4. Show the Stack\n\n");
                if(top == -1){
                    printf("Stack is empty!\n");
                }
                else{
                    for (int i=top;i>=0;i--){
                        printf("%d\n",stack[i]);
                    }
                }

                break;
            }

            default:{
                printf("\nPlease enter a valid option!\n");
            }
        };
    }
    while(option!=0);
}
