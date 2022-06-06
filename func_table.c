// func_table.c

#include <stdio.h>
#include "table.h"

void tabInit(TABLE* pt, Func_hash action)
{
  int i;

  for(i=0; i<TAB_LEN; i++)
  {
    pt->Table[i].status = EMPTY;
  }

  pt->f_hash = action;
}

void tabInsert(TABLE* pt, Key k, Value v)
{
  int hv = pt->f_hash(k);
  
  pt->Table[hv].key = k;
  pt->Table[hv].val = v;
  pt->Table[hv].status = INUSE;
}

Value tabDelete(TABLE* pt, Key k)
{
  int hv = pt->f_hash(k);

  if(pt->Table[hv].status != INUSE)
  {
    return NULL; // error
  }
  else
  {
    pt->Table[hv].status = DELETED;
    return pt->Table[hv].val;
  }
}

Value tabSearch(TABLE* pt, Key k)
{
  int hv = pt->f_hash(k);

  if(pt->Table[hv].status != INUSE)
  {
    return NULL; //error
  }
  else
  {
    return pt->Table[hv].val;
  }
}
