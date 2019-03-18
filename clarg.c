#include <stdio.h>
int  main(int argc,char *argv[]) 
{
    if (argc>2)
    {
    for (int i=2;i<=argc;i++)
    printf("%s",argv[i]);
    }
    if (argc==2)
    printf("%s",argv[2]);
    }


Adding new line to cfile .
