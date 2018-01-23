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

const char* jokes[] = {
	"What do you call a cat winning an award? A cat-has-trophy!",
	"What do you call a pile of kittens? A meowtain!",
	"Why don't cats like online shopping? They prefer catalogues!",
	"What do you call a cat crossed with a dark horse? A Kitty Perry!",
	"What do you call a cat in a station wagon? A car-pet!",
	"What do you call a criminal cat? A purrpatrator!",
	"What did the cat say when he lost his toys? You gotta be kitten me!",
	"What is a cat's favourite colour? Purrple!",
	"What is the French cats favourite food? Chocolate mousse!",
	"What do you call cats that can get whatever they want? Purrsuasive!",
	"What is a cat's favourite dance move? The purr-colator!",
	"Who is the most powerful cat in China? Chairman Miaow!",
	"What is a cat's favourite vegetable? Aspurragus!",
	"Did you hear about the cat that thought it was a dog? It was purr-plexed!",
	"What is a cat's favourite musical category? Purrcussian!",
	"What do you call a cat that keeps licking itself? Purrverted!"
};

#define NUM_JOKES (sizeof (jokes) / sizeof (const char*))

int main(int argc, char* argv[]) {
	if(argc > 1) { 
		//if we have any number of arguments, print them instead of a joke
		for(int i=1; i<argc; i++) {
			printf("%s ", argv[i]);
		}
	} else { 
		//no arguments, so grab a random joke and print it out to the terminal
		srand(time(NULL));
		int r = rand() % NUM_JOKES;
		printf("%s", jokes[r]);
	}
	//now print the cat
	printf("\n");
	printf("                     _  \n");
	printf("                    / ) \n");
	printf("                   ( (  \n");
	printf("     A.-.A  .-\"\"-.  ) ) \n");
	printf("    / , , \\/      \\/ /  \n");
	printf("   =\\  t  ;=    /   /   \n");
	printf("     `--,'  .\"\"|   /    \n");
	printf("         || |  \\\\ \\     \n");
	printf("        ((,_|  ((,_\\    \n");

}
