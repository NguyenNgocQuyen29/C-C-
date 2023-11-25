#include <iostream>


/*int main(){
    using std :: cout;
    using std :: endl;
    cout << "The size of an int is: " << sizeof(int) << " bytes" << endl;
    cout << "The size of a short int is: " << sizeof(short) << " bytes" << endl;
    cout << "The size of a long int: " << sizeof(long) << " bytes" << endl;
    cout << "The size of a char int: " << sizeof(char) << " bytes" << endl;
    cout << "The size of a double: " << sizeof(double) << " bytes" << endl;
    cout << "The size of a float: " << sizeof(float) << " bytes" << endl;
    cout << "The size of a bool " << sizeof(bool) << " bytes" << endl;
    return 0;
}*/

/*typedef to create an alias

typedef unsigned short int USHORT;
int main(){
    using std :: cout;
    using std :: endl;
    USHORT width = 5;
    USHORT Length;
    Length = 10;
    USHORT S = width * Length;
    cout << "Width: " << width << endl;
    cout << "Length: " << Length << endl;
    cout << "S: " << S << endl;
    return 0;
    }*/
/*ENUM
int main(){
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    Days today;
    today = Monday;
    if(today == Saturday || today == Sunday)
        std::cout << "I love the weekends \n";
    else
        std ::cout << "Back to work";
    return 0;
}

QA: Given this enum, what is the value of BLUE
enum COLOR {WHITE, BLACK = 100, RED, BLUE, GREEN = 300};
=> The value of BLUE is 102
=>WHITE:0, BLACK = 100; RED:101; BLUE:102, GREEN = 300*/
