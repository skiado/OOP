
class Date{
    private:
        int day;
        int month;
        int year;
        int is_valid(int d,int m, int y);
    public:
        Date(int d=1, int m=1, int y=1900);
        void print_d() const;
};
