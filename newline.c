#include <stdio.h>

int main(){
int c, nl, bl, t;

nl = 0;
bl = 0;
t = 0;
while ((c = getchar()) != EOF)
	if (c == '\n')
		++nl;
	else if (c == ' ')
		++bl;
	else if (c == '\t')
		++t;
printf("newlines\t%d\n", nl);
printf("blanks\t%d\n", bl);
printf("tabs\t%d\n", t);
}
