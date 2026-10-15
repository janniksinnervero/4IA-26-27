#include <stdio.h>
#include <stdbool.h>
    void pitagoraM(int dim, int mat[]){
        int n=0;
        int cnt=0;

        for (int i=0; i<dim; i++){
            n++;
            for(int j=0; j<dim; j++){
                cnt++;
                mat[i][j]=n*cnt;
            }
        }
    }

    void prodPariDispariV(int dim, int v[], int* prodPari, int* prodDisp){
        *prodPari=1;
        *prodDisp=1;

        for(int i=0; i<dim; i++){
            if(v[i]==0)
                continue;
            if(v[i]%2==0)
                *prodPari*=v[i];
            else
                *prodDisp*=v[i];
        }
    }

    bool vCorniceM(int g, int matCornice[][]; int v){
        for(int i=0; i<g; i++){
            if (matCornice[0][i]!=v || matCornice[dim-1][i]!=v || matCornice[i][0]!=v || matCornice[i][dim-1]!=v ||)
                return false;
        }
        return true;
    }

    bool lastNumM(int r, int c, int mat[][]){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(mat[i][j]>mat[i][c-1])
                    return false;
            }
        }
        return true;
    }
