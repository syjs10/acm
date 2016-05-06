/*************************************************************************
    > File Name: src/2025.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 20时29分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = {'\0'};
	while (scanf("%s", str) != EOF){
		char max = str[0];
		for(int i = 0; str[i] != '\0'; i++){
			if (max < str[i]){
				max= str[i];
			}
		}
		char *p = NULL;
		p = strtok(str, &max);
		if (p){
			printf("%c(max)%s", max, p);
		}
		while (1){
			p = strtok(NULL, &max);
			if (p){
				printf("%c(max)%s", max, p);
			}else{
				break;
			}
		}
		for (int i = 0; str[i] != '\0'; i++){
			str[i] = '\0';
		}
		printf("\n");
	}
	return 0;
}
