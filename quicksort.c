#include<stdio.h>
void quick(int [],int,int);
void quick(int a[],int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
		while(a[i]<=a[pivot]&&(i<last))
		i++;
		while(a[j]>a[pivot])
        j--;
        if(i<j)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	    }
	temp=a[pivot];
	a[pivot]=a[j];
	a[j]=temp;
	quick(a,first,j-1);
	quick(a,j+1,last);
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
		quick(a,0,n-1);
		printf("the sorted elements are");
		for(i=0;i<n;i++)
        {
	printf("%d\t",a[i]);
		}
	}
