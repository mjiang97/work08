#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *s) {
    int len = 0;
    while(*s) {
        len++;
        s++;
    }
    return len;
}

char * mystrncpy(char *dest, char *source, int n) {
    int i;
    for(i = 0; i < n; i++) {
        dest[i] = source[i];        
    }
    dest[i] = '\0';
    return dest;
}

char * mystrcat(char *dest, char *source) {
    int i = 0;
    int len = mystrlen(dest);
    while(source[i]) {
        dest[len] = source[i];
        i++;
    }
    dest[len+i] = '\0';
    return dest;
}

int mystrcmp(char *s1, char *s2) {
    while(*s1 == *s2 && *s1 != '\0') {
        s1++; 
        s2++;
    }
    if(*s1 > *s2) {
        return 1;
    } else if (*s1 == '\0' && *s2 == '\0') {
        return 0; 
    } else {
        return -1;
    }
}

char * mystrchr( char *s, char c ) {
    while(*s && *s != c) {
        s++;
    }
    if(*s == c) return s;
    return 0;
}