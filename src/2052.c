#include <stdio.h>
int main()
{
	int n ,m;
	while (scanf("%d%d", &n, &m) != EOF){
		printf("+");
		for (int i = 0; i < n; i++){
			printf("-");
		}
		printf("+\n");
		for (int i = 0; i < m; i++){
			printf("|");
			for (int i = 0; i < n; i++){
				printf(" ");
			}
			printf("|\n");
		}
		printf("+");
		for (int i = 0; i < n; i++){
			printf("-");
		}
		printf("+\n\n");
	}
	return 0;
}
