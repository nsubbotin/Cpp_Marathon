#include "meadSong.h"

void firstpart(int i) {
      std::cout << i << " bottles of mead on the wall, ";
      std::cout << i << " bottles of mead.\n";


      std::cout << "Take one down and pass it around, " << i - 1;
      std::cout << " bottles of mead on the wall.\n\n";
}

void secondpart() {
      std::cout << "2 bottles of mead on the wall, 2 bottles of mead.\n";
      std::cout << "Take one down and pass it around, ";
      std::cout << "1 bottle of mead on the wall.\n\n";
}

void thirdpart() {
      std::cout << "1 bottle of mead on the wall, 1 bottle of mead.\n";
      std::cout << "Take one down and pass it around, ";
      std::cout << "no more bottles of mead on the wall.\n\n";
}

void fourthpart() {
      std::cout << "No more bottles of mead on the wall, no more bottle of mead.\n";
      std::cout << "Go to the store and buy some more, ";
      std::cout << "99 bottles of mead on the wall.\n";
}

void meadSong() {
      for(int i = 99; i > 2; i--)
            firstpart(i);
      secondpart();
      thirdpart();
      fourthpart();
}
