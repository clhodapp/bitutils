
/* Filter a stream of characters (assumed to be  '1' and '0') into a stream of bits */

#include <stdio.h>

int main() {
	unsigned int currentChar;
	unsigned char shiftCount = 0;
	unsigned char accum = 0;
	while ((currentChar = getchar()) != EOF) {

		accum = accum << 1;
		if (currentChar == '1') accum++;
		++shiftCount;

		if (shiftCount == 8) {
			printf("%c", accum);
			shiftCount = 0;
			accum = 0;
		}
	}
	if (shiftCount != 0) {
		fprintf(stderr, "Error: Stream doesn't align to bytes. Padding with zeroes\n");
		fprintf(stderr, "%u\n", shiftCount);
		printf("%c", accum << shiftCount);
	}
	return 0;
}
