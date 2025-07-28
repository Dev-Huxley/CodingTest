#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long temp = n;
    int digit_count = 0;
    while (temp > 0) {
        digit_count++;
        temp /= 10;
    }

    int* answer = (int*)malloc(sizeof(int) * digit_count);
    
    for (int i = 0; i < digit_count; i++) {
        answer[i] = n % 10;
        n /= 10;
    }
    
    return answer;
}