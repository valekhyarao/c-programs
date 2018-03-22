#include<stdio.h>
#include<stdlib.h>
void mergesort(int [],int,int);
void merge(int[],int,int,int);
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
}
void merge(int a[],int low,int high,int mid)
{
	int c[100],i=low,j=mid+1,k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<=a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	c[k++]=a[i++];
	while(j<=high)
	c[k++]=a[j++];
	for(i=0;i<k;i++)
	{
		a[i]=c[i];
	}
}
	void main()
	{
		int a[100],n,i;
		printf("enter size:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
		mergesort(a,0,n-1);
		printf("the sorted elements are");
		for(i=0;i<n;i++)
        {
	printf("%d\t",a[i]);
		}
	}
	
