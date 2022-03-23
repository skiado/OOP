#include <iostream>
#include <string>
using namespace std;

class Employee {
  int id;
  string name;
  public:
  void getdata();
  void putdata();
};

void Employee::getdata() {
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : " ;
  cin.ignore();             // Από το προηγούμενο cin έχει μείνει το enter
  getline(cin,name);
}
void Employee::putdata()
{
  cout << id << " "
  	<< name << " " << endl;
}

int main(){
  Employee emp[30];
  int n, i;
  cout << "Δώσε τον αριθμό των υπαλλήλων (1-30) : ";
  cin >> n;
  for(i = 0; i < n; i++){
    emp[i].getdata();
  }
  cout << "Υπάλληλοι " << endl;
  for(i = 0; i < n; i++){
    emp[i].putdata();
  }
  return 0;  
}

// g++ -o 05 06_05.cpp
