#include <stdio.h>

int total(int csc201, int csc205, int sta205){
    return csc201 + csc205 + sta205;
}
int Average(int csc201, int csc205, int sta205){
    return (csc201 + csc205 + sta205) / 3;
}
int percentage (int csc201, int csc205, int sta205){
    return (csc201 + csc205 + sta205 ) * 100 / 300;
}

int main () {
    int csc201, csc205, sta205;
    printf("Enter score for csc201: ");
    scanf ("%d", &csc201);
    printf("Enter score for csc 205: ");
    scanf ("%d", &csc205);
    printf("Enter score for sta205: ");
    scanf ("%d", &sta205);

    int option; 
    printf("Menu:\n");
    printf("Pick 1 to calculate the TOTAL\n");
    printf("Pick 2 to calculate AVERAGE\n");
    printf("Pick 3 to calculate PERCENTAGE\n");
    scanf("%d", &option);

    int result; // C doesnt allow re-declaration of result or the variable name in each case

    switch (option) {
        case 1:
        result = total(csc201, csc205, sta205);
        printf("your result is: %d\n", result);
        break;
        
        case 2:
        result = Average(csc201, csc205, sta205);
        printf("your result is: %d\n", result);
        break;
        
        case 3:
        result = percentage(csc201,csc205, sta205);
        printf("your result is: %d%%\n", result);
        break;
        
        default:
            printf("Invalid choice. Please select between 1 and 3.\n");   
    }


}