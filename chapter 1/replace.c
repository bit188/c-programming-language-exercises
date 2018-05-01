#include <stdio.h>

int main(){
int c, bl;

bl = 0;

while ((c = getchar()) != EOF)
	if(c == ' ') { 
		if(bl == 0) {
			bl = 1;
			putchar(c);
			}
		}
	else {
		bl = 0;
		putchar(c);
	}
}
