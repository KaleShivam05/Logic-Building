/////////////////////////////////////////////////////////////////
//
// Name :          program1.c
// Discription :   Check number 
// Input :         integer
// Output :        String 
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept input from user
            if number is less than 50
                Display Small
            if number is greater than 50 and less than 100
                Display Medium
            if number is greater than 100 
                Display Large  
    Stop                  
*/

#include<stdio.h>

void Number(int iNo)
{
    if((iNo >= 0)&&(iNo < 50))
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Wrong input");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}