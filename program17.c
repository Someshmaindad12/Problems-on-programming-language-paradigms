/*2. Write a program which accept number from user and print even factors of that
number.
Input : 24
Output:  2 4 6 8 12
*/
#include<stdio.h>
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <=iNo/2 ;iCnt++)
    {
        if(iNo%iCnt ==0)
        {
            if(iCnt % 2 == 0 )
            {
                printf("%d\n",iCnt);
            }
        }
    }

}
int main()
{
    int iValue = 0 ; 
    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
    return 0 ; 
}