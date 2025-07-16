#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    
    int sum = n * 12000;
    int service = n / 10;
    sum += (k - service) * 2000;
    
    return sum;
}