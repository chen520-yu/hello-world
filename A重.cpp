#include<stdio.h>
#include<string.h>
int main ()
{
	char b[100];
	char ch;
	int i=0; 
while((ch=getchar())!='\n')
	{
		b[i]=ch;
		i++;
	}
	printf("%s",b);	
printf("\n%d",strlen(b));
}
















