#include<stdio.h>
int main() {
	int x, y, area, perimeter;
	scanf("%d\n%d", &x, &y);
	area = x*y;
	perimeter = 2*(x+y);
	if(area > perimeter) {
		printf("Area\n");
		printf("%d", area);
	}else if(area < perimeter){
		printf("Peri\n");
		printf("%d", perimeter);
	}else{
		printf("Eq\n%d", perimeter);
	}
	
	
	
	
	
	return 0;
}
