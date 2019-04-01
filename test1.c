#include <stdio.h>
#include <string.h>

void main () {
	char s[2] = {'h', '\0'};
	char ch = 'p';
	char s1[2] = {ch, '\0'};
	strcat(s, s1);

	printf("\n%s\n%s", s, s1);
	printf("\n%s", s1);

	return;
}