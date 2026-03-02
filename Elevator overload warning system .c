i#include <stdio.h>

int main() {
    int maxWeight, n,i = 0,weight,totalWeight = 0,allowed = 0,overload = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &weight);
        totalWeight += weight;
        if(totalWeight > maxWeight) {
            overload = 1;
            break;
        }

        allowed++;
        i++;
    }

    printf("Passengers Allowed: %d\n", allowed);

    if(overload == 1) {
        printf("Overload: Yes");
    } else {
        printf("Overload: No");
    }

    return 0;
}