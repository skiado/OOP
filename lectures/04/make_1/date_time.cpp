#include <iostream>
#include "date_time.h"

using namespace std;

Date_Time::Date_Time(){
            int da,m,y;
            cout << "Hμέρα: " ;
            cin >> da;
            cout << "Μήνας :";
            cin >> m;
            cout << "Έτος :";
            cin >> y;
            Date d1(da,m,y);
            d = d1;
            int h;
            double s;
            cout << "Ώρα : " ;
            cin >> h;
            cout << "Λεπτά :";
            cin >> m;
            cout << "Δευτερόλεπτα :";
            cin >> s;
            Time t1(h,m,s);
            t = t1;
};

void Date_Time::print() const {
	cout << "Εμφάνιση δεδομένων " << endl;
    d.print_d();
    t.print_t();
};
