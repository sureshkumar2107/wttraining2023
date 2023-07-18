/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>

void push(int,int[]);          //first int for number and next int for array declaration
void pop(int[]);
void isempty(int[]);
void isfull(int[]);
void display(int[]);
int top=-1;                   //first we need to check whether the stack is empty or not so only -1
int main()
{
    int a[10];
    push(5,a);
    push(8,a);
    push(9,a);
    pop(a);
    pop(a);
    isempty(a);
    isfull(a);
    
    return 0;
}
void push(int n,int a[])
{
    if(top!=10  )            //first we need to check stack is full or not if it is not full do increment 
    {
        top++;              //push condition
        a[top]=n;
        printf("stack is going to be filled\n");
        display(a);
    }
    else
    {
        printf("overflow\n");
    }
}
void display(int a[])
{
    if(top!=-1)            //this will chech whether th stack is empty if it is not empty it will check the condition 
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
    
}
void pop(int a[])
{
    if(top!=-1)
    {   
        top--;                //pop condition
        printf("stack\n");
        display(a);
    }
}
void isempty(int a[])
{
    if(top==-1)           //isempty condition
    {
        printf("empty\n");
    }
    else
    printf("not empty\n");
}
void isfull(int a[])
{
    if(top==10)           //isfull condition
    {
        printf("full\n");
    }
    else
    printf("not full\n");
}








