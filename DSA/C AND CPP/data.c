#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n, new_number;
    scanf("%d", &n);
    
    int p_numbers = (int)malloc(n * sizeof(int));
    int i = 0;
    while (i < n) {
        scanf("%d", &new_number);
        *(p_numbers + i) = new_number;
        i++;
    }
    
    while (i >= 1) {
        printf("%d ", *(p_numbers + --i));
    }
    free(p_numbers);
    return 0;
}
