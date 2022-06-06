// main.c 
// main function of using hash table.

//#include <stdio.h>
#include <stdlib.h>
#include "table.h"

int getHash(int val)
{
  return val % 100;
}

int main(int argc, char* argv[])
{
  TABLE myTab;
  Person* np;
  Person* sp;
  Person* dp;

  tabInit(&myTab, getHash);
  
  np = makeData(20200001, "John", "Myundong");
  tabInsert(&myTab, getID(np), np);

  np = makeData(20200002, "Joe", "Hannam");
  tabInsert(&myTab, getID(np), np);

  np = makeData(20200003, "Binie", "Mapo");
  tabInsert(&myTab, getID(np), np);

  sp = tabSearch(&myTab, 20200001);
  if(sp != NULL)
    showPerInfo(sp);

  sp = tabSearch(&myTab, 20200002);
  if(sp != NULL)
    showPerInfo(sp);

  sp = tabSearch(&myTab, 20200003);
  if(sp != NULL)
    showPerInfo(sp);

  dp = tabDelete(&myTab, 20200001);
  if(dp != NULL)
    free(dp);
  
  dp = tabDelete(&myTab, 20200002);
  if(dp != NULL)
    free(dp);
  
  dp = tabDelete(&myTab, 20200003);
  if(dp != NULL)
    free(dp);

  return 0;
}
