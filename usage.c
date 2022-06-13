#include <stdio.h>
#include <stdbool.h>

#include "println.h"

/*
* L'uso della println è IDENTICO a quello della printf, solo che aggiunge automaticamente \n alla fine
*/

int main(void){

    int a = 10;
    int *b = &a;
    char c = 'p';
    double d = 2.0f;
    char *e = "Prova";
    float f = 1.0f;
    bool g = true;
    int h[10] = {0};
    char *i[3] = {"aa", "bb", "cc"};
    
    println("A: %d", a);
    println("B: %p", b);
    println("C: %c", c);
    println("D: %lf", d);
    println("E modo 1: %s", e);
    println(e);
    println("F: %f", f);
    println("G: %d", g);
    println("H: %d", *(h + 5));
    println("I: %s", i[0]);

    return 0;
}
