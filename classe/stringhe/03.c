#include <stdio.h>
#include <stdbool.h>
#include "strlib.c"

int main(){
    char s1[]="mora";
    char s2[]="ramo";

    bool ver;

    ver=anagramma(s1, s2);

    if(ver==true){
        printf("LE DUE STRINGHE SONO UN ANAGRAMMA");
    }

    else{
        printf("LE DUE STRINGHE NON SONO UN ANAGRAMMA");
    }

    return 0;
}