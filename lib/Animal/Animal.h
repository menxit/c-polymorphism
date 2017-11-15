#ifndef HWC_ANIMAL_H
#define HWC_ANIMAL_H

#include "../Object/Object.h"

typedef struct Animal {
  struct Object* super;
  struct Animal* this;
  char* call;
  bool (*equals)(struct Animal* this, struct Animal* that);
  void (*printCall)(struct Animal* this);
  char* (*getCall)(struct Animal* this);
  void (*setCall)(struct Animal* this, char* call);

} Animal;

Animal _new_Animal(Animal* this);

#endif
