#include<stdio.h>
#include<process.h>
void merge_sort(int a[20],int low,int mid,int high)
{
	int i,mi,k,lo,temp[20];
	lo=low;
	i=low;
	mi=mid+1;
	while((lo<=mid)&&(mi<=high))
	{
		if(a[lo]<=a[mi])
		{
			temp[i]=a[lo];
			lo++;
		}
		else
		{
			temp[i]=a[mi];
			mi++;
		}
		i++;
	}
	if(lo>mid)
	{
		for(k=mi;k<=high;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
	else
	{
		for(k=low;k<=high;k++)
		{
			a[k]=temp[k];
		}
	}
}
void partition(int a[20],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
	    merge_sort(a,low,mid,high);	               
	}
}
int main()
{
	int a[20],n,i;
	printf("\n Enter n:\n");
	scanf("%d",&n);
	printf("\n Enter data into array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	partition(a,0,n-1);
	printf("\n After merge sort:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	system("PAUSE");
	return 0;
}
