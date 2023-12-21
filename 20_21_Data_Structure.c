# include<stdio.h>
# include <windows.h>
# include <math.h>  //for calculating number of moves in ToH 2^n-1
#include<stdlib.h>  //for operations related to linked list, queue etc.

void linearSearch(int,int,int);
void bubbleSort(int,int);
void binarySearch(int,int,int);
void insertionSort(int,int);
long long int factorial(int);
int FibonacciSeries(int);
void ToH(int, char, char, char);
void StackOperations();
void SinglyLinkedListOperations();
void TraverseLinkedList();
void QueueOperations();

struct node
{
    int data;
    struct node *next;
};
struct node *head;


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

        printf("                                                           \n");
        printf("                           ******                          \n");
        printf("     ********************** MENU ************************* \n");
        printf("    *                      ******                         *\n");
        printf("    *                                                     *\n");
        printf("    *   0. End                      1. Linear Search      *\n");
        printf("    *   2. Bubble Sort              3. Binary Search      *\n");
        printf("    *   4. Insertion Sort           5. Factorial          *\n");
        printf("    *   6. Fibonacci Series         7. Tower of Hanoi     *\n");
        printf("    *   8. Stack Operations         9. SLL Operations     *\n");
        printf("    *  10. Traversing Linked List  11. Queue Operations   *\n");
        printf("    *                                                     *\n");
        printf("     ***************************************************** \n");
        printf("                                                           \n");

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

            case 9:{
                printf("\n\nWe are now performing 'Singly Linked List Operations'.");
                SinglyLinkedListOperations();

                printf("\n");
                break;
            }

            case 10:{
                printf("\n\nWe are now performing 'Traverse Linked List'.");
                TraverseLinkedList();

                printf("\n");
                break;
            }

            case 11:{
                printf("\n\nWe are now performing 'Queue Operations'.");
                QueueOperations();

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

SinglyLinkedListOperations(){
    int option;

    do{
        printf("\n\nPlease select your desired index from the menu below:              \n");
        printf("\n0. Exit from S.L.L. Operations    1. Insert at Beginning           \n");
        printf("\n2. Insert at End                  3. Insert after Specific Location\n");
        printf("\n4. Delete from Beginning          5. Delete from End               \n");
        printf("\n6. Delete after Specific Location 7. Search                        \n");
        printf("\n8. Show the List                                                 \n\n");
        scanf("%d",&option);
        switch(option){
            case 0:{
                printf("\nYou selected 0. Exit from S.L.L. Operations\n");
                printf("\nExiting from Single Link List Operation! And entering the main menu!");
                break;
            }

            case 1:{
                printf("\nYou selected 1. Insert at Beginning.\n");
                struct node *ptr;
                int item;
                ptr = (struct node *) malloc(sizeof(struct node *));

                if(ptr == NULL){
                    printf("\nOverflow!");
                }
                else{
                    printf("\nPlease enter the value: ");
                    scanf("%d",&item);
                    ptr->data = item;
                    ptr->next = head;
                    head = ptr;
                    printf("\nNode inserted.\n");
                }
                break;
            }

            case 2:{
                printf("\nYou selected 2. Insert at End\n");
                struct node *ptr,*temp;
                int item;
                ptr = (struct node*)malloc(sizeof(struct node));

                if(ptr == NULL){
                    printf("\nOverflow!");
                }
                else{
                    printf("\nPlease enter the value: ");
                    scanf("%d",&item);
                    ptr->data = item;

                    if(head == NULL){
                        ptr -> next = NULL;
                        head = ptr;
                        printf("\nOne new node inserted.\n");
                    }
                    else{
                        temp = head;
                        while (temp -> next != NULL){
                            temp = temp -> next;
                        }

                        temp->next = ptr;
                        ptr->next = NULL;
                        printf("\nOne new node inserted.\n");
                    }
                }
                break;
            }

            case 3:{
                printf("\nYou selected 3. Insert after Specific Location\n");
                int i,loc,item;
                struct node *ptr, *temp;
                ptr = (struct node *) malloc (sizeof(struct node));

                if(ptr == NULL){
                    printf("\nOverflow!");
                }
                else{
                    printf("\nPlease enter the value: ");
                    scanf("%d",&item);
                    ptr->data = item;
                    printf("\nEnter the location after which you want to insert: ");
                    scanf("\n%d",&loc);
                    temp=head;

                    for(i=0;i<loc;i++){
                        temp = temp->next;

                        if(temp == NULL){
                            printf("\nCannot be inserted!\n");
                            return;
                        }
                    }

                    ptr ->next = temp ->next;
                    temp ->next = ptr;
                    printf("\nOne new node inserted.\n");
                }
                break;
            }

            case 4:{
                printf("\nYou selected 4. Delete from Beginning\n");
                struct node *ptr;
                if(head == NULL){
                    printf("\nList is empty!\n");
                }
                else{
                    ptr = head;
                    head = ptr->next;
                    free(ptr);
                    printf("\nNode deleted from the beginning.\n");
                }
                break;
            }

            case 5:{
                printf("\nYou selected 5. Delete from End\n");
                struct node *ptr,*ptr1;
                if(head == NULL){
                    printf("\nList is empty!\n");
                }
                else if(head -> next == NULL){
                    head = NULL;
                    free(head);
                    printf("\nOnly node of the list deleted.\n");
                }
                else{
                    ptr = head;

                    while(ptr->next != NULL){
                        ptr1 = ptr;
                        ptr = ptr ->next;
                    }

                    ptr1->next = NULL;
                    free(ptr);
                    printf("\nDeleted node from the last.\n");
                }
                break;
            }

            case 6:{
                printf("\nYou selected 6. Delete after Specific Location.\n");
                struct node *ptr,*ptr1;
                int loc,i;
                printf("\nEnter the location after you want to delete: ");
                scanf("%d",&loc);
                ptr=head;

                for(i=0;i<loc;i++){
                    ptr1 = ptr;
                    ptr = ptr->next;

                    if(ptr == NULL){
                        printf("\nCannot be inserted!\n");
                        return;
                    }
                }

                ptr1 ->next = ptr ->next;
                free(ptr);
                printf("\nDeleted node from the %d.\n",loc+1);

                break;
            }

            case 7:{
                printf("\nYou selected 7. Search.\n");
                struct node *ptr;
                int item,i=0,flag;
                ptr = head;

                if(ptr == NULL){
                    printf("\nList is empty!\n");
                }
                else{
                    printf("\nPlease enter what you want to search: ");
                    scanf("%d",&item);

                    while (ptr!=NULL){
                        if(ptr->data == item){
                            printf("It is found at the location %d.\n",i+1);
                            flag=0;
                        }
                        else{
                            flag=1;
                        }
                        i++;
                        ptr = ptr -> next;
                    }

                    if(flag==1){
                        printf("\nIt is not found!\n");
                    }
                }

                break;
            }

            case 8:{
                printf("\nYou selected 8. Show the List\n");
                struct node *ptr;
                ptr = head;

                if(ptr == NULL){
                    printf("\nList is empty! Nothing to print!\n");
                }
                else{
                    printf("\nThe list is as below:\n");

                    while (ptr!=NULL){
                        printf("\n%d",ptr->data);
                        ptr = ptr -> next;
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

TraverseLinkedList(){
    int choice;

    do{
        // Node structure for singly linked list
        struct Node {
            int data;
            struct Node* next;
        };

        // Node structure for doubly linked list
        struct DoubleNode {
            int data;
            struct DoubleNode* next;
            struct DoubleNode* prev;
        };

        struct Node* singlyLinkedList = NULL;
        struct DoubleNode* doublyLinkedList = NULL;
        struct Node* singlyCircularLinkedList = NULL;
        struct DoubleNode* doublyCircularLinkedList = NULL;

        printf("\n\nPlease select your desired index from the menu below:\n");
        printf("\n0. Exit from Traverse Linked List\n");
        printf("\n1. Traverse Singly Linked List\n");
        printf("\n2. Traverse Doubly Linked List\n");
        printf("\n3. Traverse Singly-Linked Circular Linked List\n");
        printf("\n4. Traverse Doubly-Linked Circular Linked List\n\n");
        scanf("%d", &choice);

        switch (choice) {
            case 0:{
                printf("\nYou selected 0. Exit from Traverse Linked List\n");
                printf("\nExiting from Traverse Linked List! And entering the main menu!");

                break;
            }

            case 1:{
                // Create and Traverse Singly Linked List
                struct Node* temp;
                int num;

                printf("\nEnter the number of nodes for your Singly Linked List: ");
                scanf("%d", &num);

                printf("\nEnter the data for each node (separated by space and press enter after the last one):\n");
                for (int i = 0; i < num; ++i) {
                        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                        scanf("%d", &newNode->data);
                        newNode->next = NULL;

                        if (singlyLinkedList == NULL) {
                            singlyLinkedList = newNode;
                            temp = newNode;
                        } else {
                            temp->next = newNode;
                            temp = newNode;
                        }
                }

                // Traverse and Print Singly Linked List
                printf("\nYour entered Singly Linked List as below: \n");

                temp = singlyLinkedList;
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }

                printf("NULL\n");
                break;
            }

            case 2:{
                // Create and Traverse Doubly Linked List

                struct DoubleNode* temp;
                int num;

                printf("\nEnter the number of nodes for your Doubly Linked List: ");
                scanf("%d", &num);

                printf("\nEnter the data for each node (separated by space and press enter after the last one):\n");

                for (int i = 0; i < num; ++i) {
                    struct DoubleNode* newNode = (struct DoubleNode*)malloc(sizeof(struct DoubleNode));
                    scanf("%d", &newNode->data);
                    newNode->next = NULL;
                    newNode->prev = NULL;

                    if (doublyLinkedList == NULL) {
                        doublyLinkedList = newNode;
                        temp = newNode;
                    }
                    else{
                        temp->next = newNode;
                        newNode->prev = temp;
                        temp = newNode;
                    }
                }

                // Traverse and Print Doubly Linked List
                printf("\nYour entered Doubly Linked List as below: \n");
                temp = doublyLinkedList;

                while (temp != NULL) {
                    printf("%d <-> ", temp->data);
                    temp = temp->next;
                }

                printf("NULL\n");

                break;
            }

            case 3:{
                // Create and Traverse Singly-Linked Circular Linked List

                struct Node* temp;
                int num;

                printf("\nEnter the number of nodes for your Singly-Linked Circular Linked List: ");
                scanf("%d", &num);

                printf("\nEnter the data for each node (separated by space and press enter after the last one):\n");

                for (int i = 0; i < num; ++i) {
                    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                    scanf("%d", &newNode->data);
                    newNode->next = NULL;

                    if (singlyCircularLinkedList == NULL) {
                        singlyCircularLinkedList = newNode;
                        temp = newNode;
                        newNode->next = newNode;  // Circular link
                    }
                    else {
                        temp->next = newNode;
                        temp = newNode;
                        newNode->next = singlyCircularLinkedList;  // Circular link
                    }
                }

                // Traverse and Print Singly-Linked Circular Linked List
                printf("\nYour entered Singly-Linked Circular Linked List as below: \n");
                temp = singlyCircularLinkedList;

                do {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                while (temp != singlyCircularLinkedList);
                printf("(head)\n");

                break;
            }

            case 4:{
                // Create and Traverse Doubly-Linked Circular Linked List

                struct DoubleNode* temp;
                int num;

                printf("\nEnter the number of nodes for your Doubly-Linked Circular Linked List: ");
                scanf("%d", &num);

                printf("\nEnter the data for each node (separated by space and press enter after the last one):\n");

                for (int i = 0; i < num; ++i) {
                    struct DoubleNode* newNode = (struct DoubleNode*)malloc(sizeof(struct DoubleNode));
                    scanf("%d", &newNode->data);
                    newNode->next = NULL;
                    newNode->prev = NULL;

                    if (doublyCircularLinkedList == NULL) {
                        doublyCircularLinkedList = newNode;
                        temp = newNode;
                        newNode->next = newNode;  // Circular link
                        newNode->prev = newNode;  // Circular link
                    }
                    else {
                        temp->next = newNode;
                        newNode->prev = temp;
                        temp = newNode;
                        newNode->next = doublyCircularLinkedList;  // Circular link
                        doublyCircularLinkedList->prev = newNode;  // Circular link
                    }
                }

                // Traverse and Print Doubly-Linked Circular Linked List
                printf("\nYour entered Doubly-Linked Circular Linked List as below: \n");
                temp = doublyCircularLinkedList;
                do {
                    printf("%d <-> ", temp->data);
                    temp = temp->next;
                }
                while (temp != doublyCircularLinkedList);

                printf("(head)\n");

                break;
            }

            default:{
                printf("\nPlease enter a valid option!\n");
            }
        };

    }
    while (choice != 0);
}

QueueOperations(){
    struct Queue {
        int front, rear;
        int *elements;
        int maxSize;
    } queue;

    queue.front = -1;
    queue.rear = -1;

    printf("Please enter the maximum size of the queue: ");
    scanf("%d", &queue.maxSize);

    // Allocate memory for queue elements
    queue.elements = (int *)malloc(queue.maxSize * sizeof(int));

    if (queue.elements == NULL) {
        printf("Memory allocation error. Exiting now!\n");
        return 1;
    }

    int choice, element;

    do {
        printf("\nPlease see the menu below and then choose your option.\n\n");
        printf("0. Exit from Queue Operations\n");
        printf("1. Enqueue (Insert) Element\n");
        printf("2. Dequeue (Remove) Element\n");
        printf("3. Peek Front Element\n");
        printf("4. Check if Queue is Empty\n");
        printf("5. Check if Queue is Full\n");
        printf("6. Display Queue\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:{
                printf("\nYou selected 0. Exit from Queue Operations\n");
                printf("\nExiting from Queue Operations! And entering the main menu!");

                break;
            }

            case 1:{
                // Enqueue (Insert) Element
                if ((queue.rear + 1) % queue.maxSize == queue.front) {
                    printf("Queue is full! Cannot be enqueued!\n");
                }
                else {
                    printf("Enter the element to enqueue: ");
                    scanf("%d", &element);

                    if (queue.front == -1) {
                        queue.front = 0; // Set front to 0 if the queue was empty
                    }

                    queue.rear = (queue.rear + 1) % queue.maxSize;
                    queue.elements[queue.rear] = element;

                    printf("Enqueued %d successfully.\n", element);
                }

                break;
            }

            case 2:{
                // Dequeue (Remove) Element
                if (queue.front == -1) {
                    printf("Queue is empty! Cannot be dequeued!\n");
                }
                else {
                    element = queue.elements[queue.front];

                    if (queue.front == queue.rear) {
                        // Reset front and rear to -1 if the last element is dequeued
                        queue.front = -1;
                        queue.rear = -1;
                    }
                    else {
                        queue.front = (queue.front + 1) % queue.maxSize;
                    }

                    printf("Dequeued %d successfully.\n", element);
                }

                break;
            }

            case 3:{
                // Peek Front Element
                if (queue.front == -1) {
                    printf("Queue is empty! Cannot be peeked!\n");
                }
                else {
                    printf("Front element of the queue is: %d\n", queue.elements[queue.front]);
                }

                break;
            }

            case 4:{
                // Check if Queue is Empty
                if (queue.front == -1) {
                    printf("The queue is empty!\n");
                }
                else {
                    printf("The queue is not empty!\n");
                }

                break;
            }

            case 5:{
                // Check if Queue is Full
                if ((queue.rear + 1) % queue.maxSize == queue.front) {
                    printf("The queue is full!\n");
                }
                else {
                    printf("The queue is not full!\n");
                }

                break;
            }

            case 6:{
                // Display Queue
                if (queue.front == -1) {
                    printf("The queue is empty!\n");
                }
                else {
                    printf("The queue is as follows:\n");
                    int i = queue.front;
                    do {
                        printf("%d ", queue.elements[i]);
                        i = (i + 1) % queue.maxSize;
                    }
                    while (i != (queue.rear + 1) % queue.maxSize);

                    printf("\n");
                }

                break;
            }

            default:
                printf("\nPlease enter a valid option!\n");
        }

    }
    while (choice != 0);

    // Free allocated memory
    free(queue.elements);
}
