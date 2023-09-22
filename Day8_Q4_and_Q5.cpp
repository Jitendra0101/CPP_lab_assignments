#include<iostream>
using namespace std;

void ToUpper(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= ('a' - 'A');
        }
    }
}

void ToLower(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += ('a' - 'A');
        }
    }
}


int main() {
    char myString1[] = "jitendra";
    char myString2[] = "JITENDRA";

    ToUpper(myString1);
    cout << "in upper: " << myString1 << endl;

    
    ToLower(myString2);
    cout << "in lower: " << myString2 << endl;
    return 0;
}


