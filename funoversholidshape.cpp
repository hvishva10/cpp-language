#include <iostream>
using namespace std;
class sholidshape
{
public:
  int test(int a)
  {
    return a * a * a;
  }
  double test(double r)
  {
    return 4 / 3 * 3.14 * r * r * r;
  }
  int test(int l, int b, int h)
  {
    return l * b * h;
  }
  double test(double l, double w, double h)
  {
    return l * w * h / 3;
  }
};
int main()
{
  sholidshape s;
  cout << "qube is:" << s.test(5) << endl;
  cout << "sphere is:" << s.test(5.3) << endl;
  cout << "cuboid is:" << s.test(2, 4, 6) << endl;
  cout << "pyramid is:" << s.test(2.1, 3.2, 4.5);
}