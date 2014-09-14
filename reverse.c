//ADDREV
#include<stdio.h>
int main()
 {
 	int temp=0,rev1=0,rev2=0,result=0,sum=0;
 	int num1,num2,t;
    scanf("%d",&t);
    while(t--)
    {
    	temp=0;
    	rev1=0;
    	rev2=0;
    	result=0;
    	sum=0;
    	scanf("%d%d",&num1,&num2);
	 	while(num1>0)
	 	{
	 		temp=num1%10;
	 		rev1=rev1*10+temp;
	 		num1=num1/10;
	 	}
	 	// printf("%d\n",rev1);
	 	temp =0;
	 	while(num2>0)
	 	{
	 		temp=num2%10;
	 		rev2=rev2*10+temp;
	 		num2=num2/10;
	 	}
	 	// printf("%d\n",rev2);
	 	sum = rev1+rev2;
	 	temp =0;
	 	while(sum>0)
	 	{
	 		temp=sum%10;
	 		result=result*10+temp;
	 		sum=sum/10;
	 	}
	 	printf("%d\n",result);
    }
 	
 	return 0;
 }
