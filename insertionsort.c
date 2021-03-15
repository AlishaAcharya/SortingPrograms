#include<stdio.h>
#include<process.h>
void insertion_sort(int a[10],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
main()
{
	int a[10],n,i,j;
	printf("\n Enter array size:\n");
	scanf("%d",&n);
	printf("\n Enter the array elements into array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("\n The array after sorted:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	system("PAUSE");
}
