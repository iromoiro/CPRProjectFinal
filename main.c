//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"

//Main, calls upon other modules or terminates the prorgram depending on a user input from 0-4
int main(void)
{
    char buff[10];  //This variable stores the user's input
    do
    {
        //Below are the printed numeric options of functions for the user to see and choose from
        //Options 1-4 call their assosciated functions (Fundamentals, Manipulation, Converting, Tokenizing)
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");   //Exit is not a function, this option terminates the program
        printf("Which module to run? \n");
        fgets(buff, 10, stdin); 
        switch (buff[0])    //Depending on user's choice, call the input's associated function
        {
        case '3': converting();
            break;
        }
    } while (buff[0] != '0');   //If the user input is 0 (exit), loop stops and process is terminated
    return 0;
}