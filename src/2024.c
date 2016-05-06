/*************************************************************************
    > File Name: src/2024.c
    > Author: JS
    > Created Time: 2016年03月16日 星期三 20时26分50秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf ("%d", &n);
	getchar();
	while (n--){
		char a[51] = {'\0'}; 
		gets (a);
		int count = 0;
		if (a[0] <= '9' && a[0] >= '0'){
			printf("no\n");
			continue;
		}
		for (int j = 0;  j < strlen(a); j++){
			if ((a[j] >= 'a' && a[j] <= 'z') || 
			(a[j] >= 'A' && a[j] <= 'Z') ||
			(a[j] >= '0' && a[j] <= '9') || 
			a[j] == '_'){
				continue;
			}else{
		 		count = 1;
				break;
			}
		}
		if (count == 0){
			printf ("yes\n");
		}else{
			printf ("no\n");
		}
	}
	return 0;
}
