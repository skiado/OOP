// Παρουσίαση μιας class

class first{
	private:
		int a;
	public:
		int b;
		void set_a(int x){
			a = x;
		};
		void set_a(){
			cout << "a = ";
			cin >> a;
		};
		void print(){
			cout << "a = " << a << "  b = " << b << endl;
		};
		void print(string s){
			cout << s << endl 
				<< "a = " << a << "  b = " << b << endl;
		};
};
