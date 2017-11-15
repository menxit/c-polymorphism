#include <printf.h>
#include "../Animal/Animal.h"
#include "Dog.h"

/**
 * Print different.
 *
 * @param dog
 */
static void printCall(Dog* dog) {
  printf("### %s ###\n\n", dog->getCall(dog));
}

/**
 * Constructor of the Dog.
 *
 * @param this
 * @return
 */
Dog _new_Dog(Dog* this) {
  Animal super = _new_Animal(&super);
  Dog dog = { &super, this };
  dog.call = "Bau, bau!";
  dog.equals = super.equals;
  dog.printCall = printCall;
  dog.getCall = super.getCall;
  dog.setCall = super.setCall;
  return dog;
}
