#include <iostream>
#include <string>
using namespace std;

class Employee {
  int id;
  string name;
  public:
  Employee(int i, string n);
  void putdata();
};

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
  Employee* emp = (Employee*)malloc(sizeof(Employee) * n);
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

// g++ -o 06 06_06.cpp
