#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main()
{
	int arr[]={-5,1,4,7,2,-3,5,-7};
	ft_sort_integer_table(arr,8);
	for(int i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
	return (0);
}
