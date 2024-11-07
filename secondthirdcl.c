#include <stdio.h>

float addition( float a, float b){
    return a + b;
}

float multiplication( float a, float b){
    return a * b;
}

float subtraction( float a, float b){
    return a - b;
}

float division( float a, float b){
    return a/b;
}


int main() {
    float a = scanf("%f");
    float b = scanf("%f");

    int option = scanf("Print 1,2,3,4 to pick an operation");
    switch (option) {
          case   (option == 1) {
        float result = addition(float a,float b);
        } case (option == 2) {
        float result = multiplication(float a,float b);
        } case (option == 3) {
         float result = subtraction(float a,float b);
        } case (option == 4) {
        float result = division(float a,float b);
    }
    }





    return 0;

}