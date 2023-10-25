// Ethan Ramos
// ethan52146458@csu.fullerton.edu
// @RahmMane13
// Partners: @lemusdan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // DONE: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() > 4 || arguments.size() < 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  // DONE: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  // Initialize each variable with an element of the arguments vector
  // declared above.

  // DONE: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment;

  return 0;
}