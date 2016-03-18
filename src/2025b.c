/*************************************************************************
    > File Name: src/2025.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 20时29分36秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
	char str[600] = {'\0'};
	while (scanf("%s", str) != EOF){
		char max = str[0];
		for(int i = 0; str[i] != '\0'; i++){
			if (max < str[i]){
				max= str[i];
			}
		}
		for (int i = 0; str[i] != '\0'; i++){
			if (str[i] == max){
				for(int j = 595; j > i; j--){
					str[j+5] = str[j];
				}
				str[i+1] = '(';
				str[i+2] = 'm';
				str[i+3] = 'a';
				str[i+4] = 'x';
				str[i+5] = ')';
				i += 4;
			}
		}
		printf("%s\n", str);
		for (int i = 0; i < 600; i++){
			str[i] = '\0';
		}
	}
	return 0;
}
