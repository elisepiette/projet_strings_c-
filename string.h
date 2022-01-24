class string {
  protected:
    char* p;
  public:
    //constructor
    string();
    string(const char* str);
    //string(const string *str);

    //accessor
    const char* get_str() const;
    size_t size() const;
    //string resize(size_t size, char ch);
    //int length() const;

    //studentA
    const char* c_str() const;
    void clear();
    string operator= (char c);
    const char get_char(int i) const;

};
string operator+ (const string& str, const char* a);
