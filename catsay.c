/* catsay.c 
 *
 * The purpose of this program is to print a cat that says jokes to the terminal
 * 
 * You can also make the cat echo what you say by calling it with any arguments
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "jokes.h"
#include "cats.h"



int main(int argc, char* argv[]) {
	srand(time(NULL));

	if(argc > 1) { 
		//if we have any number of arguments, print them instead of a joke
		for(int i=1; i<argc; i++) {
			printf("%s ", argv[i]);
		}
	} else { 
		//no arguments, so grab a random joke and print it out to the terminal
		int r = rand() % NUM_JOKES;
		printf("%s", jokes[r]);
	}
	//now print the cat
	printf("\n");
	
	int catI = rand() % NUM_CATS;

	for(int i=0; i<catsInfo[catI].length; i++) {
		printf("\t%s", cats[i + catsInfo[catI].startAddr]);
	}

}
