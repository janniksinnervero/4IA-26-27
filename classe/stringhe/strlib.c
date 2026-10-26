#include <stdio.h>
#include "strlib.h"
void initStr(int _dim, int _str[]){
    int i=0;
    for(i=0; i<_dim; i++){
        _str[i]='\0';
    }
}

int strLenght(int _dim, int _str[]){
    int len=0;
    while(_str[len]!='\0'){
        len++;
    }
    if (len>_dim){
        return len;
    }
    else{
        return -1;
    }
}