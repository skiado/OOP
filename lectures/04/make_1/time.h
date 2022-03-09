
class Time {
	private:
		int hour;
		int min;
		double sec;
		int is_valid(int h,int m, double s);
	public:
		Time(int h=0,int m=0, double s=0.0) ;
		void print_t() const;
};
