#include<stdio.h> 
int main() {
	char x;
	scanf("%c", &x);
	if(x=='A' || x=='I' || x=='U' || x=='E' || x=='O'){
		puts("Vowel");	
	}else{
		puts("Consonant");
	}
	return 0;
}
