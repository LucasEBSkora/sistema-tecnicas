#include "String.h"

#include <string.h>

String::String(const char* s = "") :
  tam {strlen(s)}
 {
   ptr = new char[tam + 1];
   strcpy(ptr, s);

}

String::String(const String& s) :
  tam{s.tam} {
    ptr = new char[tam + 1];
    strcpy(ptr, s.ptr);
}

String::String() :
  tam {0},
  ptr{nullptr}
 {;

}

String::~String() {
  delete []ptr;
  ptr = nullptr;

}

const char* String::getString() const {
  return ptr;
}

long unsigned int String::getTamanho() const {
  return tam;
}

void String::operator=(const char* s) {
  setString(s);

}
void String::operator=(String& s) {
  setString(s.getString());
}

bool String::operator==(String& s) const {
  return (strcmp(ptr, s.getString()) == 0);
}

void String::setString(const char* s) {
  if (s != ptr) {

    delete []ptr;
    tam = strlen(s);
    ptr = new char[tam + 1];
    strcpy(ptr, s);
  }
}

std::ostream& operator<< (std::ostream& saida, const String& s) {
  saida << s.getString();
  return saida;
}