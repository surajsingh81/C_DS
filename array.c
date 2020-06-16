// Author Suraj Singh
#include<stdio.h>
#include<string.h>
void main()
{
	int i,len;
	int var1;
	int var[10];
	printf("Enter the integer var\n");
	scanf("%d", &var1);
	printf("\n The integer address is %x", &var1);
	printf("\n The address of var is %x", var);
	printf("Enter the elements of array\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",var+i);
		fflush(stdin);
	}
	for(i=0;i<10;i++)
	{
		printf("\n The elements are %d ",*(var+i));
	}		

	
	len=strlen(var);
	var1= sizeof(var);
	printf("\n The length of array is %d and size of array is  %d ",len,var1 );
	

}

	
