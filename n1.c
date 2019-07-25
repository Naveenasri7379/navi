#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	if(num<0)
	printf("negative");
	else if(num==0)
	printf("zero");
	else
	printf("positive");
	return 0;
}
