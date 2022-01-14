class string {
  protected:
    char _str[100]={};
    int _len;
  public:
    string();
    string(const char *str);
/*
    string(const string& copie);
    string operator= (char c);
};
*/
