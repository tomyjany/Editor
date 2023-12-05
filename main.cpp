#include "editor.h"
#include <iostream>
using namespace std;
int main(){
  cout << "ahoj" << endl;
  Editor * slovo = new Editor();
  Text * a = new italic();
  Text * b = new bold();
  slovo->addStyles(a);
  slovo->addStyles(b);
  slovo->addStyles(b);
  slovo->addStyles(b);
  slovo->setString("ahoj");
  cout << slovo->getString() << endl;
  slovo->combineAllStyles();
  cout << slovo->getString() << endl;
}
