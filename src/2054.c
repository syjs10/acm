# include <stdio.h>
# include <string.h>
char a[100000]={0},b[100000]={0};
int main ()
{
	while (scanf("%s%s",&a,&b)+1)
	{
		int i=0;
		if (strchr(a,'.'))
		{
			for (i=strlen(a)-1;a[i]=='0';i--)
				a[i]='\0';
			if (a[i]='.')
				a[i]='\0';
		}	
		if (strchr(b,'.'))
		{
			for (i=strlen(b)-1;b[i]=='0';i--)
				b[i]='\0';
			if (b[i]='.')
				b[i]='\0';
		}
		printf(strcmp(a,b)?"NO\n":"YES\n");
	}
	return 0;
 }
