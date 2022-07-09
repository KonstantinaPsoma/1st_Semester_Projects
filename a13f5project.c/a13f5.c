#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

void populate_data(int R, int C, int A[][C]);
void print_array(int R, int C, int A[R][C]);
void change_array(int R, int C, int A[R][C]);

int main(){
    int R, C;
    int A[10][10];

    printf("Dwse ton arithmo twn grammwn: ");
    R = GetInteger();
    printf("Dwse ton arithmo twn sthlwn: ");
    C = GetInteger();
    populate_data(R, C, A);
    printf("ARXIKOS PINAKAS\n");
    print_array(R, C, A);
    printf("ALLAGMENOS PINAKAS\n");
    change_array(R, C, A);
    print_array(R, C, A);
}

void populate_data(int R, int C, int A[][C]){
      int i, j;

      for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            A[i][j] = (rand() % 100);
        }
      }
 }

void print_array(int R, int C, int A[R][C]){
     int i, j;

     for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
      }
}

void change_array(int R, int C, int A[R][C]){
     int i, j;
     int index[R];
     int max[R];

     for(i=0; i<R; i++){
         max[i] = A[i][0];
         index[i] = 0;
         for(j=1; j<C; j++){
            if(A[i][j]>max[i]){
                max[i] = A[i][j];
                index[i] = j;
            }
         }
     }
     for(i=0; i<R; i++){
        for(j=0; j<index[i]; j++){
            A[i][j] = max[i];
        }
     }
}
