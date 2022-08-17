#include "hashing.hpp"

int hash_string(string s) {
  int i = 0;
 int sum = 0;
int m = 97;
for (i = 0; s[i] != '\0'; i++)
        sum = (sum + (s[i]%m))%m;

return sum;
    // implement hashing function here
}
