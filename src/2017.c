/*************************************************************************
    > File Name: src/2017.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 21时01分16秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char a[101];
	scanf("%d", &n);
	getchar();
	while(n--){
		int count = 0;
		fgets(a, 100, stdin);
		for (int i = 0; a[i] !='\0'; i++){
			if(a[i] <= 57 && a[i] >= 48){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
