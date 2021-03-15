#include<stdio.h>
void adjustheap(int heap[],int root,int last)
{
int leftkey,rightkey,largechild,large;
if((root*2+1)<=last)
{
leftkey=heap[root*2+1];
if((root*2+2)<=last)
rightkey=heap[root*2+2];
else
rightkey=-1;
if(leftkey>rightkey)
largechild=root*2+1;
else
largechild=root*2+2;
if(heap[root]<heap[largechild])
{
large=heap[root];heap[root]=heap[largechild];heap[largechild]=large;
adjustheap(heap,largechild,last);
}
}
return;
}
void heapsort(int heap[],int n)
{
int i,m,temp;
m=n;
for(i=n-1;i>=1;i--)
{
temp=heap[0];heap[0]=heap[i];heap[i]=temp;m--;
adjustheap(heap,0,m-1);
}
}
main()
{
int A[20],n,i;
printf("Enter the array size::");
scanf("%d",&n);
printf("Enter the array elements into the array ");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
for(i=(n-1)/2;i>=0;i--)
adjustheap(A,i,n-1);
heapsort(A,n);
printf("The array  after sorted :");
for(i=0;i<n;i++)
printf("%d\t",A[i]);
system("PAUSE");
}

