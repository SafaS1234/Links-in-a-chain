#include <iostream>
#include <cstddef>

using namespace std;

class ChainLink {
    private:
      string color;

    public:
      ChainLink(string color) {
        this->color = color;
      }
-      string get_color() {
        return this->color;
      }

};

int main()
{
  cout << "Hello template!" << endl;
}
