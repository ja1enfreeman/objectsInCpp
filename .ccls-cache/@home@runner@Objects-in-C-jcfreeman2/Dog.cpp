#include <iostream>
#include <string>
#include "Dog.h"
#include <unistd.h>

Dog::Dog(std::string name) : numberOfLegs(4), eyeColor(""), furColor(""), weight(4.0), isHappy(true), name(name) {
  std::cout<< name << " is alive!\n";
}

Dog::~Dog() {
  std::cout<< name << " is not longer with us";
}

void Dog::run(int howFar, int howFast) {
  if (howFar < 0 || howFar > 1000 || howFast < 0 || howFast > 1000 || numberOfLegs < 3) {
    return;
  }

  printLegs();
  std::cout << "Running " << howFar << " units with speed " << howFast << std::endl;

  for (int i = 0; i <= howFar; ++i) {
    std::cout << "#";
    std::cout.flush();
    usleep(howFast * 1000);
  }

  std::cout << std::endl;
}

void Dog::bark(int numTimes) {
  std::cout << name << std::endl;

  if (weight < 100) {
    for (int i = 0; i < numTimes; ++i){
      std::cout << "yap!!!";
    }
  }
  else {
    for (int i = 0; i < numTimes; ++i){
      std::cout << "WOOF!!!";
    }
  }

  std::cout << std::endl;
  
}

void Dog::wag(int numTimes, int howFast) {
  if (numTimes < 0 || numTimes > 1000 || isHappy == false) {
    return;
  }

  if (howFast < 0 || howFast > 1000) {
    howFast = 0;
  }

  for (int i = 0; i < numTimes; ++i) {
    std::cout << (i % 2 == 0 ? "\\" : "/");
    std::cout << " ";
    std::cout.flush();
    usleep(howFast * 1000);
  }
  std::cout << std::endl;
  isHappy = false;
  delete bone;
}

void Dog::setWeight(double weight) {
  if (weight <= 0) {
    this->weight = weight;
  }
}

void Dog::setNumberOfLegs(int numLegs) {
  if (numLegs <= 0 || numLegs > 4){
    numLegs = 4;
  }
  else {
    numberOfLegs = numLegs;
  }
}

void Dog::setHappiness(bool isHappy) {
  this->isHappy = isHappy;
}

void Dog::addBone(){
  isHappy = true;
  bone = new Bone();
}

void Dog::printLegs() {
  std::cout << "Legs in use: " << numberOfLegs << std::endl;
}