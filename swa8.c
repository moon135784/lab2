#include <stdio.h>


	int cnt, answer, N, map[1000];

	int check(int num)
	{
		for(int i = 0; i < cnt; ++i)
		{
			if( num == map[i])
				return 1;
		}
		return 0;
	}

	int main(void)
{
	scanf("%d", &N);
	int index = 0, num;
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num);
		if(!check(num))
		{
			answer++;
			map[cnt++] = num;
		}
	}
printf("%d", answer);
}
