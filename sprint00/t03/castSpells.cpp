#include "castSpells.h"

int castFloatToInt(float number) {
      int i = static_cast<int>(number);
      return i;
}

int* castToNonConstIntPtr(const int* ptr){
      int* me = const_cast<int*>(ptr);
      return me;
}
