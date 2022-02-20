#ifndef HelperFunctions_H_
#define HelperFunctions_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mynode {
	char name[20];
	char gender[6];
	int age;
};

struct mynode passengers[20];
 
int no_of_passengers;
void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);


#endif

