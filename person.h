// person.h 

#ifndef __PERSON_H__
#define __PERSON_H__

#define STR_LEN 50

typedef struct _person
{
  int idNum;
  char name[STR_LEN];
  char add[STR_LEN];
} Person;

int getID(Person* pp);
void showPerInfo(Person* pp);
Person* makeData(int idNum, char* name, char* add);

#endif
