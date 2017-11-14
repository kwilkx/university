struct MyType {
	MyType(){}; 
    //MyType( const MyType& rhs){}; 
    MyType( MyType& rsh){};
};

//MyType getType() { return MyType{};}

int main() {
    MyType b; 
    MyType a {b};
    //MyType c { getType() };
};
