#include <stdio.h>

int main() {

    // float accountBalance = 10000;
    // float credit = 50000;
    // float debit = 20000;

    // accountBalance += credit;
    // accountBalance -= debit;

    // accountBalance *= 2;

    // printf("%.2f", accountBalance); //%i for printing integers, %.2f, to get two decimal place, %d for a character gets the ASCII character for the value

    // //no boolean data type in C, you use 1 or 0, any number apart from zero is true-- zero as false and one as true

    // int isPaustudent = 0;
    // int isAdult = 1;

    // if (!isPaustudent || isAdult ) {
    //     printf("You are eligible to vote!!");
    // } else {
    //     printf("You are not eligible to vote!!");
    // }

    //to achieve exclusive or, you have to break it down, in exclusive or, only one of the conditions are true
// logical and i &&, while bitwise and is &, same with OR
// logical negation ! while bitwise negation is ~

// int a = 5;
// int b = 3;
// printf("%i", a | b);

// int user_age;

// user_age = scanf("enter your age: ");

// if (user_age ==18){
//     printf("You are an adult");
//  } else {
//     printf("You are not an adult");
//  }
//     return 0;


char subjects;
scanf("%c", &subjects);
printf("%c", subjects);
return 0;
}
