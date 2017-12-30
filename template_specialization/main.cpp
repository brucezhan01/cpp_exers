#include <iostream>

#include "recursive_template.hpp"
#include "multiple_specialization.hpp"

void test_recursive_template_specialization() {
    std::cout << "test recursive template specialization: " << std::endl;
    print<10>();
    std::cout << std::endl;
}

void test_multiple_specialization() {
    using namespace std;
    cout << "test multiple specialization of template: " << endl;
    cout << S<float,int,int>().id() << endl;
    cout << S<float,int,char>().id() << endl;
    cout << S<int,float,int>().id() << endl;
    cout << S<int,float,float>().id() << endl;
    //cout << S<int,char,char>().id() << endl; // error
    cout << S<int,char,float>().id() << endl;
    cout << endl;
}

int main() {
    test_recursive_template_specialization();
    test_multiple_specialization();
    return 0;
}
