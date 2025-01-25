/*
5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/
#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0 ; 
    int iSumFact = 0 ;
    int iSumNonFact = 0 ; 
    int iSumDiff = 0 ; 
    for(iCnt = 1 ; iCnt <=iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
            iSumFact = iSumFact + iCnt;
        }

    }
    for(iCnt = 1 ; iCnt <iNo;iCnt++)
    {
        if(iNo % iCnt != 0  )
        {
            iSumNonFact = iSumNonFact+iCnt;
        }
    }
     iSumDiff =  iSumFact - iSumNonFact;
        return iSumDiff;
}
int main()
{
    int iValue = 0 , iRet = 0  ; 
    printf("Enter Number : " );
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);
    printf("%d\n",iRet);
    return 0; 
}