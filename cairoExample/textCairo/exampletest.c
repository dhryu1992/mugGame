#include <stdio.h>
#include <string.h>
char *naver[10] = {0, };
int main() {

int i = 0;
int a = 0;
int t = 0;
int k = 0;
char *img[10], *text[10];
*naver[0] = "abcd";
naver[1] = 

while(1) {

                printf("while 시작 or 한바퀴 돔\n");
                if(strcmp(naver[i], "src") == 0) {
                        printf("그림파일 인식시작\n");
                        i++;
                        img[k] = naver[i];
                        printf("img[%d] : %s\n", k, img[k]);
                        k++;
                        printf("imgNaver: %d %s\n", i, naver[i]);

                }else if(strcmp(naver[i], "\0") == 0) {
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


