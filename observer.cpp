#include "observer.h"

void Subject::add(Observer obs)
{
  std::cout << "Observer added" << std::endl;
  Subject::observers.push_back(obs);
}

void Subject::notify()
{
  for(Observer obs : observers) {
    obs.update();
  }
}

void Observer::update() const
{
  std::cout << "Observer updated" << std::endl;
}
