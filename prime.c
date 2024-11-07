#include<stdio.h>
int main(){
    int n;
    int c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Prime!");
    }
    else{
        printf("Not a prime!");
    }
}