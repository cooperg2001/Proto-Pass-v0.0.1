#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


string c;


int encrypt()
{
   string toEncrypt = c;
 char keyToEncrypt = 's'; //115 in ascii

 for (int temp = 0; temp < toEncrypt.size(); temp++)
   toEncrypt[temp] ^= keyToEncrypt;
 cout << "nThe encrypted data = " << toEncrypt << endl;
c = toEncrypt;
cout << c << endl;

return 0;

}

int decrypt()
{
    string toEncrypt = c;
 char keyToEncrypt = 's'; //115 in ascii

  for (int temp = 0; temp < toEncrypt.size(); temp++)
   toEncrypt[temp] ^= keyToEncrypt;
 cout << "nThe unencrypted data = " << toEncrypt << endl;
 c = toEncrypt;

 return 0;
}
int main()

{
//Declares variables
string a;
string b;

//Reads from stored password and sets c to contents
string line_;
ifstream file_("pass.txt");
if(file_.is_open())
{
    while(getline(file_,line_))
    {//line below is used for testing
        //cout << line_ << '\n';
    }
    file_.close();
    c = line_;
    decrypt();
}

else
   {
      cout << "file is not open" << '\n';
   }

//Standard double input confirmation
//if the first entry match's c program terminates
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
    encrypt();
    cout << "Password " << c << " Storing" << endl;
 ofstream myfile;
 myfile.open ("pass.txt");
 myfile << c;

 myfile.close();
cout << "Password " << c << " Stored" << endl;
    }
     //If a does not match b terminates program
    else
{
cout << "Numbers DO NOT Match" << endl;
    return 0;
    }
return 0;


    }
