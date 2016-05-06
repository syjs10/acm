#include <stdio.h>
#include <string.h>
int main()
{
	char A[101000], B[101000];
	while(scanf("%s%s", A, B) != EOF){
		char *p = NULL;
		char *q = NULL;
		for (int i = 0; i < 101000; i++){
			if( A[i] != '0'){
				p = &A[i];
				break;
			}
		}
		for (int i = 0; i < 101000; i++){
			if( B[i] != '0'){
				q = &B[i];
				break;
			}
		}
		int countA = 0;
		for (int i = 0; i < strlen(p); i++){
			if (p[i] == '.'){
				countA = 1;
				break;
			}
		}
		int countB = 0;
		for (int i = 0; i < strlen(q); i++){
			if (q[i] == '.'){
				countB = 1;
				break;
			}
		}
		int i = 0;
		if (countA){
			for (i = (strlen(p) - 1); ; i--){
				if (p[i] == '0'){
					p[i] = '\0';
				}else{
					break;
				}
			}
			if (p[i] == '.'){
				p[i] = '\0';
			}
		}
		if (countB){
			for (i = (strlen(q) - 1); ; i--){
				if (q[i] == '0'){
					q[i] = '\0';
				}else{
					break;
				}
			}
			if (q[i] == '.'){
				q[i] = '\0';
			}
		}
		if (strcmp(p, q) == 0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
