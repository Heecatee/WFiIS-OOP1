// conversion to A (type-cast operator)
operator A() { return A(); }

// static_cast
int main() 
{
    	/**
     	 * used to cast compatible types
     	 * for example:  double -> int, long -> char, int* -> void*
     	 * */
	const double PI = 3.14159265358979323846264279502;
	int integer_pi = static_cast<int>(PI);
	return 0;
}

// dynamic_cast
class Car {};
class Honda : public Car {};
int main()
{
    	/**
     	 * returns NULL, when casting pointers
    	 * returns std::bad_cast, when casting refecences
    	 * */
	Honda *honda = new Honda();
	Car *car = dynamic_cast<Car*>(honda);
	delete honda;
	return 0;
}

// reinterpret_cast
int main()
{
   	/**
   	 * used to cast incompatible types
    	 * for example: char* -> long
    	 * */
	const char *str = "lalala";
	long int str_addr = reinterpret_cast<long int>(str);
	cout << str << " (addr): " << str_addr;

	return 0;
}

// const_cast
void write(char *s){ cout << s; }

int main()
{
   	/** 
   	 *  used to cast const T -> T or T -> const T
   	 * */
	const char *str = "lalala";
	write(const_cast<char*>(str));

	return 0;
}

