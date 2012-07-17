/*************************************************************************
 *                                                                      **
 * Author: bear         <jrjbear@gmail.com>                             **
 * Date: 2012--04--04                                                   **
 *                                                                      **
 * File: common.hpp                                                     **
 * Description:                                                         **
 *                                                                      **
 *************************************************************************
 */


#ifndef _COMMON_HPP_
#define _COMMON_HPP_

#include <stdio.h>
#include <string.h>

// Note that s contains '\n' and this function
// returns the number of characters including '\n'.
int my_getline (char s[], int lim) 
{
    int c, i;

    // i < lim - 1 because we should leave at least
    // one space for \0.
    for (i = 0; i < lim - 1 
         && (c = getchar ()) != EOF 
         && c != '\n'; i++) {
        s[i] = c;
    }

    if (c == '\n' && i < lim - 1) {
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

void reverse (char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; 
         i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}



#endif // _COMMON_HPP_