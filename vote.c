#include <stdio.h>  

int main() {
    int userAge;
    printf("Enter your age:");
    scanf("%d/", &userAge);

    if(userAge >= 18){
        printf("You can vote!!");
    } else {
        printf("youre a minor, dont vote!");
    }

    return 0;
}