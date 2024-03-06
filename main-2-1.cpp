#include <iostream>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main() {
    string ntd = "197";
    print_binary_str(ntd);

    string tnp = "711";
    print_binary_str(tnp);

    string meo = "1509";
    print_binary_str(meo);

    string gau = "1024";
    print_binary_str(gau);

    string a = "0";
    print_binary_str(a);
}