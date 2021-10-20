
#include <stdio.h>
int insert(int [],int ,int ,int );
int main()
{
	int arr[20];
	int i, key, pos, n;
	printf("enter no of elements ");
	scanf("%d",&n);
	printf("enter elements ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	printf("\n The element you want to insert");
    scanf("%d",&key);
    printf("\n position where you want to insert :");
    scanf("%d",&pos);
	insert(arr,pos,n,key);
	for (i = 0; i <=n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	}
	
int insert(int arr[],int pos,int n,int key){
	n++;
	for (int i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = key;
	return 0;
}
	

