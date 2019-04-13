#include "util.h"

struct tm* util_get_tm() {
  time_t temp = time(NULL); 
  return localtime(&temp);
}

void strupr(char* temp) {
  int c = 0;
  while (temp[c] != '\0') {
    if (temp[c] >= 'a' && temp[c] <= 'z') {
      temp[c] = temp[c] - 32;
    }
    c++;
  }
}
