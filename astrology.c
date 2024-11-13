#include<stdio.h>
#include<string.h>
int main(){
    int len,sum;
    char name[30];
    printf("Enter your name : ");
    scanf("%s",name);
    len=strlen(name);
    if(len%2==0){
        printf("False");
        name=toupper(name);
    }
    else{
        printf("True");
        name=toupper(name);b
    }
    printf("%s",name);
}