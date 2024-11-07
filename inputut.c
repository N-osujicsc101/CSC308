#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);   // & is required to store the input
    printf("Your age is: %d\n", age);
    return 0;
}