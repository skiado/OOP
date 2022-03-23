#include <iostream>
#include <string>
using namespace std;

class Employee {
  int id;
  string name;
  public:
  Employee();
  Employee(int i, string n);
  void putdata();
};

Employee::Employee() {}  // απαιτείται ένας dummy constructor για το new

Employee::Employee(int i, string n) {
  id = i;
  name = n;
}
void Employee::putdata()
{
  cout << id << " "
  	<< name << " " << endl;
}

int main(){  
  int n, id;
  string name;
  
  cout << "Δώσε τον αριθμό των υπαλλήλων (1-30) : ";
  cin >> n;
  Employee* emp = new Employee[n];      // απαιτείται ένας dummy constructor για το new
  for(int i = 0; i < n; i++){
    cout << "Enter Id : ";
  	cin >> id;
  	cout << "Enter Name : " ;
  	cin.ignore();             // Από το προηγούμενο cin έχει μείνει το enter
  	getline(cin,name);
  	emp[i] = Employee(id,name);
  }
  cout << "Υπάλληλοι " << endl;
  for(int i = 0; i < n; i++){
    emp[i].putdata();
  }
  return 0;  
}

// g++ -o 07 06_07.cpp
