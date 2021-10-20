#include<stdio.h>
void ins(int *p,int n,int h,int f)
{ int i;
	for(i=0;i<n;i++)
	{
		if(i==f-1)
	  *(p+i)=h;
	}
}
int main()
{
	int i,h;
	int c[100],f,n,*p=c;
	printf("enter size");
	scanf("%d",&n);
    printf("enter numbers");
    for(i=0;i<n;i++)
    scanf("%d",&c[i]);
    printf("enter no. to be inserted");
    scanf("%d",&h);
	puts("enter position");
	scanf("%d",&f);
      ins(&p,n,h,f);
	printf("new array\n");
   for(i=0;i<n;i++)
   printf("%d ",*(p+i));
	 }
	

