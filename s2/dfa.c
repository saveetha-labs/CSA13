#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf(" Enter a string :");
    scanf("%s" , c);
    int l=strlen(c);
    if(c[0]!='0' || c[l-1]!='1')
    printf("Don't Accept");
    else
    printf("Accept");
}
