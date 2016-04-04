#include <stdio.h>
void change(int n)
{
	if (n == 0){
		return;
	}else{
		int a;
		a = n % 2;
		change(n/2);
		printf("%d", a);
	}
}
int main()
{
	int n;
	while(scanf("%d", &n) != EOF){
		change(n);
		printf("\n");
	}
	return 0;
}
