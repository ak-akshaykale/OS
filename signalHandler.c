#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void handler(int sig)
{
	printf("\nOhhh Signal is %d ",sig);
	(void) signal(SIGINT,SIGINT);
}
int main()
{
	(void) signal(SIGINT,handler);
	while(1)
	{
		printf("\nWaiting for Signals ...!");
		sleep(1);
	}
	return 0;
}
