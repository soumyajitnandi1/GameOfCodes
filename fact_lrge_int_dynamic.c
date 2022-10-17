#include<stdio.h>
#include<stdlib.h>
long long unsigned * fact(int n,int *p)
{
	int i=1,dgt=1;
	long long unsigned cry=0,*a;
	a=(long long unsigned *)calloc(i,sizeof(long long unsigned));
	*a=1;
	while(i!=n)
	{
		int j=0;
		i++;
		while(1)
		{
			long long unsigned x=((*(a+j)*i)+cry)%10;
			cry=((*(a+j)*i)+cry)/10;
			*(a+j)=x;
			//printf("\n\n%d  %d   %d\n\n",x,cry,dgt);
			if(((!cry)&&(x))&&(j==dgt-1))
				break;
			j++;
			if(j==dgt)
			{
				dgt++;
				a=(long long unsigned *)realloc(a,dgt*sizeof(long long unsigned));
				if(a==NULL)
				{
					printf("Not Enough Memory Available in RAM !!! .");
					exit(1);
				}
				*(a+dgt)=0;
			}
		}
		//int q;
		//for(q=dgt-1;q>=0;q--)
		//	printf("%llu",*(a+q));
		//printf("\n\n\n\n");
		
	}
	*p=dgt;
	return a;
}

int main()
{
	int n,i,p=0;
	long long unsigned *arr;
	printf("Enter a positve number : ");
	scanf("%d",&n);
	//printf("%d",p);
	arr=fact(n,&p);
	for(i=p-1;i>=0;i--)
	printf("%llu",*(arr+i));
	printf("\nNo of digits = %d",p);
	free(arr);
	return 0;
}
