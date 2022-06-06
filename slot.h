// slot.h

#ifndef __SLOT_H__
#define __SLOT_H__

#include "person.h"

typedef int Key;
typedef Person* Value;

enum slotSTAT
{
  EMPTY, DELETED, INUSE
};

typedef struct _slot
{
  Key key;
  Value val;
  enum slotSTAT status;
} SLOT;

#endif
