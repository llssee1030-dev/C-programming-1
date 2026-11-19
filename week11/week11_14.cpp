#include<stdio.h>
#include<string.h>

int main(void) {
	char s[] = "Man is immortal, because he has a soul";
	char* t1 = strtok_s(s, " ");
	char* t2 = strtok_s(NULL, " ");
	char* t3 = strtok_s(NULL, " ");
	char* t4 = strtok_s(NULL, " ");

	return 0;
}