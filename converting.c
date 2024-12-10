// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h" //includes libraries and functions to allow simple conversion between strings & other types


/*  This function prompts user for a numeric string, converts user input from a string
*   to a(n) int/double/long, then outputs the converted input to console
*/
void converting(void) {

    //VERSION 1, convert numeric user input from string to int
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];    //This variable stores the user's input
    int intNumber;  //This variable stores the converted user input from a string to an int

    do {
        printf("Type an int number string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);   //Prompt user to enter a string and store it to intString
        intString[strlen(intString) - 1] = '\0';    //Remove the newline character
        intNumber = atoi(intString);    //Convert the user's input into an int
        printf("Converted number is %d\n", intNumber);
    } while (strcmp(intString, "q") != 0);  //If the user input is "q," quit the loop
    printf("*** End of Converting Strings to int Demo ***\n\n");


    //VERSION 2, convert numeric user input from string to double
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];    //This variable stores the user's input
    double doubleNumber;    //This variable stores the converted user input from a string to an int

    do {
        printf("Type an double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);    //Prompt user to enter a string and store it to doubleString
        doubleString[strlen(doubleString) - 1] = '\0';  //Remove the newline character
        if ((strcmp(doubleString, "q") != 0)) {  //If the user input is "q," quit the loop
            doubleNumber = atof(doubleString);  //Convert the user's input into a double
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0);   //If the user input is "q," quit the loop

    printf("*** End of Converting Strings to double Demo ***\n\n");


    //VERSION 3, convert numeric user input from string to long
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];   //This variable stores the user's input
    long longNumber;    //This variable stores the converted user input from a string to an int

    do {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);  //Prompt user to enter a string and store it to longString
        longString[strlen(longString) - 1] = '\0';  //Remove the newline character
        if ((strcmp(longString, "q") != 0)) {   //If the user input is "q," quit the loop
            longNumber = atol(longString);  //Convert the user's input into a long
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0); //If the user input is "q," quit the loop

    printf("*** End of Converting Strings to long Demo ***\n\n");

}
