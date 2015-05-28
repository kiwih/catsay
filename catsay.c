#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
	int i;

	if(argc > 1) {
		for(i=1; i<argc; i++) {
			printf("%s ", argv[i]);
		}
	} else {
		srand(time(NULL));
		int r = rand() % 16;
		switch(r) {
		case 0:
			printf("What do you call a cat winning an award? A cat-has-trophy!");
			break;
		case 1:
			printf("What do you call a pile of kittens? A meowtain!");
			break;
		case 2:
			printf("Why don't cats like online shopping? They prefer catalogues!");
			break;
		case 3:
			printf("What do you call a cat crossed with a dark horse? A Kitty Perry!");
			break;
		case 4:
			printf("What do you call a cat in a station wagon? A car-pet!");
			break;
		case 5:
			printf("What do you call a criminal cat? A purrpatrator!");
			break;
		case 6:
			printf("What did the cat say when he lost his toys? You gotta be kitten me!");
			break;
		case 7:
			printf("What is a cat's favourite colour? Purrple!");
			break;
		case 8:
			printf("What is the French cats favourite food? Chocolate mousse!");
			break;
		case 9:
			printf("What do you call cats that can get whatever they want? Purrsuasive!");
			break;
		case 10:
			printf("What is a cat's favourite dance move? The purr-colator!");
			break;
		case 11:
			printf("Who is the most powerful cat in China? Chairman Miaow!");
			break;
		case 12:
			printf("What is a cat's favourite vegetable? Aspurragus!");
			break;
		case 13:
			printf("Did you hear about the cat that thought it was a dog? It was purr-plexed!");
			break;
		case 14:
			printf("What is a cat's favourite musical category? Purrcussian!");
			break;
		case 15:
			printf("What do you call a cat that keeps licking itself? Purrverted!");
			break;
		}
	}
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
