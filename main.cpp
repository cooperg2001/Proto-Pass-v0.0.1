#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()


{
//Declares variables
   string a;
   string b;
   string c;
//Reads from stored password and sets c to contents
string line_;
ifstream file_("pass.txt");
if(file_.is_open())
{
    while(getline(file_,line_))
    {//line below is used for testing
       // cout << line_ << '\n';
    }
    file_.close();
    c = atoi(line_.c_str());
}

else
   {
      cout << "file is not open" << '\n';
   }
//Standard double input confirmation
    cout << "Enter a New OR Existing Password" << endl;
    cin >> a;
    if (a==c)
    {
        cout << "Password Accepted";
        return 0;

    }
    else
    cout << "Enter the Password Again " << endl;
    cin >> b;
//If a does match b than c stores the value and prints it to screen
    if (a==b)
    {
    c = a;
    cout << "Number " << c << " Stored" << endl;
 ofstream myfile;
 myfile.open ("pass.txt");
 myfile << c;
 myfile.close();

    }
     //If a does not match b terminates program
    else
{
cout << "Numbers DO NOT Match" << endl;
    return 0;
    }
return 0;


    }
