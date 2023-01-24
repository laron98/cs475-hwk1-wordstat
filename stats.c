/*
 * histo.c
    Editted on: January 23, 2023
 * 		Author: laron
 */

#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "stats.h"

// TODO: function definitions for dealing with histogram below
displayHistogram(int most, int histogram[]){
    int c;
    int r; 
    for(r = most; r > 0; r--){
        for(c = 0; c < MAX_INPUT_LEN; c++){
            if(histogram[c] >= c){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("a b c d e f g h i j k l m n o p q r s t u v w x y z");
    for(c = 0; c < MAX_INPUT_LEN; c++){
        printf("%d ", histogram[c]);
    }
    printf("\n");
}

vowAndCon(int vowels, int consonant){
    int total = consonant + vowels;
    float perVow = vowels / total;
    float perCon = consonant / total;
    printf("Vowels = %d (%0.3f%%), Consonants = %d (%0.3f%%), Total= %d\n", vowels, perVow, consonant, perCon, total);
}
