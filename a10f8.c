#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"

typedef struct{
    char name[60];
    int startm;
    int duration;
}projectT;

void ReadWorkpackages(int WP, projectT project[]);
int FindFirstWp(int WP, projectT project[]);
int FindMakespan(int WP, projectT project[]);

int main(){
    projectT project[100];
    int WP, index;
    int total;

    printf("Total work packages: ");
    WP = GetInteger();
    ReadWorkpackages(WP, project);
    index = FindFirstWp(WP, project);
    printf("FIRST WP: %s start: %d duration: %d\n", project[index].name, project[index].startm, project[index].duration);
    total = FindMakespan(WP, project);
    printf("Total duration = %d", total);
}

void ReadWorkpackages(int WP, projectT project[]){
    int i;

    for(i=0; i<WP; i++){
        printf("WP Name:");
        gets(project[i].name);
        printf("WP Start Month:");
        project[i].startm = GetInteger();
        printf("WP Duration:");
        project[i].duration = GetInteger();
    }
 }

int FindFirstWp(int WP, projectT project[]){
    int i, min, index;

    min = project[0].startm;
    index = 0;
    for(i=1; i<WP; i++){
        if(project[i].startm < min){
            min = project[i].startm;
            index = i;
        }
    }
    return index;
}

int FindMakespan(int WP, projectT project[]){
    int i, max;
    int sum[100];

    for(i=0; i<WP; i++){
        sum[i]= project[i].startm + project[i].duration;
    }
    max = sum[0];
    for(i=1; i<WP; i++){
        if(sum[i] > max){
            max = sum[i];
        }
    }
    return max;
}
