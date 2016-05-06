#include <stdio.h>
#include <string.h>
int main()
{
	char a[100] = {'\0'};
	while (scanf ("%s", a) != EOF){
		int count = 0;
		int s[26] = {0};
		int c;
		int i = 0;
		while (a[i] != '\0'){
			s[(int)(a[i++]-97)]++;
		}
		for (i = 0; i < 26; i++){
			if (s[i] == 1){
				count++;
				c = i;
			}
		}
		char ch = a[i];
		for (i = strlen(a); i < (strlen(a) / 2 + 1); i--){
			a[i + 1] = a[i];
		}
		a[strlen(a) / 2 + 1] = ch;
		printf("%s", a);
	/*	int sum = 0;
		if (count == 0){
			i = 0;
			int j = 0;
			while (a[i] != '\0'){
				for (j = (i + 1); j < strlen(a); j++){
					if (a[j] == a[i]){
						
					}
				}
			}
		}else if (count == 1){
			
		}else{
			printf("Impossible\n");
		}*/
	}  
	return 0;
}