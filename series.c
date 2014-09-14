//ACPC10A
#include<stdio.h>
int main()
 {
   int a=1,b=1,c=1,d;
    while(a!=0 && b!=0 && c!=0)
    {
	scanf("%d%d%d",&a,&b,&c);
	if(a!=0 && b!=0 && c!=0)
	{
	 if(2*b==(a+c))
	 {
	   d = c-b;
	   printf("AP %d\n",c+d);
	 }
	else
	 {
	  d=c/b;
	  printf("GP %d\n",c*d);
	 }
	}
    }
    return 0;
 }
