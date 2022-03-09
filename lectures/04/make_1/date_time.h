#include "time.h"
#include "date.h"

class Date_Time{
    private:
        Time t;
        Date d;
    public:
        Date_Time();
        void print() const;         
};
