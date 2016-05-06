/*************************************************************************
    > File Name: src/2027.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 14时37分35秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	while (n--){
		int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
		char str[100] = {'\0'};
		fgets(str, 100, stdin);
		for (int i = 0; i < strlen(str); i++){
			if (str[i] == 'a' || str[i] == 'A'){
				num1++;
			}else if(str[i] == 'e' || str[i] == 'E'){
				num2++;
			}else if(str[i] == 'i' || str[i] == 'I'){
				num3++;
			}else if(str[i] == 'o'|| str[i] == 'O'){
				num4++;
			}else if(str[i] == 'u' || str[i] == 'U'){
				num5++;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", num1, num2, num3, num4, num5);
		if (n != 0){
			printf("\n");
		}
	}
	return 0;
}
