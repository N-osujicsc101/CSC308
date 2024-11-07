#include <stdio.h> 

int main () {
    int experience;
    int age;

    printf("Are you experienced ?\n");
    printf("If you're experienced, type  1\n");
    printf("If you're inexperienced, type 2\n");
    scanf("%d", &experience);

    printf("How old are you?  \n");
    scanf("%d", &age);

    if(experience == 1 && age>= 40) {
        printf("You are experienced and old, your salary is N560,000\n"); //== is used for comparison, while = is used for assignment
    }else if(experience == 1 && age>= 30  && age < 40) {
        printf("Youre kind of a millenial, your salary is N480,000 \n");
    }else if(experience == 1 && age< 28){
        printf("You GenZ's, your salary is N300,000\n");
    }else if(experience == 2){
        printf("Go and skill up jor, your salary is N100,000\n");
    }

    return 0;
    

}