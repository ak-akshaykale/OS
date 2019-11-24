#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int rno;
	char nm[20];
	struct stud* nxt;
}stud;
void newStudent(struct stud *s)
{
	struct stud ss* = (struct stud*)malloc(sizeof(stud stud));
        if(s == NULL)
        {	
		//s = malloc(sizeof(stud));
		//s->rno=10;
		//s->nm="akshay";
		//s->nxt=NULL;
                //return 1;
        	printf("\nDynamic Memory error!..");
	}
	ss->rno=10;
	s->nxt =*ss;

}
int main()
{
	int ch;
	stud * s1 = NULL;
	printf("Do you want to add: ");
	scanf("%d",&ch);
	if(ch==1)
	newStudent(s1);
	printf("%d",s1->rno);
	return 0;
}
