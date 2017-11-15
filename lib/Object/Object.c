#include <printf.h>
#include "Object.h"

/**
 * Check that two object are the same.
 *
 * @param this
 * @param that
 * @return
 */
bool equals(Object* this, Object* that) {
  return this == that;
}

/**
 * Constructor of the object.
 *
 * @param this
 * @return
 */
Object _new_Object(Object* this) {
  struct Object object = { this };
  object.equals = equals;
  return object;
}
