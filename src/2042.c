#include <stdio.h>
int sheep(int n);
int main()
{
	int m;
	scanf("%d", &m);
	while (m--){
		int n;
		scanf("%d", &n);
		int sheeps;
		sheeps = sheep(n);
		printf("%d\n", sheeps);
	}
	return 0;
}
int sheep(int n)
{
	int sheeps;
	if(n == 0){
		return 3;
	}else{
		sheeps = (sheep(n - 1)-1) * 2;
		return sheeps;
	}
}
