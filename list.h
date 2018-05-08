#ifndef TBA_HEADER_H_INCLUDED
#define TBA_HEADER_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "list.h"

using namespace std;
void proposisi (char *x, int &i, bool &status);
void And (char* x, int &i, bool &status);
void Or (char *x, int &i, bool &status);
void Xor (char *x, int &i, bool &status);
void If (char *x, int &i, bool &status);
void Not (char *x, int &i, bool &status);
void kurungBuka (char *x, int &i, bool &status);
void kurungTutup (char *x, int &i, bool &status);
void Then (char *x, int &i, bool &status);
void printInfo();

void push (int x);
bool pop (int x);
bool ValidasiLexic();

#endif // TBA_HEADER_H_INCLUDED
