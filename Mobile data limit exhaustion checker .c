#include <stdio.h>

int main() {
    int totaldata,n,used,i = 0,daysused = 0;
    scanf("%d%d", &totaldata,&n);   
    while (i < n && totaldata > 0) {
        scanf("%d", &used);
        totaldata = totaldata - used;
        daysused++;
        i++;
    }
    if(totaldata < 0)
    totaldata = 0;

    printf("Days used : %d\n", daysused);
    printf("Remaining data : %dGB", totaldata);

    return 0;
}