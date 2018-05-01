#include <stdio.h>
#define STOP 4

int main(){
	int count = 1;
	int i;
	int c;
	while((c=getchar())!=EOF && c!='\n'){
		if(c=='\t'){
			for(i=0;i<=(STOP-(count%STOP));i++)
				putchar(' ');
		}
		else
			putchar(c);

		count++;
	}
	printf("\n");
}
