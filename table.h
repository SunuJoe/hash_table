// table.h

#ifndef __TABLE_H__
#define __TABLE_H__

#include "slot.h"

#define TAB_LEN 100

typedef int (*Func_hash)(int val);

typedef struct _table
{
  SLOT Table[TAB_LEN];
  Func_hash f_hash;
} TABLE;

void tabInit(TABLE* pt, Func_hash action);
void tabInsert(TABLE* pt, Key k, Value v);
Value tabDelete(TABLE* pt, Key k);
Value tabSearch(TABLE* pt, Key k);

#endif
