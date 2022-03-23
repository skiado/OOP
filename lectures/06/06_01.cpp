#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string line;
  // Δημιουργία ή άνοιγμα αρχείου για εγγραφή
  ofstream MyFile("06_01_file.txt");

  // Εγγραφή στο αρχείο
  MyFile << "Η διαχείριση των αρχείων στη C++ μπορεί να φαίνεται αρχικά μπερδεμένη" << endl <<"αλλά έχει πολλές δυνατότητες!" << endl;
  getline(cin, line);
  MyFile << line << endl;
  // Κλείσιμο αρχείου
  MyFile.close();
  cout << "Άνοιγμα αρχείου για ανάγνωση" << endl;
  // Δημιουργία text string, για να εγγράψει τα δεδομένα του αρχείου
  string myText;

  // Άνοιγμα αρχείου για ανάγνωση
  ifstream MyReadFile("06_01_file.txt");

  // Βρόχος while με τη συνάρτηση getline() για ανάγνωση του αρχείου γραμμή γραμμή
  while (getline (MyReadFile, myText)) {
    cout << myText << endl;
  }
  //Κλείσιμο αρχείου
  MyReadFile.close(); 
  return 0;
} 

// g++ -o 01 06_01.cpp
