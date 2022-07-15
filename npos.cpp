#include <iostream>
using namespace std;

int main() {
  
  string str2 = "app";
  string str = "an apple";
  
  int found=str.find(str2);

  if (found != string::npos){
    cout << "first 'app' found at: " << int(found) << endl;
  }
}