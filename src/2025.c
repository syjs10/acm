/*************************************************************************
    > File Name: src/2025.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 20时29分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
	char str[101] = {'\0'};
	while (scanf("%s", str) != EOF){
		char max = str[0];
		for(int i = 0; str[i] != '\0'; i++){
			if (max < str[i]){
				max= str[i];
			}
		}
		for (int i = 0; str[i] != '\0'; i++){
			if (str[i] == max){
				printf("%c(max)", str[i]);
			}else{
				printf("%c", str[i]);
			}
		}
		printf("\n");
		for (int i = 0; i < 100; i++){
			str[i] = '\0';
		}
	}
	return 0;
}
