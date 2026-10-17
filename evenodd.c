#include<stdio.h>  //header file
int main()
{
    int x;         //variable declaration
    printf("Enter value of x:");       //input value by user
    scanf("%d",&x);
    printf("\nYou have entered:%d \n",x);
    if(x%2==0)
    {
        printf("\nNUMBER IS EVEN\n");    //condition display when it is EVEN
    }
    else
    {


        printf("\nNUMBER IS ODD \n");    //condition display when it is ODD
    }



    return 0;
}


