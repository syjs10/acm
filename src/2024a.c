/*************************************************************************
    > File Name: src/2024.c
    > Author: JS
    > Created Time: 2016年03月16日 星期三 20时26分50秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	while (scanf ("%d", &n) != EOF){
		getchar();
		char a[100][51] = {'\0'}; 
		for (int i = 0; i < n; i++){
			fgets (&a[i][0], 50, stdin);
		}
		int count[100] = {0};
		for (int i = 0; i < n; i++){
			if (a[i][0] <= '9' && a[i][0] >= '0'){
				count[i] = 1;
				break;
			}
			for (int j = 0; a[i][j] != '\0'; j++){
				if ((a[i][j] >= 'a' && a[i][j] <= 'z') || 
				(a[i][j] >= 'A' && a[i][j] <= 'Z') ||
				(a[i][j] >= '0' && a[i][j] <= '9') || 
				a[i][j] == '_'){
					continue;
				}else{
					count[i] = 1;
					break;
				}
			}
		}
		for (int i = 0; i < n; i++){
			if (count[i] == 0){
				printf ("yes\n");
			}else{
				printf ("no\n");
			}
		}
	}
	return 0;
}
