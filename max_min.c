#include<stdio.h>
int main()
{
	int n , max, i, numb;
	printf("give n numbers");
	scanf("\n%d", &n);
	printf("\n%d", n);
	scanf("%d", &max);
	for (i=1; i<= n-1;i++)
	{
		scanf("%d", &numb);
		if (numb> max)
		{
			max=numb;
		}

	
	}
  	printf("\n MAX=%d ",max); 
	printf("suraj");
	return 0;
}

