//3. Program to print 5 to 1 numbers on screen.
#include<stdio.h>
void Display(int iNo )
{
    int iCnt  = 0 ; 
    iCnt = 5 ; 
    while(iCnt != 0 )
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    int iValue = 5 ; 
    Display(iValue);
    return 0 ; 
}