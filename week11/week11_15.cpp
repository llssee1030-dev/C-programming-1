#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token;

int main(void){
	token = strtok(s, seps);

	while (token != NULL){
		printf("ÅäÅ«: %s\n", token);
		token = strtok(NULL, seps);
	}
}