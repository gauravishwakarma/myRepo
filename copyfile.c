#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp, *cp;
	char ch;
	
	fp = fopen("Hii.txt","r");
	if(fp == NULL)
	{
		puts("Not found");
		fclose (fp);
		exit(1);
	}
	cp = fopen ( "c.txt", "w" ) ;
	if ( fp == NULL )
	{
		puts ( "Cannot open target file" ) ;
		fclose ( cp ) ;
		exit ( 2 ) ;
	}
	while ( 1 )
	{
	ch = fgetc ( fp ) ;
	if ( ch == EOF )
	break ;
	else
	fputc ( ch, cp ) ;
	}
	fclose ( fp ) ;
	fclose ( cp ) ;
	return 0;
}
