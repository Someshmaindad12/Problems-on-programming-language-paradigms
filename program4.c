//if else if ladder 
#include<stdio.h>
void DisplayTimeTable(int iStd)
{
    if(iStd == 8 )
    {
        printf("Your Exam is at 9:30 \n");
    }
    else if(iStd == 9 )
    {
       printf("Your Exam is at 10:30 \n"); 
    }
    else if(iStd == 10 )
    {
        printf("Your Exam is at 11:30 \n"); 
    }
    else 
    {
        printf("Sorry we dont have the information about your standard \n");
    }
}
int main()
{
    int iValue = 0; 
    printf("Enter Standard : ");
    scanf("%d",&iValue);
    DisplayTimeTable(iValue);
    return 0; 
}