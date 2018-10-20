#include<stdio.h>
void main()
{
	int a[10];
	int n=0,i=0,j,m;
	do
	{
		scanf("%d",&a[i]);
		i++;
		n++;
	}
	while(getchar(a[i])!='\n'&&i<100);
	for(i=0;i<0;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[j]>a[i])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
		if((i+1)%5==0)
		{
			printf("\n");
		}
	}
}