//switch case 
#include<stdio.h>
void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8: 
            printf("Your Exam at is 9:30 AM\n");
            break;
        case 9 :
            printf("Your Exam at is 10:30 AM\n");
            break;
        case 10:
            printf("Your Exam is at 11:30 AM\n");
        default:
        printf("Sorry we dont have the information about your standard\n");

    }
}
int main()
{
    int iValue = 0 ; 
    printf("Please Enter your Standard : ");
    scanf("%d",&iValue);
    DisplayTimeTable(iValue);

    return 0 ; 
}