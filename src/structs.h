/* mapping sizes for different fields. each field can have multiple members,
 * these values define the size of each value in bits */
#define VERSION_BITS 6 // max 63
#define COLORS_LENGTH_BITS 10 // max 1023
#define BOOLEAN_FIELDS_LENGTH_BITS 4 // max 15
#define NUMBER_FIELDS_LENGTH_BITS 4 // max 15
#define COLOR_FIELDS_LENGTH_BITS 4 // max 15
#define SET_FIELDS_LENGTH_BITS 6 // max 63
#define CM_LENGTH_BITS 5 // max 31
#define NUMBERS_BITS 6 // max 63
#define PONY_STRING_LENGTH 2048 // ponystring char limit

struct linkedlist {
  void* value;
  int next;
};

struct pony {
  int version;
  struct linkedlist colors; // ints converted to hex upon display
  struct linkedlist setFields; // will store char*s
  struct linkedlist colorFields; // will store 
  struct linkedlist numberFields; // will store ints
  struct linkedlist booleanFields; // will store boolean values
  int cm; // color management? possibly unrequired
};

void twentyone(void) {
  printf("you stupid\nno i'm not\nwhat's 9+10?\n21\n");
}
