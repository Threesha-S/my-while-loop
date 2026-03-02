#include <stdio.h>

int main() {
    int n, i = 0,order,successful = 0,cancelled = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &order);

        if(order == 1) {
            successful++;
        } else if(order == 0) {
            cancelled++;
        }

        i++;
    }

    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);

    if(cancelled > successful) {
        printf("Status: Risk");
    } else {
        printf("Status: Safe");
    }

    return 0;
}