/*
 * main.c
 *
 *  Created on: Jun 15, 2015
 *      Author: dchiu
 * 
 * 	Editted on: January 23, 2023
 * 		Author: laron
 */
#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "stats.h"
#include "menu.h"

/**
 * @brief Main function
 *
 * @param argc Ignore
 * @param argv Ignore
 * @return int
 */
int main(int argc, char *argv[]) {
	// declare and initialize the histogram
	int histogram[ALPHABET_SIZE];
	int i;
	for(i = 0; i < ALPHABET_SIZE; i++){
		histogram[i] = 0;
	}
	// TODO: start by getting strings from users until # is input
	// TODO: after # is input, print menu options
	char input[MAX_INPUT_LEN];
	int most = 0; // keeps track of how tall the histogram is supposed to be.
	int vowel = 0;
	int consonant = 0;
	int menu = 0;
	while(menu != 4){
		scanf("%s", input);
		while(input[0] != '#'){
			int c = 0;
			while(input[c] != '\0'){
				if(input[c] == 'a' || input[c] == 'A'){
					histogram[0] = histogram[0] + 1;
					vowel++;
					if(histogram[0] > most){
						most = histogram[0];
					}
				} else if(input[c] == 'b' || input[c] == 'B'){
					histogram[1] = histogram[1] + 1;
					consonant++;
					if(histogram[1] > most){
						most = histogram[1];
					}
				} else if(input[c] == 'c' || input[c] == 'C'){
					histogram[2] = histogram[2] + 1;
					consonant++;
					if(histogram[2] > most){
						most = histogram[2];
					}
				} else if(input[c] == 'd' || input[c] == 'D'){
					histogram[3] = histogram[3] + 1;
					consonant++;
					if(histogram[3] > most){
						most = histogram[3];
					}
				} else if(input[c] == 'e' || input[c] == 'E'){
					histogram[4] = histogram[4] + 1;
					vowel++;
					if(histogram[4] > most){
						most = histogram[4];
					}
				} else if(input[c] == 'f' || input[c] == 'F'){
					histogram[5] = histogram[5] + 1;
					consonant++;
					if(histogram[5] > most){
						most = histogram[5];
					}
				} else if(input[c] == 'g' || input[c] == 'G'){
					histogram[6] = histogram[6] + 1;
					consonant++;
					if(histogram[6] > most){
						most = histogram[6];
					}
				} else if(input[c] == 'h' || input[c] == 'H'){
					histogram[7] = histogram[7] + 1;
					consonant++;
					if(histogram[7] > most){
						most = histogram[7];
					}
				} else if(input[c] == 'i' || input[c] == 'I'){
					histogram[8] = histogram[8] + 1;
					vowel++;
					if(histogram[8] > most){
						most = histogram[8];
					}
				} else if(input[c] == 'j' || input[c] == 'J'){
					histogram[9] = histogram[9] + 1;
					consonant++;
					if(histogram[9] > most){
						most = histogram[9];
					}
				} else if(input[c] == 'k' || input[c] == 'K'){
					histogram[10] = histogram[10] + 1;
					consonant++;
					if(histogram[10] > most){
						most = histogram[10];
					}
				}  else if(input[c] == 'l' || input[c] == 'L'){
					histogram[11] = histogram[11] + 1;
					consonant++;
					if(histogram[11] > most){
						most = histogram[11];
					}
				} else if(input[c] == 'm' || input[c] == 'M'){
					histogram[12] = histogram[12] + 1;
					consonant++;
					if(histogram[12] > most){
						most = histogram[12];
					}
				} else if(input[c] == 'n' || input[c] == 'N'){
					histogram[13] = histogram[13] + 1;
					consonant++;
					if(histogram[13] > most){
						most = histogram[13];
					}
				} else if(input[c] == 'o' || input[c] == 'O'){
					histogram[14] = histogram[14] + 1;
					vowel++;
					if(histogram[14] > most){
						most = histogram[14];
					}
				} else if(input[c] == 'p' || input[c] == 'P'){
					histogram[15] = histogram[15] + 1;
					consonant++;
					if(histogram[15] > most){
						most = histogram[15];
					}
				} else if(input[c] == 'q' || input[c] == 'Q'){
					histogram[16] = histogram[16] + 1;
					consonant++;
					if(histogram[16] > most){
						most = histogram[16];
					}
				} else if(input[c] == 'r' || input[c] == 'R'){
					histogram[17] = histogram[17] + 1;
					consonant++;
					if(histogram[17] > most){
						most = histogram[17];
					}
				} else if(input[c] == 's' || input[c] == 'S'){
					histogram[18] = histogram[18] + 1;
					consonant++;
					if(histogram[18] > most){
						most = histogram[18];
					}
				} else if(input[c] == 't' || input[c] == 'T'){
					histogram[19] = histogram[19] + 1;
					consonant++;
					if(histogram[19] > most){
						most = histogram[19];
					}
				} else if(input[c] == 'u' || input[c] == 'U'){
					histogram[20] = histogram[20] + 1;
					vowel++;
					if(histogram[20] > most){
						most = histogram[20];
					}
				} else if(input[c] == 'v' || input[c] == 'V'){
					histogram[21] = histogram[21] + 1;
					consonant++;
					if(histogram[21] > most){
						most = histogram[21];
					}
				} else if(input[c] == 'w' || input[c] == 'W'){
					histogram[22] = histogram[22] + 1;
					consonant++;
					if(histogram[22] > most){
						most = histogram[22];
					}
				} else if(input[c] == 'x' || input[c] == 'X'){
					histogram[23] = histogram[23] + 1;
					consonant++;
					if(histogram[23] > most){
						most = histogram[23];
					}
				} else if(input[c] == 'y' || input[c] == 'Y'){
					histogram[24] = histogram[24] + 1;
					consonant++;
					if(histogram[24] > most){
						most = histogram[24];
					}
				} else if(input[c] == 'z' || input[c] == 'Z'){
					histogram[25] = histogram[25] + 1;
					consonant++;
					if(histogram[25] > most){
						most = histogram[25];
					}
				}
			}
			scanf("%s", input);
		}
		menu = getMenuOption();
		if(menu == 1){
			vowAndCon(vowel, consonant);
		} else if(menu == 2){
			displayHistogram(most, histogram);
		}
	}
	printf("Exiting...\n");
	return 0;
}
