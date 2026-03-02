#include <stdio.h>

int main() {
    int n,i = 0;
    scanf("%d", &n);
    int arr[n];
    while(i < n) {
        scanf("%d", &arr[i]);
        i++;
    }
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;

    while(i < n) {
        if(arr[i] == 0) {
            currentStreak++;
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;  
        }
        i++;
    }

    printf("Longest Failure Streak: %d", maxStreak);

    return 0;
}