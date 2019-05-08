#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class telephone {
  long no;
  char first[10];
  char last[10];
  // That limit is a maximum of 64 characters 
  //(octets) in the 
  //“local part” (before the “@”) and a maximum of 255 characters (octets) in the domain part (after the “@”) for a total length of 320 characters. However, there is a restriction in RFC 2821 on the length of an address in MAIL and RCPT commands of 254 characters.
  char mail[320];
  static int count;

  public:
    void set_data() {
      cout << "Enter the first name";
      cin >> first;
      cout << endl << "Enter the last name";
      cin >> last;
      cout << "Enter the phone number";
      cin >> no;
      cout << endl << "Enter the email id";

      cin >> mail;

      count++;
    }

    void display() {
      cout << endl << count << ". " << first << " " << last << " " << no << " " << mail;
    }

};

int telephone::count = 0;

int main() {
    telephone t[20];
    int i;
    int n;
    cout << "Enter the no. of contacts";
    cin >> n;
    for (i = 0; i < n; i++) {
        t[i].set_data();
    }
    for (i = 0; i < n; i++) {
        t[i].display();
    }
    return 0;
}