//Selection : if else 
//accept percentageafter accting the percentage display pass or fail ;
#include<stdio.h>
void DisplayResult(float fPercentage)
{
    if((fPercentage < 0.0f ) || (fPercentage > 100.0f ) )
    {
        printf("Invalid Percentage");
        return ;
    }

    if(fPercentage >= 40)
    {
        printf("Pass");
    }
    else 
    {
        printf("Fail");
    }
}
int main()
{
    float fValue = 0 ; 
    printf("Enter Percentage : ");
    scanf("%f",&fValue);
    DisplayResult(fValue);

    return 0 ;
}