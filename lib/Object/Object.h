#ifndef HWC_OBJECT_H
#define HWC_OBJECT_H

#include <stdbool.h>

typedef struct Object {
    struct Object* this;
    bool (*equals)(struct Object* this, struct Object* that);
} Object;

Object _new_Object(Object* this);

#endif
