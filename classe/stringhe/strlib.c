#include <stdio.h>
#include <stdbool.h>
#include "strlib.h"
void initStr(int _dim, char _str[]){
    int i=0;
    for(i=0; i<_dim; i++){
        _str[i]='\0';
    }
}

int strLenght(char _str[]){
    int len=0;
    while(_str[len]!='\0'){
        len++;
    }
        return len;
}

void reversePrint(char _str[]){
    int i=0;
    int len=0;

    len=strLenght(_str);

    for(i=len-1; i>=0; i--){
        printf("%c", _str[i]);
    }

}

int cntChar(char _str[], char _src){
    int len;
    int i;
    int cnt;

    len=strLenght(_str);
    cnt=0;
    for(i=0; i<len; i++){
        if(_str[i]==_src)
            cnt++;
    }

    return cnt;
}

void countAlfa(char _str[]){
    char src;
    int cntLett[26];

    src="a";
    for (int i=0; i<26; i++){
        cntLett[i]=0;
        cntLett[i]=cntChar(_str, (src+1));
    }

    for(int i=0; i<26; i++){
        printf("%c --> %2d ", (src+i), cntLett[i]);
        if((i+1)%13==0)
            printf("\n");
    }

}

bool anagramma(char _s1[], char _s2[]){
    int len1=0;
    int len2=0;

    char src;

    int ch1=0;
    int ch2=0;

    len1=strLenght(_s1);
    len2=strLenght(_s2);

    if(len1!=len2)
        return false;
    
    src='a';
    for(int i=0; i<26; i++){
        ch1=cntChar(_s1, src);
        ch2=cntChar(_s2, src);
        src+=1;
        if(ch1!=ch2){
            return false;
        }
    }
    return true;
}