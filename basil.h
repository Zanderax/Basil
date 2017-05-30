#include <stdio.h>
#include <stdlib.h>

#include "errorHandling.h"

#define FILE_NAME_SIZE 9

typedef enum SYMBOLS { 
	PLUS = '+',
	NEW_LINE = 10,
} SYMBOLS;

long int readSourceFromFile( char* fileName, char** source );
