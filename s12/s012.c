// Assuming that one number is input from keyboard, display the number and a message indicating whether it is positive or negative or zero.  Take note that the dispay statement(s) must be placed in the program AFTER the selection statement (do not display output IN the if statement).
//
// Language: c
//

#include <stdio.h>


int main(int argc, char *argv[]) {
    int num;
    // string str is used to strore the message to be displayed on the printf function.

    int print_num;

    char *str_ptr;


    // Prompt the user to enter a number
    printf("Enter a number: ");

    scanf("%d", &num);
    if (num > 0) {
        // assain str with positive message
        str_ptr =  "positive";
        print_num = num;
    } else if (num < 0) {
        // assain str with negative message
        str_ptr = "negative";
        print_num = num;
    } else {
        // assain str with zero message
        str_ptr = "zero";
        print_num = num;
    }

    printf("%d is %s\n", print_num, str_ptr);

    return 0;
}

