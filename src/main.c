#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

int main(int argc, char *argv[]) {
  // argument checking
  if (argc<2) {
    printf("no files specified\n");
  } 
  FILE *fptr = fopen(argv[1], "r");
  if (!fptr) {
    printf("file not found\n");
    return 1;
  }
  

  // getting values from file
  char ponystring[PONY_STRING_LENGTH];
  fgets(ponystring, PONY_STRING_LENGTH, fptr); 
  fclose(fptr);
  printf(ponystring);

  // main processing [TODO]

  return 0;
}
