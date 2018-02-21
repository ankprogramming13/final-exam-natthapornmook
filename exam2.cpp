#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /*code*/
        int cmd;
        string name;
        string line;
        ofstream writefile;
        ifstream readfile;

        do{
            cout << "MENU" << endl;
            cout << "1.add student." << endl;
            cout << "2.list student." << endl;
            cout << "3.search list student." << endl;
            cout << "4.quit." << endl;
            cout << "please enter menu : " ;
            cin >> cmd;
        if (cmd==1) {
            cout << "enter std name : " ;
            cin >> name;
        writefile.open ("std.txt",fstream ::app);
        if (writefile.is_open()) {
                writefile << name << endl;
        }
        else {
                cout << "unable to open file";
        }
        } else if (cmd==2){
            readfile.open ("std.txt");
            if (readfile.is_open()){
                    cout << line << endl;}
        }
        }
            else if(cmd ==3){
            cout << "enter name :" ;
            cin >> name;
        readfill.open("std.txt");
        if (readfile.is_open()) {
                (name="&name&");
        while (getline (readfile,name))
        {
            cout << name << endl;
        }
        }
        }else{
            break;}
}while("myfile.close");

return 0;
}
