#include<stdio.h>
#include<stdlib.h>
int max=10;
int top=-1;
int s[10];
void push();
void pop();
void palindrome();
void over_under();
void display();
int main(){
    int i , n;
    do{
    printf("1. for push \n2. for pop \n3. for palindrome \n4. for overunder \n5 . for display ");
    scanf ("%d",&n);
    switch (n)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        palindrome();
        break;
    case 4:
        over_under();
        break; 
    case 5:
         display();  
         break;  
    case 0:
        printf("exiting the program");
        exit(0);
    default:
        break;
    }
}while(1);
    return 0;
}
void push(){
    int ele;
    printf(" \n Enter the element you want to push ");
    scanf("%d",&ele);
    if(top==max-1){
        printf("stack is overflow ");
    }else{
        top++;
        s[top]=ele;
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow ");
    }else{
        printf("%d is popped",s[top]);
        top--;
    }
}
void palindrome(){
    int i;
    for(i=0;i<=top/2;i++){
        if(s[i] != s[top - i]){
            printf("stack is not palindrome ");
            break;
        }else{
            printf("stack is palidrome ");
            continue;
        }
    }
}
void over_under(){
    if(top==-1){
        printf("stack is underflow ");
    }else if(top==max-1){
        printf("stack is overflow ");
    }else{
        printf("stack is neither overflow nor underflow ");
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d  ",s[i]);
    }
    printf("\n");
}

