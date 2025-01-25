//5. Accept number from user and check whether number is even or odd.
#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo %2 == 0 )
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
    
    int iValue = 0 ; 
    bool bFlag = false ;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    bFlag = ChkEven(iValue);
    if(bFlag == true)
    {
        printf(" %d is Even Number ",iValue);
    }
    else 
    {
        printf("%d is Odd Number ",iValue);
    }
    return 0 ;  
}