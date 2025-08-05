#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    
    // 문자열과 반복 횟수 입력받기
    scanf("%s %d", s1, &a);
    
    // 문자열을 a번 반복해서 출력
    for (int i = 0; i < a; i++) {
        printf("%s", s1);
    }
    
    return 0;
}