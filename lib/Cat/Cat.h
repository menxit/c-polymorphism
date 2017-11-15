#ifndef HWC_CAT_H
#define HWC_CAT_H

#include "../Animal/Animal.h"

/**
 * The order of the properties must be the same of Animal.
 */
typedef struct Cat {

  struct Animal* super;

  struct Cat* this;
  char* call;
  bool (*equals)(struct Cat* this, struct Cat* that);
  void (*printCall)(struct Cat* this);
  char* (*getCall)(struct Cat* this);
  void (*setCall)(struct Cat* this, char* call);

} Cat;

Cat _new_Cat(Cat* this);

#endif
