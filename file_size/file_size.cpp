#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  if (argc != 2)
    cout << "Usage: " << argv[0] << " filename\n";

  ifstream file (argv[1], ios::binary | ios::ate);
  if (!file){
    cout << "Could not open " << argv[1] << ", try another file.\n";
    return 1;
  }

  cout << "File size: " << file.tellg() << " bytes\n";

  return 0;
}
