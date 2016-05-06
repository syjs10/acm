#include <stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	getchar();
	while (n--){
		char x;
		int y;
		scanf("%c%d", &x, &y);
		getchar();
		int k = 0;
		if (x >= 'A' && x <= 'Z'){
			k = x - 'A';
			k += 1;
		}
		if (x >= 'a' && x <= 'z'){
			k = x - 'a';
			k *= -1;
			k -= 1;
		}
		printf("%d\n", y + k);
	}
	return 0;
}
