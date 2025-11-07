#include<stdio.h>
#define DIR_FORWARD  0 
#define DIR_BACKWARD 1 
void print_list(int a[], int size, int start, int direction);
int main(void)
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int size = sizeof(a) / sizeof(int);
	print_list(a, size, 5, DIR_FORWARD);
	print_list(a, size, 5, DIR_BACKWARD);
	return 0;
}
void print_list(int a[], int size, int start, int direction)
{
	int b;
	int idx = start;
	for (b = 0; b < size; b++)
	{
		printf("%d ", a[idx]);
		if (direction == DIR_FORWARD)
		{
			idx++;
			if (idx == size)
			idx = 0;
		}
		else
		{
			idx--;
			if (idx < 0)
			idx = size - 1;
		}

	}
	printf("\n");
}
