#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
#include<pthread.h>
#include<unistd.h>
void handle(int sig)
{
	
	printf("\n\n\n\n\t\t\t\tHandler... %d",sig);
	(void) signal(SIGINT,SIG_DFL);
	exit(3);
}
void * callo(void* i)
{
	while(1)
	printf("%s",(char *)i);
}
void * cf(void *c)
{
	//while(1)
	printf("%s",(char *)c);
}
int main()
{
	int pid=0;
	pid = fork();
	(void) signal(SIGINT,handle);
	if(pid==0)
	{
		pthread_t p1;
		pthread_create(&p1,NULL,&cf,(void *)"Child");
		pthread_join(p1,NULL);
	}
	else
	{
		pthread_t c1;
		pthread_create(&c1,NULL,&callo,(void *)"Parent");
		pthread_join(c1,NULL);
	}
	return 0;
}
