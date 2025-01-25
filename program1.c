//This this program we sovling how to calculate radious of circle using sequence 

#include<stdio.h>
float CircleArea(float fRadious )
{
    float fArea = 0.0f;
    float PI = 3.14f;
    fArea = PI*fRadious*fRadious;

    return fArea;
}
int main()
{   
    float fRadious = 0.0f;
    float fArea = 0.0f;
    
    
    printf("Enter the radious of circle \n");
    scanf("%f",&fRadious);

    fArea=  CircleArea(fRadious);
    
    printf("Area of circle is : %f",fArea);
    return 0 ;
}