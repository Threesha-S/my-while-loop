#include <stdio.h>

int main() {
    int n,balance,amount,low = 0,i = 0;
    scanf("%d%d", &n,&balance);   
    while (i < n) {
        scanf("%d", &amount);
        balance = balance + amount;
        if (balance < 2000)
        low++;
        i++;
    }

    printf("Final balance : %d\n", balance);
    printf("Low balance days : %d\n", low);

    return 0;
}