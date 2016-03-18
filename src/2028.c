/*************************************************************************
    > File Name: src/2028.c
    > Author: JS
    > Created Time: 2016年03月17日 星期四 19时12分53秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
unsigned int gcd (unsigned int ,unsigned int );
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		unsigned int *a = (unsigned int *)malloc(sizeof(unsigned int) * n);
		for (int i = 0; i < n; i++){
			scanf("%u", &a[i]);
		}
		for (int i = 0; i < n - 1; i++){
			a[i + 1]= a[i] * a[i + 1] / gcd(a[i], a[i + 1]);
		}
		printf("%u\n", a[n-1]);
	}
	return 0;
}
unsigned int gcd (unsigned int a,unsigned int b)
{
	if (a < b){
		unsigned int temp = a;
		a = b;
		b = temp;
	}
	if (a % b == 0){
		return b;
	}else{
		gcd(b,a % b);
	}
}
