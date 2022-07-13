
#include <iostream>

using namespace std;

int main(){

    char  ABC[26];

    for (int index = 0; index < 26; index++){
        int count = 65+index;
        //append ABC
        ABC[index] = char(count);
    }
    
    for (int i = 0; i < 26; i++){
        for (int index = 0; index < 26-i; index++){
            cout<<ABC[index];
        }

        cout<<"\n";
    }
    return 0;
}
