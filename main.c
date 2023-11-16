#include <stdio.h>
#include <string.h>

int encrypt(int input, char currentPass) {
    return input ^ currentPass;
}

int main(int argc, char *argv[]) {

    if (argc < 2) {
	puts("Need one arg as pass to do the crypting with");
	return 1;
    }

    char* password = argv[1];
    int passIndex = 0;
    int passLen = strlen(password);
    int c;
    while ((c = getchar()) != EOF) {
	putchar(encrypt(c, password[passIndex]));
	passIndex += passIndex > passLen ? -passLen : 1; //increment or reset indexcounter
    }

    return 0;
}
