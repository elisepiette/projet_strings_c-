#include <stdbool.h>

class string {
  protected:
    char* p;
    size_t _cap;
    size_t _increase = 15;
    size_t _maxsize=100;
  public:
    //constructor
    string();
    string(const char* str);
    string(const string& str);

    //destructor
    ~string();

    //accessor
    char* c_str() const;
    size_t size() const;
    int length() const;

    //studentA
    void clear();
    string& operator= (char c);
    const char get_char(int i) const;

    //student B
    string& operator= (const string& str);
    int max_size();
    string& resize(int size, char ch);

    //studentC
    //string operator=(const char* c);
    void setCapacity(const size_t cap);
    size_t capacity() const ;
    void _increasecap(const size_t n);
    void reserve(size_t n);
    bool empty() const;
    string& operator=(const char* c);
};
string operator+ (const string& str, const char* a);
string operator+ (const string&, const string&);
string operator+ (const string& str, char c);
