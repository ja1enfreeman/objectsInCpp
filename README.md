# Dog Program

This C++ program defines a `Dog` class with various attributes and behaviors, including running, barking, and wagging tails. Additionally, dogs can have an optional bone, implemented through a `Bone` class.

## Dog Class

The `Dog` class has the following attributes:

- `numberOfLegs` (integer): Must be between 0 and 4, defaulting to 4.
- `eyeColor` (string): Any value is accepted.
- `furColor` (string): Any value is accepted.
- `weight` (float): Must be between 1 and 200.
- `isHappy` (boolean): Defaults to true.
- `name` (string): Any value is accepted.

### Constructor and Destructor

- Constructor: Takes a string representing the name and prints a message indicating the creation of the dog.
- Destructor: Prints the dog's name and a message when the dog is deleted.

### Public Functions

1. **run(howFar, howFast):**
   - Prints "#" characters based on `howFar`.
   - Sleeps between prints, controlled by `howFast`.
   - Prints the number of legs used for running.
   - Prints a message with the values for `howFar` and `howFast`.

2. **bark(numTimes):**
   - Prints the dog's name.
   - Prints "yap!!!" or "WOOF!!!" based on the dog's weight.
   - Prints a message with the number of times to bark.

3. **wag(numTimes, howFast):**
   - Prints alternating "\" and "/" characters if the dog is happy.
   - Loses the bone after wagging.
   - Prints a message with the values for `numTimes` and `howFast`.

4. **setWeight(weight):**
   - Sets the dog's weight if it is greater than 0.

5. **setNumberOfLegs(numLegs):**
   - Sets the number of legs to 4 if `numLegs` is <= 0 or > 4.

6. **setHappiness(isHappy):**
   - Sets the happiness of the dog.

7. **addBone():**
   - Makes the dog happy by setting the happiness to true.
   - Dynamically declares a new `Bone`.

## Bone Class

The `Bone` class has a simple constructor and destructor:

- Constructor: Prints a message indicating the creation of the bone.
- Destructor: Prints a message indicating the deletion of the bone.

## Usage

- Do not clutter the .h and .cpp files.
- Avoid variable initialization or assignments in .h files; use the class constructor.
- Set access modifiers correctly for class members.

## Files

1. **Dog.h:** Class definition for `Dog`.
2. **Dog.cpp:** Implementations of all instance methods, including the constructor and destructor, for `Dog`.
3. **Bone.h:** Class definition for `Bone`.
4. **Bone.cpp:** Implementations of the `Bone` constructor and destructor.
5. **main.cpp:** Program file with a main method to test the classes.

## Testing

Use the following code snippet to test the classes:

```cpp
int main() {
    Dog dog1("Fido");
    dog1.setWeight(5.0);
    dog1.bark(5);
    dog1.setNumberOfLegs(3);
    dog1.run(20, 400);
    dog1.addBone();
    dog1.wag(10, 550);

    return 0;
}
