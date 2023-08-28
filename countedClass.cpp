#include <iostream>
using namespace std;

class CountedClass {
    static int count;

public:
    CountedClass() {
        ++count;
    }

    CountedClass(const CountedClass&) {
        ++count;
    }

    ~CountedClass() {
        --count;
    }

    static int getCount() {
        return count;
    }
};

int CountedClass::count = 0;

int main() {
    CountedClass a;
    cout << CountedClass::getCount() << endl;
    CountedClass b;
    cout << CountedClass::getCount() << endl;
    CountedClass c(b);
    cout << CountedClass::getCount() << endl;
    a = c;
    cout << CountedClass::getCount() << endl;
}
