/*Write a Program to Perform Selection Sort on Array of 10 Numerical value  */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,c,d,p,s;
	clrscr();
	printf("Input Array Element:");
	scanf("%d",&n);
	printf("\Enter Array%d int:",n);
	for(c=0;c<n;c++)
	{
	 scanf("%d",&a[c]);
	}
	for(c=0;c<n-1;c++)
	{
		p=c;
		for(d=c+1;d<n;d++)
		{
			if(a[p]>a[d])
			p=d;
		}
		if(p!=c)
		{
			s=a[c];
			a[c]=a[p];
			a[p]=s;
		}
	}
	printf("\n Sort list in Ascending order:");
	for(c=0;c<n;c++)
	{
		printf("\n %d",a[c]);
	}
	getch();

}