#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer arg 1
 * @src: pointer arg 2
 * Return: concatenated strings
*/

char* _strcat(char* dest, char* src) {
 char* dest_ptr = dest;
 /*Find the end of the destination string*/
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    /*Append the source string to the destination*/
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }
    /*Add the terminating null byte to the concatenated string*/
    *dest_ptr = '\0';

    return dest;
}

