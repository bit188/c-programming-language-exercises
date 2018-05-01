#include <stdio.h>

int main() {

int c, prevchar;
prevchar = EOF;

while ((c=getchar()) != EOF) {
	if(c == ' ' && prevchar == ' ') {
		;
	}
	else {
		prevchar = c;
		putchar(c);
	}
}
}
