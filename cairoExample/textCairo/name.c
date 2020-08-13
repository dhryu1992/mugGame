
#include <stdio.h>
#include <string.h>

char *text[5] = {"abcd", "aaa", 0, };

void main() {
	int i = 0;
	printf("%s\n", 0);
	while(1) {
		if(text[i] == NULL) {
			printf("null\n");
			break;
		}else
			printf("%s\n", text[i]);
		i++;
	}
}
