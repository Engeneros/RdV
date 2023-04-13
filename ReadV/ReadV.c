#include <stdio.h>
#include <string.h>
#include "ReadV.h>

int ReadV(char* str)
{
    int pos;
    FILE* fp = fopen("/proc/version", r);
    if(!fp)
    {
	printf(stderr, "oops, cannot to open\n");
	
    }