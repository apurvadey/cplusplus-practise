#include <iostream>

using namespace std;

class sum {
  int a, b;

  public:
    sum() {
        a = 5;
        b = 9;
    }
    void sum1();
};
void sum::sum1() {
    int s = a + b;
    cout << "Sum+" << s + "/n";
}

main() {
    sum s1;
    s1.sum1();
    return 0;
}
