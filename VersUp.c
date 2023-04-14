#include <stdio.h>
#include <stdlib.h>
#include <ReadV.h>
#include <ToUp.h>

int main (void)
{
	int ret;
	char* str = (char*) malloc (STR_SIZE * sizeof(char));
	if(str == 0)
	{
		fprintf(stderr, "mallocErr\n");
		ret = 1;
	}
	else if (ReadV (str) != 0)
	{
		fprintf(stderr, "oops! ReadV fail");
		ret = 2;
	}
	else
	{
		printf ("%s\n", str);
		ToUp(str);
		printf("%s\n", str);
		free(str);
		ret = 0;
	}
	return 0;	
}