#include "vg.c"

void pingPong(int startCol, int endCol, int row, char c, int millis){
    int col= startCol;
    int direction=1;
    while(true){
        if (col==endCol+1||col==startCol-1)
            direction*=-1;
        goTo(col, row);
        printf("%c",c);
        fflush(stdout);

        msSleep(millis);
        goTo(col, row);
        printf(" ");
        col+=direction;
    }
}

int main(void){
    signal(SIGINT, terminate);
    clear();
    printf("aspetta...");
    fflush(stdout);
    msSleep(3*1000);
    printf("un attimo!\n");

    goTo(10, 10);
    printf("    !?     \n");
    return 0;
}