#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,s[100],i=0;
	int sum=0;
	s[1]=1;
	s[0]=0;
	scanf("%d",&n);
	
	for( i=0;i<n;i++)
	{
	 sum=s[i]+s[i+1];
	 s[i+2]=sum;
		
	}
	for(i=0;i<n;i++)
	printf("%d",s[i]);
	return 0;
}
