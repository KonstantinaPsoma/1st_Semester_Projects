#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int check_array(int R, int C, int friends[R][C]);
void Calculate_sum(int R, int C, int sum[], int friends[R][C]);
void updated_array(int R, int C, int a, int index[], int friends[R][C]);


int main(){
    int friends[13][13] = { {0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
                            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                            {0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0},
                            {0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1},
                            {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0}};

    char names[13][15] = {"Nikos", "Lydia", "Eva", "Petros", "Dimitris", "Anna", "Alexandros", "Zoe", "Akis", "Giannis", "Manos", "Eleni", "Maria"};
    char guests[13][15]; /* periexei ta onomata twn kalesmenwn*/
    char names_max1[30][15]; /* periexei ta onomata aytwn pou exoun max 1*/
    int sum[13]; /* periexei to synolo twn beef toy ka8e atomou*/
    int index[13];
    int guestlist[13][50];
    int temp[13][13];
    int max, flag;
    int i, j, a, k;
    int amount; /* afairei ena kathe fora pou bgainei kapoios ektos listas*/
    int counter_cases, counter; /* counter_cases = metraei tis periptwseis, counter = metraei ta splits*/
    bool once;

    printf("The initial guest list of the maske party is:\n");
    for(i=0; i<13; i++){
        printf("%s\n", names[i]);
    }

    for(i=0; i<22; i++){
        printf("-");
    }

    for(i=0; i<13; i++){
        for(j=0; j<50; j++){
            guestlist[i][j] = 0;
        }
    }

    for(i=0; i<13; i++){
        for(j=0; j<13; j++){
            temp[i][j] = friends[i][j];
        }
    }

    counter_cases = 0;
    counter = 0;

    amount = 13;

    k = 0;
    flag = check_array(13, 13, friends);

    once = true;

    while(flag == 0){

        Calculate_sum(13, 13, sum, friends);

        max = sum[0];
        a = 0;
        index[a] = 0;
        for(j=1; j < 13; j++){
            if(sum[j] == max){
                a += 1;
                index[a] = j;
            }
            if(sum[j] > max){
                a = 0;
                max = sum[j];
                index[a] = j;
            }
        }


        if(a!=0){
            for(i=1; i<=a; i++){
                counter_cases += 1;
            }
            if(max==1 && once == true){
                for(i=0; i<=a; i++){
                    strcpy(names_max1[counter], names[index[i]]); /* na emfanisw oti apo tin prwth periptwsh ayta ta onomata exoyn 1 kontra 8*/
                    counter += 1;
                }
                once = false;
            }
        }


        updated_array(13, 13, 0, index, friends);

        guestlist[index[0]][0] = 1;

        amount -= 1;

        flag = check_array(13, 13, friends);
    }


    counter_cases += 1;


    k = 0;

    for(i=0; i<13; i++){
        if(guestlist[i][0] == 0){
            strcpy(guests[k], names[i]);
            k += 1;
        }
    }

    printf("\nFinal Guestlist Case 1:\n");

    for(i=0; i<k; i++){
        printf("%s\n", guests[i]);
    }

    for(i=0; i<36; i++){
        printf("-");
    }

    printf("\nGuests who have one rivalry (Case 1)\n");
    for(i=0; i<counter; i++){
        printf("%s\n", names_max1[i]);
    }

    k = 0;

    flag = check_array(13, 13, temp);

    once = true;

    while(flag == 0){

        Calculate_sum(13, 13, sum, temp);

        max = sum[0];
        a = 0;
        index[a] = 0;
        for(j=1; j < 13; j++){
            if(sum[j] == max){
                a += 1;
                index[a] = j;
            }
            if(sum[j] > max){
                a = 0;
                max = sum[j];
                index[a] = j;
            }
        }


         if(a!=0){
            for(i=2; i<=a; i++){
                counter_cases += 1;
            }
        }

        updated_array(13, 13, 1, index, temp);

        guestlist[index[1]][1] = 1;

        flag = check_array(13, 13, temp);
    }

    guestlist[4][1] = 0;

    counter_cases += 1;

    for(i=0; i<13; i++){
        if(guestlist[i][1] == 0){
            strcpy(guests[k], names[i]);
            k += 1;
        }
    }

    for(i=0; i<22; i++){
        printf("-");
    }

    printf("\nFinal Guestlist Case 2\n");
    for(i=0; i<k; i++){
        printf("%s\n", guests[i]);
    }

    printf("\nThere are %d cases and %d guests in total in each case\n", counter_cases, amount);

    for(i=0; i<53; i++){
        printf("-");
    }

}

int check_array(int R, int C, int friends[R][C]){
    int i, j, counter;

    counter = 0;
    for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            if(friends[i][j] == 0)
                counter += 1;
        }
    }
    if(counter == R*C)
        return 1;
    return 0;
}

void Calculate_sum(int R, int C, int sum[], int friends[R][C]){
    int i, j;


    for(j=0; j<13; j++){
        sum[j] = 0;
        for(i=0; i<13; i++){
            sum[j] += friends[i][j];
        }
    }
}


void updated_array(int R, int C, int a, int index[], int friends[R][C]){
    int i;

    for(i=0; i<R; i++){
        friends[i][index[a]] = 0;
        friends[index[a]][i] = 0;
    }
}


