#include<stdio.h>
int main()
{
	char input[50];
	int i,n=0,c;
	printf("enter the text::");
	gets(input);
	for(i=0;input[i]!='\0';i++)
	{
		if (input[i] == ' ')
		{
			n++;
		}
		
		else if(input[i] == '\n')
		{ 
			c++;
		}
	 
	}
	printf("The number of spaces in the text is:%d",n);
}
