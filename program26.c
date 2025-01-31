/*
1.Write a program which accept number from user and print that number of $ & *
on screen.

Input : 5
Output : $ * $ * $ * $ * $ *

Input : 3
Output : $ * $ * $ *

Input : -3
Output : $ * $ * $ *
*/
#include<stdio.h>
void Pattrn(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
      
}
int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattrn(iValue); 

    return 0; 
}