#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // number of readings

    int count = 0, longest = 0, current = 0;
    int value;
    int i = 0;

    while (i < n) {
        scanf("%d", &value);

        if (value > 70) {
            count++;
            current++;

            if (current > longest)
                longest = current;
        } else {
            current = 0;
        }

        i++;
    }

    printf("Noise violations : %d\n", count);
    printf("Longest violations streak : %d\n", longest);

    return 0;
}