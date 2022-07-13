#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]){

    string file_name, command;

    cin>>file_name;

    cout<<"*********************\n";
    cout<<"* Execute your code * \n";
    cout<<"*********************\n";
    cout<<"\n";

    command = "g++ "+file_name+".cpp -o "+file_name+" && ./"+file_name;

    const char *cmd = command.c_str();

    system(cmd);
    return 0;
}
