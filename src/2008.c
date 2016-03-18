/*************************************************************************
    > File Name: src/2008.c
    > Author: JS
    > Created Time: 2016年03月12日 星期六 17时39分21秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		if (n == 0){
			break;
		}
		int a = 0, b = 0, c = 0;
		double k;
		for (int i = 0; i < n; i++){
			scanf("%lf", &k);
			if (k < 0){
				a++;
			}else if (k == 0){
				b++;
			}else{
				c++;
			}
		}
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}
