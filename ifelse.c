#include <stdio.h>
int main() {
    int n;
    printf("Enter your age: ");
    scanf("%d", &n);

    if(n >= 18) {
        printf("You're an adult.\n");
    } else {
        printf("You're a minor.\n");
    }
    return 0;
}
