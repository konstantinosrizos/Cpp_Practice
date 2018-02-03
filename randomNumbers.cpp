#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

void cast();

int main() {

   // Seed the RNG once, at the start of the program
   srand( time( NULL ) );

   // Roll our die
   cast();

    return 0;
}

void cast() {

    for (int i = 0; i < 3; i++) {
      // Get a pseudo-random number in [1,100]
      int num = (rand() % 100) + 1;
      cout << num << endl;
   }
}
