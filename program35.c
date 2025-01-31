/*
5. Write a program which accept number from user and display its table in reverse
order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5
*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0 ; 
    int iRevTab = 1 ; 
    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    for(iCnt = 10 ; iCnt >= 1 ;iCnt --)
    {
        iRevTab = iCnt *iNo;
        printf("%d\t",iRevTab);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0; 
}