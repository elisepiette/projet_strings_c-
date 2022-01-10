class string {
  protected:
    char* a;
    int len;
  public:
    string();
    string(const string& copie);
    string operator= (char c);
};
