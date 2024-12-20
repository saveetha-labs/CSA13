#include<stdio.h>
#include<string.h>
int checksubstring(char *c, int s, int l){
	for(int i=s;i<=l;i++){
		if(!(c[s]=='0'||c[s]=='1'))
		return 0;
	}
	return 1;
}
int main(){
	char c[100];
	printf("Enter a string :");
	scanf("%s",c);
	int l=strlen(c);
	if(l<2)
		printf("Not Accepted");
	 
	else{
		if(c[0]=='0' && c[l-1]=='0'){
			
			if(checksubstring(c,1,l-2))
			 	printf("Accepted");
			else
			printf("not accepted");
		}
			else
			printf("not accepted");
	}
}