
#include <string.h>
#include <stdio.h>

int main() {
	int i = 0;
	int a;
	char *buffer[10] ={0,};
	char *text[10], *img[10];
	buffer[0] = "abcd";
	buffer[1] = "cdef";
	buffer[2] = "src";
	buffer[3] = "arin.png";	
	buffer[4] = "5678";
	buffer[5] = "src";
	buffer[6] = "arin1.png";
	buffer[7] = "late";
	buffer[8] = "mon";
	buffer[9] = "tues";

	while(1) { 
		if(buffer[i] == NULL) {
			break;	
		} else if(buffer[i] == "src" ) {
			i++;	
			img[i] = buffer[i];		
			printf("image: %s\n", img[i]);	
		}else{
			text[10] = buffer[i];
			printf("%s\n", text[10]);
		}	
		i++;
	}
}	


