#include<stdio.h>
#include<process.h>
void selection_sort(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
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
	selection_sort(a,n);
	printf("\n The array after sorted:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	system("PAUSE");
}
