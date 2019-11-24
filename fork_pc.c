#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	long pid=fork();
/*	while(1)
	{
		printf("%d",(int)pid);
		printf("\nHello..!");
		//if(pid==0)
		//break;
	}
*/	//printf("\nHello");
	while(1)
	{
	if(pid==0)
	{
		printf("child");
	}
	else
	printf("parent");
	}
	return 0;
}
