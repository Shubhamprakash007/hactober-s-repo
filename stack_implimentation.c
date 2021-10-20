#include<stdio.h>

struct stack
{
	int arr[100];
	int top;
};
void intlstack(struct stack *s,int si)
{
  s->arr[si];
  s->top=-1;
	
}
void push(struct stack *s,int si,int n)
{
	if(s->top ==si-1)
	{
		printf("stackoverflow");
	return;}
	s->top++;
	s->arr[s->top]=n;
}
int pop(struct stack *s)
{
	int num;
	if(s->top==-1)
	{
	printf("stack is empty");
	return ;
}
num=s->arr[s->top];
s->top--;
return num;
}
void disp( struct stack *s)
{ int i;
	for(i=s->top;i>=0;i--){
		printf("%d",s->arr[i]);
		s->top++;
	}
}
int main()
{
	int ch,size,val,pro;
	struct stack p;
	printf("enter size");
	scanf("%d",&size);
	int arr[size];
	intlstack(&p,size);
	while(1)
	{
	 printf("\n\ntSTACK PRIMITIVE OPERATIONS");
      printf("\n1.PUSH");
      printf("\n2.POP");
      printf("\n3.DISPLAY");
      printf("\n4.QUIT");
      printf("\nEnter your option : ");
      scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("enter number");
	scanf("%d",&val);
	push(&p,size,val);
	break;
	case 2:
		pro=pop(&p);
		printf("element deleted is=%d",pro);
		break;
		case 3:
	    printf("stack inputs");
     disp(&p);
     break;
     case 4:
     exit(0);
     	printf("program ended");
     	break;
}
}
}
