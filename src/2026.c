/*************************************************************************
    > File Name: src/2026.c
    > Author: JS
    > Created Time: 2016年03月17日 星期四 16时28分45秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	while (fgets(a, 100, stdin) != NULL){
		a[0] -= 32;
		for(int i = 0; i < strlen(a); i++){
			if (a[i] == ' '){
				a[i+1] = a[i+1] - 32;
			}
		}
		printf("%s", a);
		for (int i = 0; i < strlen(a); i++){
			a[i] = '\0';
		}
	}
	return 0;
}
