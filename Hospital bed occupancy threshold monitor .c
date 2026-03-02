#include <stdio.h>

int main() {
    int capacity,n,change,occupied = 0,i = 0,criticalCount = 0;
    scanf("%d%d", &capacity,&n);
    while (i < n) {
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied < 0) {
            occupied = 0;
        }
        if (occupied > capacity) {
            occupied = capacity;
        }
        if (occupied > (0.9 * capacity)) {
            criticalCount++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);

    return 0;
}