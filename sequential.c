#include <stdio.h>

int main() {
    int n, start, length, i;

    printf("Enter total blocks on disk: ");
    scanf("%d", &n);

    int disk[n];
    for(i = 0; i < n; i++) 
        disk[i] = 0;

    printf("Enter starting block of file: ");
    scanf("%d", &start);

    printf("Enter length of file: ");
    scanf("%d", &length);

    printf("Allocated blocks: ");
    for(i = start; i < start + length; i++) {
        if(i >= n) {
            printf("\nDisk overflow!\n");
            break;
        }
        printf("%d ", i);
        disk[i] = 1;
    }

    printf("\nDisk allocation: ");
    for(i = 0; i < n; i++)
        printf("%d ", disk[i]);

    printf("\n");
    return 0;
}
