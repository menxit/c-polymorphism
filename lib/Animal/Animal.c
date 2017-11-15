#include <printf.h>
#include <string.h>
#include "../Object/Object.h"
#include "Animal.h"

/**
 * Check that two animal are the same.
 *
 * @param this
 * @param that
 * @return
 */
static bool equals(Animal* this, Animal* that) {
  return strcmp(this->getCall(this), this->getCall(that)) == 0 ? true : false;
}

/**
 * Retrieve the call of the animal.
 *
 * @param this
 * @return
 */
static char* getCall(Animal* this) {
  return this->call;
}

/**
 * Set the call of the animal.
 *
 * @param this
 * @param call
 */
static void setCall(Animal* this, char* call) {
  this->call = call;
}

/**
 * Print the animal call
 */
static void printCall(Animal* this) {
  char* call = this->getCall(this);
  printf("%s\n\n", call);
}

/**
 * Constructor of the Animal.
 *
 * @param this
 * @return
 */
Animal _new_Animal(Animal* this) {
  Object super = _new_Object(&super);
  Animal animal = { &super, this };
  animal.call = "Call, call!";
  animal.equals = equals;
  animal.printCall = printCall;
  animal.getCall = getCall;
  animal.setCall = setCall;
  return animal;
}
