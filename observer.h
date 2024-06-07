#include <iostream>
#include <vector>

class ObserverInterface {
  public:
    virtual void update() const = 0;
};


class Observer final : public ObserverInterface {
  public:
    Observer() { std::cout << "Observer created" << std::endl; }
    void update() const override;
};

class Subject {
  private:
    std::vector<Observer> observers;

  public:
    Subject() { std::cout << "Subject created " << std::endl; }
    void add(Observer obs);
    void notify();
};
