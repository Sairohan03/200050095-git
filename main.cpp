#include <iostream>
#include <string>
#include "hashing.cpp"

using namespace std;


int main(int argc, char *argv[]) {
    cout << hash_string(argv[1],5) << endl;
}
