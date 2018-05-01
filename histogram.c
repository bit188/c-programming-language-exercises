#include <stdio.h>

int main(){
	int c, i, prev, wlength;
	int store[15];
	prev = EOF;
	wlength = 0;
	for (i = 0; i < 15; ++i) {
		store[i] = 0;
	}
	while ((c=getchar()) != EOF) {
		if (c == ' ') {
			if (prev == ' ') {
				;
			}
			else { 
				store[wlength-1] += 1;
				wlength = 0;
			}
		}
		else {
			++wlength;
		}
		prev = c;
	}
	for (i = 0; i < 15; ++i) {
		printf("%d\n", store[i]);	
}
}
