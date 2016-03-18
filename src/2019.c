/*************************************************************************
    > File Name: src/2019.c
    > Author: JS
    > Created Time: 2016年03月14日 星期一 19时24分58秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n, m;
	while (scanf ("%d%d", &n, &m) != EOF){
		if (m == 0 && n == 0){
			break;
		}
		int a[101] = {0}, k;
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		if (a[n-1] < m){
			a[n] = m;
			goto A;
		}
		for (int i = 0; i < n; i++){
			if(a[0] <= a[n]){
				if (a[i] > m && a[i - 1] < m){
					k = i;
					break;
				}else if (a[i] == m){
					k = i;
					break;
				}
			}else{
				if (a[i] < m && a[i - 1] > m){
				 	k = i;
					break;
				}else if (a[i] == m){
					k = i;
					break;
				}
			}
		}
		for (int i = 101; i > k; i--){
			a[i] = a[i-1];
		}
		a[k] = m;
		A:for (int i = 0; i < n + 1; i++){
			printf("%d", a[i]);
			if (i != n){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
