/*************************************************************************
    > File Name: src/2030a.c
    > Author: JS
    > Created Time: 2016年03月19日 星期六 12时15分38秒
 ************************************************************************/


#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100001];
	int n;
	int i;
	int s;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
       gets(a);
	   s=0;
	   for(i=0;i<strlen(a);i++)
	   {
		   if(a[i]<0)
			 s++;
	   }
	   printf("%d\n",s/3);
	}
	return 0;
}
