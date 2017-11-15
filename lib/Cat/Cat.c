#include "../Animal/Animal.h"
#include "Cat.h"

/**
 * Constructor of the Cat.
 *
 * @param this
 * @return
 */
Cat _new_Cat(Cat* this) {
  Animal super = _new_Animal(&super);
  Cat cat = { &super, this };
  cat.call = "Meow, meow";
  cat.equals = super.equals;
  cat.printCall = super.printCall;
  cat.getCall = super.getCall;
  cat.setCall = super.setCall;
  return cat;
}
