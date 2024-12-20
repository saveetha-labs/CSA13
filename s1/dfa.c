#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf(" Enter a string :");
    scanf("%s" , c);
    int l=strlen(c);
    if(c[0]=='a'&&c[l-1]=='a' )
    printf("Accept");
    else
    printf("Don't Accept");
}