#include<stdio.h>

int main(void)
{
	char name[4]={'a'};
	printf("my name is %s\n",name);
	name[1] = 'b';
	name[2] = 'c';
	name[3] = '\0';
	printf("name is %s\n",name);
	
	char *another_name = "Tesla";
	printf("my actual name is %s\n",another_name);
}

