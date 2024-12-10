#include <stdio.h>
#include <string.h>
int main(){
    char str[20],rev[20];
    printf("Enter any word : ");
    scanf("%s",str);
    strcpy(rev,str);
    if (strrev(str)==rev)
    {
        printf("The given word is a palindrome \n");
    }
    else{
        printf("The given word is not a palindrome \n");
    }
    
}