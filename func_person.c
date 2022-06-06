// func_person.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int getID(Person* pp)
{
  return pp->idNum;
}

void showPerInfo(Person* pp)
{
  printf("ID number : %d\n", pp->idNum);
  printf("Name : %s\n", pp->name);
  printf("Address : %s\n", pp->add);
}

Person* makeData(int idNum, char* name, char* add)
{
  Person* newP = (Person*)malloc(sizeof(Person));
  newP->idNum = idNum;
  /* this is string, so can not use bellow syntax.
  newP->name = name;
  newP->add = add;
  */

  strcpy(newP->name, name);
  strcpy(newP->add, add);
  return newP;
}
