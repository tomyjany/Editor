#include <iostream>
#include <string>
#include <vector>

class Text{
  public:
    virtual std::string getFormat(std::string _text) = 0;
    virtual void cosem() = 0;


  
};
class bold : public Text{
  public:
    std::string getFormat(std::string _text);
    void cosem();

};
class italic : public Text{
  public:
    std::string getFormat(std::string _text);
    void cosem();

};

class Editor{
  private:
    std::string text;
    std::vector<Text *> styles;
  public:
    void setString(std::string _text);
    void addStyles(Text*style);
    void combineAllStyles();
    std::string getString();

};

