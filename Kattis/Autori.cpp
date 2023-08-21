#include <bits/stdc++.h>
using namespace std;

char longname[100];
char *ptr;
int main () {
    cin >> longname;
    //split string by '-' delimiter
    ptr = strtok(longname, "-");
    while (ptr != NULL) {
        cout << ptr[0];
        //move to next substring delimited by '-'.
        //string param = NULL, means it'll use the last string inserted (in this case 'longname').
        ptr = strtok(NULL, "-");
    }
}