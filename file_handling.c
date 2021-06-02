# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
	char dataToBeWritten[50] = "Content for the file is this";
	filePointer = fopen("ossp_q2.c", "w") ;
	if ( filePointer == NULL )
	{
		printf( "File failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;
		if ( strlen ( dataToBeWritten ) > 0 )
		{

			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}

		fclose(filePointer) ;

		printf("Data successfully written in file ossp_q2.c\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
