#include <stdio.h>

int main()
{
	
	int count, total = 0, rowSum[5] = {0}, colSum[5] = {0}, matrix[5][5], num1, num2, num3, num4, num5;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i + 1); 
		scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5 );
		matrix[i][count++] = num1;
		matrix[i][count++] = num2;
		matrix[i][count++] = num3;
		matrix[i][count++] = num4;
		matrix[i][count] = num5;
		count = 0;
	}
	
	printf("Row totals:    ");
	for (int i = 0; i < 5; i++)
	{
		total = 0;
		for (int j = 0; j < 5; j++)
		{
			total += matrix[i][j];	
		}
		rowSum[i] = total;
		printf("%d ", rowSum[i]);
	}
    printf("\n");

	printf("Column totals: ");
	for (int i = 0; i < 5; i++)
	{
		total = 0;
		for (int j = 0; j < 5; j++)
		{
			total += matrix[j][i];
		}
		colSum[i] = total;
		printf("%d ", colSum[i]);
	}	
	printf("\n");

	return 0;
}	

