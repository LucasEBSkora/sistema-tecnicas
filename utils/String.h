#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {

  private:
    long unsigned int tam;
    char* ptr;

  public:
    String(const char* s);
    String(const String&);
    String();
    ~String();

    const char* getString() const;
    long unsigned int getTamanho() const;

    void operator=(const char* s);
    void operator=(String& s);
    bool operator==(String& s) const;

  private:
    void setString(const char* s);

};

std::ostream& operator<< (std::ostream& saida, const String& s);
#endif
