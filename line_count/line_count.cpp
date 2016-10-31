#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

  int lines = 0;
  string line;
  
  ifstream file(argv[1]);
  if (!file.is_open()){
    cout << "Unable to open file!\n";
    return 1;
  }
  
  while (getline(file, line)){
    lines++;
  }

  cout << "Number of lines in file: " << lines << '\n';
  
  return 0;
}
