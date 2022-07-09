#include <stdio.h>
#include <string.h>

#define AMNT 23
#define HOURS 6

int main(){

    char Bands[AMNT][20] = {"Accept", "Anthrax", "Black Sabbath", "Dio", "Helloween",
                            "Iron Maiden", "Judas Priest", "Manowar", "Megadeth", "Metallica",
                            "Motley Crue", "Nazareth", "Ozzy", "Pantera", "Queensryche",
                            "Rammstein", "Raven", "Sabaton", "Saxon", "Scorpions", "Sepultura", "Slayer", "W.A.S.P."};

    double Arrival[AMNT] = {20.00, 22.00, 19.00, 18.00, 19.00, 19.00, 21.00, 20.00, 20.00, 19.00, 20.00,
                            22.00, 18.00, 18.00, 23.00, 22.00, 19.00, 21.00 , 20.00,22.00, 19.00, 18.00, 20.00};

    double Departure[AMNT] = {23.00, 24.00, 20.00, 22.00, 21.00, 20.00, 23.00, 22.00, 21.00, 21.00, 22.00,
                            23.00, 21.00, 22.00, 24.00, 24.00, 24.00, 22.00, 23.00, 24.00, 23.00, 20.00, 21.00};

    int counter[HOURS];
    double hour[HOURS];
    int index[HOURS];

    int i, amount, j, max, a;
    double k, hour_max, r;

    for(j = 0; j < HOURS; j++){
            counter[j] = 0;
    }
    for(i=0; i < AMNT; i++){
        printf("Band: %s \n", Bands[i]);
        printf("Time of the arrival of this band: %.2f\n", Arrival[i]);
        printf("Time of the departure of this band: %.2f\n", Departure[i]);
        k = 18.00;
        for(j = 0; j < HOURS; j++){
            for(r = Arrival[i]; r < Departure[i]; r++){
                if(r == k){
                counter[j] += 1;
                hour[j] = k;
                }
            }
            k += 1.00;
        }
    }
    max = counter[0];
    hour_max = hour[0];
    a = 0;
    index[a] = 0;
    for(i=1; i < HOURS; i++){
        if(counter[i] == max){
            a += 1;
            index[a] = i;
        }
        if(counter[i] > max){
            a = 0;
            max = counter[i];
            hour_max = hour[i];
            index[a] = i;
        }
    }
    if(a!=0){
         printf("These are the best hours and the bands. The bands are: %d. Pick an hour: \n", max);
         for(i=0; i<=a; i++){
            printf("%.2f \n", hour[index[i]]);
            for(j=0; j < AMNT; j++){
                if(hour[index[i]] >= Arrival[j] && hour[index[i]] < Departure[j]){
                    printf(" %s \n", Bands[j]);
                }
            }
         }

    }
    else{
        printf("The best time is %.2f. The bands are: %d\n", hour_max, counter[index[a]]);
        for(i=0; i < AMNT; i++){
            if(hour_max >= Arrival[i] && hour_max < Departure[i]){
                    printf(" %s \n", Bands[i]);
            }
        }
    }
    return 0;
}



