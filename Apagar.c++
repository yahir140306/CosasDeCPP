#include <iostream>
#include <stdlib.h>

int main() {
    char ch;
    cout<< "¿Deseas apagar el PC ahora [Y/N] ?";
    cin>>ch;

    if (ch == 'y' || ch == 'Y') {
        system("c:\\WINDOWS\\System32\\shutdown/s");
        return 0;
    }
}