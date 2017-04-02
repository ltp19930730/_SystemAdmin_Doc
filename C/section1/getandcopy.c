#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	CHAR longest[MAXLINE];

	max = 0;
	while ((len = getline(line,MAXLINE)) > 0){
		if (len > max) {
			max = len;
			copy(longest,line);
		}
	}
	if (max >0)
		printf("%s", longest);
	return 0;
}	

int getline(char s[], int lim){


}
}
