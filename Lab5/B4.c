#include <stdio.h>

void swap(int x, int y)
{	
	int *px, *py;
	px = &x, py = &y;
	
	int temp = px;
	px = py;
	py = temp;
}

int main()
{
	int x, y;
	printf("Enter first value, x = ");
	scanf("%d", &x);
	printf("Enter second value, y = ");
	scanf("%d", &y);
	swap(x, y);
	printf("\nAfter Swapping: x = %d, y = %d\n", x, y);
	return 0;
}