#include "singleton.h"
#include <iostream>

Singleton* Singleton::singleton = nullptr;

Singleton* Singleton::getObject() {
  if (singleton == nullptr) {
    std::cout << "Singleton created" << std::endl;
   singleton = new Singleton();
    return singleton;
  } else {
    std::cout << "Singleton is already created" << std::endl;
    return singleton;
  }
}
