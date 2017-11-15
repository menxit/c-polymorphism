#ifndef HWC_DOG_H
#define HWC_DOG_H

#include "../Animal/Animal.h"

/**
 * The order of the properties must be the same of Animal.
 */
typedef struct Dog {

  struct Animal* super;

  struct Dog* this;
  char* call;
  bool (*equals)(struct Dog* this, struct Dog* that);
  void (*printCall)(struct Dog* this);
  char* (*getCall)(struct Dog* this);
  void (*setCall)(struct Dog* this, char* call);

} Dog;

Dog _new_Dog(Dog* this);

#endif
