#include <stdio.h>  

int main() {

    char input;
    printf("Type any letter from A to J: ");
    scanf("%c",&input);

    if(input <'A' || input > 'J'){
       printf("Invalid choice of letter, type any letter from the range of A to J");
    }

    for(int i = 1; i<=6; i++){
            char nextChar = input + i;  
        if (nextChar > 'J') break; 
        printf("%c ", nextChar);  
        }

         printf("\n");
    return 0;
}