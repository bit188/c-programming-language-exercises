#include <stdio.h>
#define MAXLINE 1024

int get_line(char line[], int maxline);
void reverse(char in[], char out[], int lim);

int main(){
	int c;
	int length;
	char line[MAXLINE];
	char buffer[MAXLINE];
	while((length=get_line(line, MAXLINE)) > 0){
		reverse(line, buffer, length);
		printf("%s", buffer);
	}
}

int get_line(char s[], int lim){
        int c, i;

        for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
                s[i] = c;
        if(c=='\n'){
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;
}

void reverse(char in[], char out[], int lim){
	int i, j;
	j=0;
	for(i=lim-2; i>=0; i--){
		out[j]=in[i];
		j++;
	}
	out[lim-1]='\n';
	out[lim]='\0';
}
