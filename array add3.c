      
#include <stdio.h>
int main()
{
	int ar[3][3];
	int br[3][3];
	int tr[3][3];
	int i, j;
	printf("Enter values of 1 matrix ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}
	printf("Enter values of 2 matrix ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &br[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", ar[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%2d ", br[i][j]);
		}
		printf("\n");
	}
	printf("\nThe addition of two matrices is \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			tr[i][j] = ar[i][j] + br[i][j];
			printf("%2d ", tr[i][j]);
		}
		printf("\n");
	}
	return 0;
}