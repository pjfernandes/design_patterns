#include <iostream>
#include "singleton.h"
#include "observer.h"

int main() {

  Singleton* singleton = Singleton::getObject();
  Singleton* singleton2 = Singleton::getObject();

  Subject* subject = new Subject();
  subject->add(Observer());
  subject->add(Observer());
  subject->add(Observer());
  subject->add(Observer());
  subject->add(Observer());
  subject->notify();

  return 0;
}
