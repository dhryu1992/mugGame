#include "example_1.h"

char Array() {
	while(1) {
		printf("while 시작 or 한바퀴 돔\n");
		if(naver[i]== "src") {
			printf("그림파일 인식시작\n");
			i++;
			img[k] = naver[i];
			printf("img[%d] : %s\n", k, img[k]);
			k++;
			printf("imgNaver: %d %s\n", i, naver[i]);
		
		}else if(naver[i] == NULL ) {
			printf("NULL 일 때\n");
			break;
		}else{
			printf("텍스트파일 인식 시작\n");
			text[t] = naver[i];
			printf("text[%d]: %s\n", t, text[t]);
			t++;	
			printf("textNaver: %d %s\n", i, naver[i]);
			
		}
		i++;
		printf("i: %d\n", i);

	}
}
