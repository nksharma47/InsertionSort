#include <stdio.h>

int main(void)
{
    int a[10],n,i,j,count=0,k;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
    printf("Enter array to sort:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<n;i++)
    {
        k=a[i];
        for(j=i-1;j>=0 && k<a[j];j--)
        {
            count++;
            a[j+1]=a[j];
        }
        a[j+1]=k;
        if(k>a[j])
            count++;
    }
    
    printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	
	printf("\n OPERATION COUNT=%d\n",count);
	
	return 0;
}

