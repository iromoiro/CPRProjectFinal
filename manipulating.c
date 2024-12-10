// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

/* This module runs basic string manipulation operations using standard library functions. 
It has three main parts: concatenating strings, comparing strings, and searching for substrings.*/


void manipulating(void) {
/* Version 1: concatenating (combining) strings
* prompts the user for two strings (string1, string2) and
* combines the two strings in the order they were inputed. Ex.string1string2 
* when "q" is inputed in string1, it will move on to version 2*/
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE];  // Buffer for first string defined
	char	string2[BUFFER_SIZE];  // Buffer for second string defined
	do {
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);  // Gets the first string
		string1[strlen(string1) - 1] = '\0'; // Removes trailing newline characters after reading input
		if ((strcmp(string1, "q") != 0)) {   // Check if input is not "q"
				printf("Type the 2nd string:\n");
				fgets(string2, BUFFER_SIZE, stdin); // Gets the second string
				string2[strlen(string2) - 1] = '\0'; // Removes trailing newline characters after reading input
				strcat(string1, string2);  // Combine first and second strings
				printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0); // Repeats until "q" is entered
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Ends Version 1 and move on to Version 2

/* Version 2 : comparing strings
* prompts the user for two strings (compare1, compare2) and
* compares the two strings*/
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	compare1[BUFFER_SIZE]; // Buffer for first string defined
	char	compare2[BUFFER_SIZE]; // Buffer for second string defined
	int result;  // Stores the compared result
	do {
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);  // Gets the first string
		compare1[strlen(compare1) - 1] = '\0'; // Removes trailing newline characters after reading input
		if (strcmp(compare1, "q") != 0) {  // Check if input is not "q"
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);  // Gets the second string
			compare2[strlen(compare2) - 1] = '\0'; // Removes trailing newline characters after reading input
			result = strcmp(compare1, compare2); // Compares two strings (in dictionary order, character by character)
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 00)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0); // Repeats until "q" is entered
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Ends Version 2 and move on to Version 3


/* Version 3 : searching for substrings */
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	haystack[BUFFER_SIZE]; // Buffer for main string defined
	char	needle[BUFFER_SIZE];  // Buffer for substring defined
	char* occurence = NULL;  // Pointer to substring occurrence; location in string where the substring first appears
	do {
		printf("Type the string (q - to quit):\n");
		fgets(haystack, BUFFER_SIZE, stdin);  // Gets the main string
		haystack[strlen(haystack) - 1] = '\0'; // Removes trailing newline characters after reading input
		if (strcmp(haystack, "q") != 0) {  // Check if input is not "q"
			printf("Type the substring:\n");
			fgets(needle, BUFFER_SIZE, stdin); // Gets the substring
			needle[strlen(needle) - 1] = '\0'; // Removes trailing newline characters after reading input
			occurence = strstr(haystack, needle); // Search for the first match of substring in main string
			if (occurence)
				printf("\'%s\' found at %d position\n", needle, (int)(occurence - haystack));
			else
				printf("Not found\n");
		}
	} while (strcmp(haystack, "q") != 0); // Repeats until "q" is entered
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Ends Version 3 and return to main function


}