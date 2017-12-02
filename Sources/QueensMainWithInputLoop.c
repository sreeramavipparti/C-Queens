/*
 * Program to place n-Queens so that no one queen captures any other
 * Currently dealing with 2^n boards.
 * Using 1-based indices for a change ;).
 *
 * The program prompts for input.
 * It expects input greater or equal to MIN_BOARD_SIZE.
 * Values less than MIN_BOARD_SIZE will terminate the program.
 * As far as I know, this program cannot be piped to other programs.
 **/
#include <stdio.h>
#include "Queens.h"
#include "PositiveIntNature.h"

void main(int argc, char *argv[]) {
  posint size = (posint) MIN_BOARD_SIZE;

  printf("\nEnter size of board (Current size: %u): ", size);
  scanf("%u", &size);

  while(size >= MIN_BOARD_SIZE) {
    switch(intNature(size)) {
      case ODD:
        odd(size);
        break;
      case EVEN:
        even(size);
        break;
      case ODD_DIV_BY_3:
        oddDivBy3(size);
        break;
      case EVENLY_EVEN:
        evenlyEven(size);
        break;
      case POWER_OF_2:
        powersOf2(size);
        break;
    }
    printf("\nEnter size of board (Current size: %u): ",size);
    scanf("%u", &size);   
  }
} /* void main(int argc, char *argv[]) */