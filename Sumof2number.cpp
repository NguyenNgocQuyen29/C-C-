#include <iostream>

int Add(int first, int second){
    std :: cout << "two numbers received are: " << first << " and " << second << "\n";
    return (first + second);
}
int main(){
    using std :: cout;
    using std :: cin;
    int a,b,c;
    cout << "Enter two numbers\n";
    cout << "a is: ";
    cin >> a;
    cout << "b is: ";
    cin >> b;
    c = Add(a,b);
    cout << "Add of two number is: " << c;
    return 0;
}

/*2. Write the smallest program that can be compiled, linked and run
The smallest program is:
int main(){}
*/

