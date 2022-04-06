/* Write a Program to Perform Bubble Sort on Array of 10 Numeric Value */
#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[10],i,n,j,s;
	 clrscr();
	 printf("Input the Size of Array:");
	 scanf("%d",&n);
	 printf("Input%d elements in the array:\n",n);
	 for(i=0;i<n-1;i++)
	 {
		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n-1;i++)
	 {
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
			}
		 }
	 }
	 printf("Sorted Array");
	 for(i=0;i<n;i++)
	 {
		printf("\n%d\n",a[i]);
	 }
	 printf("\n\n");

	 getch();
}

