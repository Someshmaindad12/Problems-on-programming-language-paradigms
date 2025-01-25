
#include<stdio.h>
float CalculatePercentage (int iTMarks , int iOMarks )
{
    float Percentage = 0 ; 
    Percentage = ((float)iOMarks/(float)iTMarks)*100;
    return Percentage;
}
int main()
{
    int iTotalMarks = 0 ;
    int iObtainedMarks = 0 ;
    float iRet = 0 ; 

    printf("Enter Total Marks : \n");
    scanf("%d",&iTotalMarks);

    printf("Enter Obtained Marks : \n");
    scanf("%d",&iObtainedMarks);

    iRet = CalculatePercentage(iTotalMarks,iObtainedMarks);
    printf("Percentage is : %f",iRet);


    return 0;
}