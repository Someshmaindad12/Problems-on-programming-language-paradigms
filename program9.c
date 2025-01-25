// 4. Accept one number and check whether 15 is divisible by 5 or not.
#include<stdio.h>
#include<stdbool.h>

bool Divisible(int iNo1 , int iNo2)
{
    int iAns = 0 ; 
    iAns = iNo1 % iNo2 ; 
    if(iAns == 0)
    {
        return true ;
    }    
    else 
    {
        return false ;
    }
}
int main()
{
    bool bRet = false ;
    int iValue1 = 15;
    int iValue2 = 5 ; 

    bRet = Divisible(iValue1,iValue2);
    if(bRet == true )
    {
        printf("15 is divisible by 5");
    }
    else
    {
        printf("15 is not divisible by 5");
    }
    return 0 ;
}