//
//  scratch.h
//  
//
//  Created by Mark on 2/18/19.
//
//  Maps some Scratch functions into a C header file
//
#ifndef scratch_h
#define scratch_h

#define MAX 200

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* looks */

void say(char s[MAX],int x)            // "says" string, x size long
{
    if(x>MAX)
    {
        printf("function does not work with string length greater than 200");
    }
    for(int i = 0; i < x; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}

/* operations */

int add(int x, int y)               // adds two integers x and y
{
    return x+y;
}
int subtract(int x, int y)          // subtacts two integers x and y
{
    return x-y;
}
int multiply(int x, int y)          // multiplies two integers x and y
{
    return x*y;
}
int divide(int x, int y)            // divides two integers x and y
{
    return x/y;
}
int pickRandom(int x, int y)
{
    srand(time(NULL));
    return (rand() % (x - y)) + y;
}
int andOperation(int x, int y)
{
    if(x != 0 || x != 1 || y != 0 || y != 1)
    {
        printf("operation does not work if input not 1 or 0\n");
    }
    if(x == 0 || y == 0)
    {
        return 0;
    }
    if(x == 1 || y == 0)
    {
        return 0;
    }
    if(x == 0 || y == 1)
    {
        return 0;
    }
    if(x == 1 || y == 1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int orOperation(int x, int y)
{
    if(x != 0 || x != 1 || y != 0 || y != 1)
    {
        printf("operation does not work if input not 1 or 0\n");
    }
    if(x == 0 || y == 0)
    {
        return 0;
    }
    if(x == 1 || y == 0)
    {
        return 1;
    }
    if(x == 0 || y == 1)
    {
        return 1;
    }
    if(x == 1 || y == 1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int notOperation(int x, int y)
{
    if(x != y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char letterOf(int x, char c[MAX])
{
    if(strlen(c)>MAX)
    {
        printf("function does not work with string length greater than 200");
    }
    return c[x];
}
int lengthOf(char c[MAX])
{
    int i = 0;
    while(c[i] != \0)
    {
        i++;
    }
    return i;
}
int contains(char c[MAX], char s[MAX])
{
    return 0;
}
#endif /* scratch_h */
