#include <stdio.h>
#define MAXLINE 1024
     
int get_line(char line[], int maxline);
void strip_line(char in[], char out[], int lim);
     
int main(){
	int i;
    	int length;
    	char line[MAXLINE];
    	char buffer[MAXLINE];
    	while((length=get_line(line, MAXLINE)) > 0){
    		strip_line(line, buffer, length);		
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
     
void strip_line(char in[], char out[], int lim){
	int i, end;
	i=lim-2;
	end=i;
	while(i>=0){
		if(in[i]==' ' || in[i]=='\t'){
			--i;
			end=i;
		}
		else
			break;
	}
	for(i=0; i<=end; i++)
			out[i] = in[i];
 
	out[end+1]='\n';
	out[end+2]='\0';
}
