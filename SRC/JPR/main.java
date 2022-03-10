class Main {

  String languages;

  // constructor accepting single value
  Main(String lang) {
    languages = lang;
    System.out.println(languages + " Programming Language ");
  }

  public static void main(String[] args) {

    new Main("Java");
    new Main("Python");
    new Main("C");
  }
}
