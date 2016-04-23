#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	while(scanf("%d", &n) != EOF){
		getchar();
		char a[50][10] = {'\0'};
		int i, j;
		for (i = 0; i < n; i++){
			scanf("%s", &a[i]);
		}
		char b[550] = {'\0'};
		int k;
		for (i = 0; i < 10; i++){
			char max[10] = {'\0'};
			strcpy(max, &a[0][i]);
			for (j = 0; j < 10; j++){
				if(max[0] < a[j][i]){
					strcpy(max, &a[j][i]);
					k = j;
				}
			}
			strcat(b, a[k]);
		}
		printf("%s\n", b);	
	} 
	return 0;
}