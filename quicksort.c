#include<stdio.h>
#include<process.h>
void quick_sort(int a[10],int low,int high)
{
	int i,j,temp,pivot;
	if(low<high)
	{
		i=low;
		j=high;
		pivot=low;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<=high)
			{
			i++;
		    }
			while(a[j]>=a[pivot]&&j>=low)
			{
		    j--;
		    }
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		quick_sort(a,low,j-1);
		quick_sort(a,j+1,high);
	}
}
int main()
{
	int a[10],n,i;
	printf("\n Enter n:\n");
	scanf("%d",&n);
	printf("\n Enter data into array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quick_sort(a,0,n-1);
	printf("\n After quick sort:\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	system("PAUSE");
	return 0;
}
