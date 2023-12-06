/*
Jalen Freeman
CS 221 Fall 2023
Dec 06, 2023

Objects in C++ Program
*/
#include <iostream>
#include "Dog.h"

int main( ) {
  Dog dog1("Fido");
  dog1.setWeight(500.0);
  dog1.bark(5);
  dog1.setNumberOfLegs(4);
  dog1.run(20,100);
  dog1.addBone();
  dog1.wag(10,150);

  return 0;
}