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
    string get_str() const;
    int get_len() const;
/*
    string(const string& copie);
    string operator= (char c);
};
*/
};
