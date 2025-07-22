#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    if (num == 1) return 0;
    
    long long n = num;
    int answer = 0;
    
    while(n != 1) {
        n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
        answer++;
        if (answer >= 500) return -1;
    }
    return answer;
}