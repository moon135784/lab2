#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, cnt = 0;
	int n;
	scanf("%d", &n);
	for(a = 1; a <= n; a++)
	{
		for(b = 1; b <= n; b++)
		{
			for(c = 1; c <= n; c++)
			{
				if((a*a) + (b*b) == (c*c))
				{
					cnt = cnt + 1;
				}
			}
		}
	}
	printf("%d", cnt/2);
		return 0 ;
}
