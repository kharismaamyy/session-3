#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if(num >= 0 && num<=9){
		puts("1");
	}else if(num<=99){
		puts("2");
	}else if(num<=999){
		puts("3");
	}else{
		puts("More than 3 digits");
	}
	return 0;
}

