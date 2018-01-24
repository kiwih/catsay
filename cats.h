#ifndef _CATS_H
#define _CATS_H

#define NUM_CATS 4

struct catInfo {
	int startAddr;
	int length;
};

extern const char* cats[];

extern const struct catInfo catsInfo[NUM_CATS];

#endif