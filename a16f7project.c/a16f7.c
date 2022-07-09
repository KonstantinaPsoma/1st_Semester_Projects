#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    char str[100];
    char digits[400], temp[100];
    int i, j, sum, k;

    printf("Insert a string: ");
    gets(str);

    sum = 0;
    j = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            digits[j] = str[i];
            sum += (str[i] - '0');
            j+=1;
        }
    }

    digits[j] = '\0';

    if(digits[0] == '\0')
        printf("No digits in input.");

    else{

        for(i=0; digits[i] != '\0'; i++){
            temp[i] = digits[i];
        }

        temp[i] = '\0';
        k = 0;
        for(i=0; temp[k] != '\0'; i+=4){

            digits[i+1] = ' ';
            digits[i+2] = '+';
            digits[i+3] = ' ';
            k+=1;
        }

        digits[i-3] = '\0';

        j=0;

        for(i=0; digits[i] != '\0'; i+=4){
            digits[i] = temp[j];
            j++;
        }

        for(i=0; digits[i] != '\0'; i++)
            printf("%c", digits[i]);

        printf(" = %d", sum);

    }

    return 0;
}
