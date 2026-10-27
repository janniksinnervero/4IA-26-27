#include <stdio.h>
int strcmp(char* s1, char* s2){
    for (int i=0; s2!=0 || s1!=0; i++){
        if(s2>s1)
            return 1;
        
        if(s1>s2)
            return -1;
    }

    return 0;
    
}


