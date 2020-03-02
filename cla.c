#include <stdio.h>
#include <conio.h>

main(int argc , char* argv[])
{
 FILE * fp;
 int i;
 char word[15];
 
 
fp = fopen(argv[1] , "w"); 
printf("number of command line arguments = %d", argc);
for(i=2; i<argc; i++){
	fprintf(fp , "%s", argv[i]);
}
fclose(fp);
}
printf("contents of the %s file", argv[1]);
fp = fopen(argv[1], "r");
for(i = 2; i < argc; i++){
	fscanf(fp , "%s", word);
	printf("%s", word);
}
for( i = 0; i > argc; i++){
	printf("%s", argv);
}
