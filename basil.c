#include "basil.h"

int main( void )
{
	char* fileName = malloc( sizeof( char ) * FILE_NAME_SIZE );
	fileName =	"code.bas";
	char *source;

	long int size = readSourceFromFile( fileName, &source );

	int i, lineNumber=1;
	for( i = 0; i < size; ++i )
	{
		switch( source[i] )
		{
			case NEW_LINE: 
				lineNumber++;
				break;
			case PLUS:
				break;
			default:
				printError( source[i], lineNumber );
		}
	}

	printf( "File Size = %ld\n", size );

	return 0;
}

long int readSourceFromFile( char* fileName, char** source )
{
	FILE *fp;

	fp = fopen( fileName, "r");

	if( !fp )
		return 1;

	fseek( fp, 0L, SEEK_END );
	long int size = ftell( fp );
	rewind( fp );

	*source = malloc( sizeof( char ) * size );
	int i = 0;
	while( ( (*source)[i++] = fgetc( fp ) ) != EOF );
	return size;
}
