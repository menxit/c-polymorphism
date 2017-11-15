# Polymorphism and OOP using C

```c
#include <printf.h>
#include "lib/Dog/Dog.h"
#include "lib/Cat/Cat.h"

int main() {

  /**
   * Creates an Animal object
   */
  Animal animal = _new_Animal(&animal);
  animal.printCall(&animal);

  /**
   * Casts animal from Animal to Dog
   */
  animal.setCall(&animal, "Wof, wof!");
  animal.printCall(&animal);

  Dog dog = _new_Dog(&animal);
  dog.printCall(&animal);

  dog.setCall(&dog, "Bau, bau!");
  dog.printCall(&dog);
  dog.printCall(&animal);

  /**
   * Creates a Cat object
   */
  Cat cat1 = _new_Cat(&cat1);
  cat1.printCall(&cat1);
  cat1.printCall(&cat1);
  cat1.setCall(&cat1, "Io so Romeo, er mejo der colosseo");
  cat1.printCall(&cat1);

  /**
   * Creates another Cat object
   */
  Cat cat2 = _new_Cat(&cat2);
  cat2.printCall(&cat2);
  cat2.printCall(&cat2);

  /**
   * Creates another Cat object
   */
  Cat cat3 = _new_Cat(&cat3);
  cat3.printCall(&cat3);
  cat3.printCall(&cat3);

  /**
   * Check that two animals are the same.
   */
  if(animal.equals(&animal, &animal)) {
    printf("Questi due animali sono uguali\n");
  }

  if(!cat1.equals(&cat1, &cat2)) {
    printf("Questi gatti sono diversi\n");
  }

  if(cat2.equals(&cat2, &cat3)) {
    printf("Questi gatti uguali\n");
  }

  if(!dog.equals(&dog, &cat2)) {
    printf("Questi due animali sono diversi\n");
  }

  dog.setCall(&dog, "bho");
  cat2.setCall(&cat2, "bho");

  if(dog.equals(&dog, &cat2)) {
    printf("Questi due animali ora sono uguali\n");
  }

  return 0;
}
```
