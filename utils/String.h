#ifndef STRING_H
#define STRING_H

class String {

  private:
    long unsigned int tam;
    char* ptr;


  public:
    String(const char* s);
    ~String();

    const char* getString();
    long unsigned int getTamanho();

    void operator=(const char* s);
    void operator=(String& s);
    bool operator==(String& s);

  private:
    void setString(const char* s);

};

#endif
