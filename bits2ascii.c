
/* Filter a stream of characters of bits into a stream of '1' and '0' */

#include <stdio.h>

static const unsigned int mask = 1 << 7;

int main() {
	unsigned int remainingInput;
	while ((remainingInput = getchar()) != EOF) {
		int remDigits = 8;
		while (remDigits > 0) {
			unsigned char currentLetter = (remainingInput & mask) ? '1' : '0';
			printf("%c", currentLetter);
			remainingInput = remainingInput << 1;
			--remDigits;
		}
	}
	return 0;
}

