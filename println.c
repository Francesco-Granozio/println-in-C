/*
 ============================================================================
 Name        : println.c
 Author      : Francesco Granozio
 Version     :
 Copyright   : 
 Description : Implementazione println
 ============================================================================
 */

#include <stdio.h>
#include <stdarg.h>

#include "println.h"

int println(const char *const format, ...){

    va_list ap;
    va_start(ap, format);

    int ret = vprintf(format, ap);
    va_end(ap);
    puts("");

    return ret;
}
