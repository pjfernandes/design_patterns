class Singleton {
  private:
    static Singleton *singleton;

  public:
    static Singleton* getObject();
    //void hello();
};
