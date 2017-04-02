#include<stdio.h>

char getLowerCase(char letter);

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}
	for(int i = 0; argv[1][i] != '\0';i++) {
		char letter = getLowerCase(argv[1][i]);
		switch(letter) {
			case 'a':
				printf("%d: 'A'\n",i);
				break;
			case 'e':
				printf("%d: 'E'\n",i);
				break;
			case 'i':
				printf("%d: 'I'\n",i);
				break;
			case 'o':
				printf("%d: 'O'\n",i);
				break;
			case 'u':
				printf("%d: 'U'\n",i);
				break;
			case 'y':
				printf("%d: 'Y'\n",i);
				break;

			default:
				printf("%d: %c is not a vowel\n",i,letter);
			
		}
		
	}
	return 0;
}

char getLowerCase(char letter){
	if(letter < 'a'){
		return letter + 26;
	}
	return letter;
}
