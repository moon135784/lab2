#include <stdio.h>

int main(void)
{
	int a, b, c, d, temp;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	if(c>d){
		temp = c;
		c = d;
		d = temp;
	}
	if(c>a && c<b){
		if(d<a || d>b){
			printf("cross");
		}
		else{
			printf("not cross");
		}
	}
	else if(d>a && d<b){
		if(c<a || c>b){
			printf("cross");
		}
		else{
			printf("not cross");
		}
	}
	else{
		printf("not cross");
	}
}
