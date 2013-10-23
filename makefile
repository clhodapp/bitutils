
all: ascii2bits bits2ascii
clean:
	${RM} ascii2bits bits2ascii
ascii2bits: ascii2bits.c
bits2ascii: bits2ascii.c

.Phony: all rm

