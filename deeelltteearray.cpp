#include<stdio.h>
int delet(int [],int ,int );
int main()
{
   int array[10], p, i, n;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &p);
   int x=delet(array,p,n);//finding the deletion to be done
    
     if (x==0)
      printf("Deletion not possible.\n");
     else
     printf("Resultant array:\n");
     for (int c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
        
    }

int delet(int array[],int position,int n){
   if (position >= n+1)
      return 0;
   else
   {
      for (int c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];
     
	}
	 }

   
  


