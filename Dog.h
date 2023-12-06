#include <iostream>
#include <string>
#include "Bone.h"


class Dog {
  public:
    Dog(std::string name);
    ~Dog();

    void run(int howFar, int howFast);
    void bark(int numTimes);
    void wag(int numTimes, int howFast);
    void setWeight(double weight);
    void setNumberOfLegs(int numLegs);
    void setHappiness(bool isHappy);
    void addBone();

  private:
    int numberOfLegs;
    std::string eyeColor;
    std::string furColor;
    float weight;
    bool isHappy;
    std::string name;
    Bone* bone;
    void printLegs();
};
