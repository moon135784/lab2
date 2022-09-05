#include <stdio.h>

int main(void)
{
	int arr[9];
	int j = 0;
	for(int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	int max = arr[0];
	for(int i = 0; i < 9; i++)
	{
		if(max < arr[i])
				max = arr[i];
	}
	for(; j < 9; j++)
	{
		if(arr[j] == max)
			break;
	}
	printf("%d\n %d", max, j+1);

	return 0;
}
