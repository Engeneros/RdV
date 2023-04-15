#include <stdio.h>
#include <string.h>
#include "ReadV.h"

int ReadV(char* str)
{
    int pos;
    int ret;
    char symb = 'x';
    FILE * fp = fopen("/proc/version", "r");
    if(!fp)
    {
	fprintf(stderr, "oops, cannot to open\n");
	ret = 1;
    }
    else
    {
	for (pos = 0; (pos < STR_SZ) && (symb != EOF); ++pos)
	str[pos] = symb = fgetc(fp);
	str[pos] = '\0';
	fclose(fp);
	ret = 0;
    }
    return ret;
}