#include<stdio.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(int argc, char *argv[])
{
	int a, b;
	printf("Enter numbers to swap\n");
	scanf("%d %d", &a,&b);
	printf("a is %d and b is %d\n",a,b);
	swap(&a,&b);
	printf("a is %d and b is %d\n",a,b);
	return 0;
}