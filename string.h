class string {
  protected:
    char _str[100]={};
    int _len;
  public:
    //constructor
    string();
    string(const char *str);
    string(const string *str);

    //accessor
    const char* get_str() const;
    int get_len() const;
    string resize(size_t size, char ch);
    int length() const;
};
