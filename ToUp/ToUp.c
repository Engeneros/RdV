#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ToUp.h"

void ToUp(char* str)
{
	int pos;
	for (pos =0; pos < strlen(str); ++pos)
		str[pos] =toupper(str[pos]);
}
	

