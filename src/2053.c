#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		int count = 0;
		for (int i = 1; i <= n; i++){
			if(n % i == 0){
				count = !count;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
