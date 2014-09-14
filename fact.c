//FCTRL
#include<stdio.h>
int main()
 {
   int n,t,i,count;
   scanf("%d",&t);
   while(t--)
    {
       scanf("%d",&n);
       count=0;
       for(i=5;n/i>=1;i*=5)
	{
	  count += (n/i);
 	}
	printf("%d\n",count);
    }
 }
