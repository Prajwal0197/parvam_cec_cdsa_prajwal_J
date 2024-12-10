#include <stdio.h>
#include <string.h>
int main(){
    char f_name[20],l_name[20],name[50];
    printf("Enter your first name : \n");
    scanf("%s",f_name);
    printf("Enter your last name : \n");
    scanf("%s",l_name);
    strcpy(name,f_name);
    strcat(name,l_name);
    printf("Full name : %s\n",name);
    printf("Full name in uppercase %s\n", strupr(name));
    printf("Full name in lowercase %s\n", strlwr(name));
    printf("Full name is reversed %s\n", strrev(name));
}