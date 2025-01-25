/*
5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if(cValue == 'a' ||cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u'  )
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
    bool bFlag = false ;
    char cValue = '\0';
    printf("Enter a character : ");
    scanf("%c",&cValue);
    bFlag = ChkVowel(cValue);
    if(bFlag == true )
    {
        printf("%c is vowel",cValue);
    }
    else 
    {
        printf("%c is not vowel",cValue); 
    }
    
    return 0 ; 
}