#include <stdio.h>

int main () {
	int c, inspace, wlength, i;
	int store[15];
	inspace = 0;
	wlength = 0;

	for (i = 0; i < 15; ++i) {
                store[i] = 0;
        }
	while ((c=getchar()) != EOF) {
		if (c == ' ') {
			if (inspace == 0) {
				inspace = 1;
				store[wlength-1] += 1;
                                wlength = 0;
			}
		}
		else {
			inspace = 0;
			++wlength;
			}
		}
	for (i = 0; i < 15; ++i) {
		printf("%d\n", store[i]);	
}
}
