#include <stdio.h>
int main(void){
	int a;
	int b;
	scanf("%d",&a);

	for(int i = 1; i<=a; ++i){
		for(int j=0;j<a-i;++j){
			printf(" ");
	            }
		for(int k = 1; k<=i; ++k){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
