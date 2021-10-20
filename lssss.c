
#include <stdio.h>

int search_linear(int arr[], int n, int k)
{

int i, flag=0, pos;
for(i=0;i<n;i++)
{

if(arr[i] == k)
{

pos=i;
flag=1;
break;

}

}
if(flag!=0)

return pos;

else

return 0;
}

int main()
{

int i, n, arr[20], result, key;
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
printf("\n Enter the elements : ");
for(i=0;i<n;i++)

scanf("%d",&arr[i]);

p
result = search_linear(arr, n, key);
if(result==0)

printf("\n The searched element is not in the list");

else

printf("\n The element is present in the position : %d",result+1);


return 0;
}

