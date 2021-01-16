#include "str_lib.h"

int main() {
    int n;
    cout<<"Choose a number of strings: ";
    cin>>n;
    string* lines=new string[n];
    int* ASCII=new int[128];
    for (int i=0; i<128; i++){
        ASCII[i]=0;
    }
    getter(lines, n);
    counter(ASCII, lines, n);
    outer(lines, n);
}
