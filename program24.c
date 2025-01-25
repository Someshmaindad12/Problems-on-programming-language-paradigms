/*
4.Write a program which accept number from user and return summation of all its non factors.
Input : 12
Output : 50
Input : 10
Output : 37
*/
#include<stdio.h>
int SumNonFac(int iNo)
{
        int iCnt = 0 , iSum = 0 ;
        for(iCnt = 1 ; iCnt < iNo;iCnt++)
        {
            if(iNo %iCnt != 0 )
            {
                iSum=iSum+iCnt;
            } 
        }
        return iSum;
}
int main()
{

    int iValue = 0,iRet = 0  ; 
    printf("Enter Number : " );
    scanf("%d",&iValue);
    iRet = SumNonFac(iValue);
    printf("Summation is : %d",iRet);
    return 0;  
}