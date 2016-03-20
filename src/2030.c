/*************************************************************************
    > File Name: src/2030.c
    > Author: JS
    > Created Time: 2016年03月19日 星期六 11时46分42秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf ("%d", &n);
	getchar();
	while (n--){
		char a[100] = {'\0'};
		fgets(a, 100, stdin);
		int count = 0;
		for (int i = 0; i < strlen(a) - 1; i++){
			if (a[i] < 0){
				count++;
			}
		}
		printf ("%d\n", count / 2);
	}
	return 0;
}
