#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>

class Airplane {
  private:
    std::string model;
    int altitude;
    int minAltitude;
    int maxAltitude;
  protected:
  public:
    Airplane();
    Airplane(std::string);
    void display();
    void setAltitude();
    bool crash(Airplane);
};

#endif
