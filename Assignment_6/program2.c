/////////////////////////////////////////////////////////////////
//
// Name :          program2.c
// Discription :   Display number into word
// Input :         integer
// Output :        String
// Author :        Shivam Rajendra Kale
// Date :          14/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Start
        Accept number for user 
            Convert number into word
    Stop         
*/

#include<stdio.h>

void Display(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 1:
               printf("One\n");
               break;
        case 2:
               printf("Two\n");
               break; 
        case 3:
               printf("Three\n");
               break;
        case 4:
               printf("Four\n"); 
               break; 
        case 5:
               printf("Five\n");
               break;
        case 6:
               printf("Six\n"); 
               break;
        case 7:
               printf("Seveen\n");
               break;
        case 8:
               printf("Eight\n"); 
               break; 
        case 9:
               printf("Nine\n");
               break;
        default:
               printf("Invalid Number \n");                                     
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}