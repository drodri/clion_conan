#include "Poco/MD5Engine.h"
#include <boost/regex.hpp>
#include <string>
#include <iostream>

using namespace Poco;
using namespace std;

int main(){
    MD5Engine md5;
    md5.update("Hello World");
    string md5string = DigestEngine::digestToHex(md5.digest());
    cout<< "MD5= " << md5string << "\n";

    string s = "correct@email.com", s2="bademail";
    boost::regex expr{"\\b[a-zA-Z0-9._%-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,4}\\b"};
    cout << boolalpha << boost::regex_match(s, expr) << '\n';
    cout << boolalpha << boost::regex_match(s2, expr) << '\n';
}
