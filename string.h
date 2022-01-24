class string {
  protected:
    char* p;

  public:
    //constructor
    string();
    string(const char* str);
    string(const string *str);

    //destructor
    ~string();

    //accessor
    const char* c_str() const;
    size_t size() const;
    int length() const;

    //studentA
    void clear();
    string operator= (char c);
    const char get_char(int i) const;

    //student B
    string& operator= (const string& str);
    int max_size();
    string& resize(int size, char ch);
    //string operator+ (const string&, char);

    //studentC
    string operator=(const char* c);

};
string operator+ (const string& str, const char* a);
string operator+ (const string&, const string&);
