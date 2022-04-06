/* Write a Program to Enter any String and Find and Print the total Number
of Vowels in it  */
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10];
	int i,c=0;
	clrscr();
	printf("\n Enter any String:");
	gets(s);
	printf("\n vowels in the string:");
	for(i=0;i<strlen(s);i++)
	{
	   if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
	   s[i]=='A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='O')
	   {
		c++;
		printf("%c",s[i]);
	   }
	}
	printf("\n Number of Vowels in the String:%d",c);
	printf("\n");
	getch();
}