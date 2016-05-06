/*************************************************************************
    > File Name: src/2029.c
    > Author: JS
    > Created Time: 2016年03月17日 星期四 21时04分53秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf ("%d", &n);
	while(n--){
		char a[100] = {'\0'}, b[100] = {'\0'};
		scanf("%s", a);
		for (int i = 0; i < strlen(a); i++){
			b[strlen(a) - 1 - i] = a[i];
		}
		if (strcmp(a,b) == 0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		for (int i = 0; i < 100; i++){
			a[i] = '\0';
			b[i] = '\0';
		}
	}
	return 0;
}
