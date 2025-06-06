/////////////////////////////////////////////////////////////////
//
// Name :          program4.c
// Discription :   Display Pattern 
// Input :         Integer
// Output :        Integer
// Author :        Shivam Rajendra Kale
// Date :          22/05/2025
//
/////////////////////////////////////////////////////////////////

/*
    Input : row = 4  col = 5
    
    Output : 4  4  4  4  4
             3  3  3  3  3
             2  2  2  2  2
             1  1  1  1  1
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);

     printf("Enter number of column :");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);   //function call

    return 0;
}