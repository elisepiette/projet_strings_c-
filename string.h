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
    char* get_str();

    //string resize(size_t size, char ch);
    //int length() const;

    //studentA
    void clear();
    string operator= (char c);
    string& operator= (const string& str);
    const char get_char(int i) const;


    //studentC
    string operator=(const char* c);


};
string operator+ (const string& str, const char* a);
string operator+ (const string&, const string&);
