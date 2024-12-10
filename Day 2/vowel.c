#include <stdio.h>
int main(){
    char alphabet;
    printf("Enter any alphabet : ");
    scanf("%c",&alphabet);
    switch (alphabet)
    {
    case 'a':case 'e' :case 'i': case 'o': case 'u':
    case 'A':case 'E' :case 'I': case 'O': case 'U':
        printf("You have entered an vowel\n");
        break;
    
    default:
        printf("You have entered a consonant or other character\n");
        break;
    }
    return 0;
}