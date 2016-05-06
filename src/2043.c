#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		char key[51];
		int count = 0;
		if (strlen(key) >= 8 && strlen(key) <= 16){
		
		
			fgets(key, 50, stdin);
			for (int i = 0; i < strlen(key); i++){
				if(key[i] >= 'A' && key[i] <= 'Z'){
					count++;
					break;
				}
			}
			for (int i = 0; i < strlen(key); i++){
				if(key[i] >= 'a' && key[i] <= 'z'){
					count++;
					break;
				}
			}
			for (int i = 0; i < strlen(key); i++){
				if(key[i] >= '0' && key[i] <= '9'){
					count++;
					break;
				}
			}	
			for (int i = 0; i < strlen(key); i++){
				if(key[i] == '~'|| key[i] == '!' || key[i] == '@'|| key[i] == '#' || key[i] == '$' || key[i] == '%'|| key[i] == '^'){
					count++;
					break;
				}
			}
		}
		if (count >= 3){
			printf ("YES\n");
		}else{
			printf ("NO\n");
		}

	}
	return 0;
}
