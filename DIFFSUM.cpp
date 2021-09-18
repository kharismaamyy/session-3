#include<stdio.h>
int main() {
	int Num1, Num2;
	scanf("%d\n%d", &Num1, &Num2);
	if(Num1>Num2){
		printf("%d", Num1-Num2);
	}else{
		printf("%d", Num1+Num2);
	}

	
	return 0;
}
