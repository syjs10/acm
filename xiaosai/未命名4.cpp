#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
	char a[100000];
	while (scanf("%s", a) != EOF){
		int i = 0;
		if (a[0] == 'a' || a[0] == 'A'||
		a[0] == 'e' || a[0] == 'E'||
		a[0] == 'i' || a[0] == 'I'||
		a[0] == 'o' || a[0] == 'O'||
		a[0] == 'u' || a[0] == 'U'){
			int j;
			for (j = strlen(a); j >= i; j--){
				a[j+2] = a[j];
			}
			a[i] = 'a';
			a[i + 1] = 'y';
		}else{
			int j;
			for (j = strlen(a); j >= i; j--){
				a[j+3] = a[j];
			}
			a[i] = a[0];
			a[i + 1] = 'a';
			a[i + 2] = 'y';
		}
		
		while(a[i] != '.'){
			if(a[] == ' '){
				if (a[i+1] == 'a' || a[i+1] == 'A'||
				a[i+1] == 'e' || a[i+1] == 'E'||
				a[i+1] == 'i' || a[i+1] == 'I'||
				a[i+1] == 'o' || a[i+1] == 'O'||
				a[i+1] == 'u' || a[i+1] == 'U'){
					
					int j;
					for (j = strlen(a); j >= i; j--){
						a[j+2] = a[j];
					}
					a[i] = 'a';
					a[i + 1] = 'y';
				}else{
					
					int j;
					for (j = strlen(a); j >= i; j--){
						a[j+3] = a[j];
					}
					a[i+1] = a[];
					a[i + 1] = 'a';
					a[i + 2] = 'y';
				}
				k++;
			}
		}
		printf("%s\n", a);
		memset(a, '\0', 100000);
	}	 
	return 0; 
} 