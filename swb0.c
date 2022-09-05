#include <stdio.h>

	int N, arr[50];
	int min = 51, max = 0;

	int main(void)
{
	scanf("%d", &N);

	for(int i = 0; i < N; ++i)
	{
		scanf("%d", arr + 1);
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
	}

	if(max == 0)
	{
		printf("0");
		return 0;
	}

	printf("%d", min + 1);
}
