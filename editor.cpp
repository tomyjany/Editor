#include "editor.h"
std::string bold::getFormat(std::string text){
  return "<b>" + text + "</b>";
};
std::string italic::getFormat(std::string text){
  return "<i>" + text + "</i>";
};
void Editor::combineAllStyles(){
  std::cout << styles.size() << std::endl;
  for(int i = 0; i<styles.size();i++){
    std::cout << i << " iterace " << std::endl;
    styles[i]->cosem();
    this->text = styles[i]->getFormat(this->text);
  }

  
};
void Editor::setString(std::string _text){
  this->text = _text;
};
std::string Editor::getString(){
  return text;
};

void bold::cosem(){
  std::cout << "bold" << std::endl;
}
void italic::cosem(){
  std::cout << "italic" << std::endl;
}
void Editor::addStyles(Text * style){
  this->styles.push_back(style);
}
