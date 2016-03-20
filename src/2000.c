/*************************************************************************
    > File Name: src/2000.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 12时26分26秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	char a,b,c;
	while (scanf("%c%c%c", &a, &b, &c) != EOF ){
		getchar();
		if ( a > b){
			char temp = a;
			a = b;
			b = temp;
		}
		if ( a > c){
			char temp = a;
			a = c;
			c = temp;
		}
		if ( b > c){
			char temp = b;
			b = c;
			c = temp;
		}
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}
