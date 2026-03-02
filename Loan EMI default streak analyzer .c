#include <stdio.h>

int main() {
    int n,payment,i = 0,currentStreak = 0,maxStreak = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &payment);
        if (payment == 0) {
            currentStreak++; 
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak; 
            }
        } else {
            currentStreak = 0;  
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);

    return 0;
}