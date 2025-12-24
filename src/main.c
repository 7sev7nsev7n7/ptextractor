#include <stdio.h>
#include <stdlib.h>

// mapping sizes for different fields
#define VERSION_BITS 6 // max 63
#define COLORS_LENGTH_BITS 10 // max 1023
#define BOOLEAN_FIELDS_LENGTH_BITS 4 // max 15
#define NUMBER_FIELDS_LENGTH_BITS 4 // max 15
#define COLOR_FIELDS_LENGTH_BITS 4 // max 15
#define SET_FIELDS_LENGTH_BITS 6 // max 63
#define CM_LENGTH_BITS 5 // max 31
#define NUMBERS_BITS 6 // max 63
#define PONY_STRING_LENGTH 2048 // ponystring char limit

int main(int argc, char *argv[]) {
  // argument checking
  if (argc!=2) exit(1);

  // getting values from file
  FILE *fptr = fopen(argv[1], "r");
  char ponystring[PONY_STRING_LENGTH];
  fgets(ponystring, PONY_STRING_LENGTH, fptr); 
  fclose(fptr);

  // main processing [TODO]

  return 0;
}
