#include <stdio.h>

#include "errorHandling.h"

void printError( char errorChar, int lineNumber )
{
	if( errorChar >= 32 )
	{
		printf("Invalid Symbol at line %d. \"%c\"\n", lineNumber, errorChar);
		return;
	}
	
	printf("Invalid Symbol at line %d. ASCII=\"%d\"\n", lineNumber, errorChar);
}
