#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//abs(s) : gia tri tuyet doi
//pow(a,b): Tinh a^ b: Tra ve so double
//sqrt(n) : Tinh can bac 2 cua n : Tra ve so double
//round(a) : Lam tron so


/* Bai1: Tong, Hieu, Tich, Thuong
int main(){
    int a,b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich = 1.00*a*b;
    float thuong = (float)a/b;
    //fixed << setprecision (2) : lam tron 2 so thap phan
    cout << a + b << " " << a-b << " " << 1ll*a*b << " " << fixed << setprecision (2)<< (float)a/b << endl;
    return 0;
}
Bai 2: Chu vi & Dien tich
int main(){
    int r;
    cin >> r;
    //precision : dp chinh xac
    cout << fixed << setprecision(2) << 2*r*3.14 << " " << 3.14*r*r << endl;
    return 0;
}
Bài 3: Tinh khong cach
int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dis = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    cout << fixed << setprecision(2) << dis << endl;
    return 0;
}
Bai 4: Chuyen don vi do C va F
int main(){
    int C;
    cin >> C;
    double F = (float)C*9/5 + 32;
    cout << fixed << setprecision(2) << F << endl;
    return 0;
}

int main(){
    int a,b;
    cin >> a >> b;
    //abs(c) : tri tuyrt doi
    //sqrt(c) can bac 2

    cout << pow(a,b) << endl;
    return 0;
}
Bai 5 : Tinh Sum = 1 + 2 + 3 +..+n 0<=n <=10^8
co thể bị tràn nên phải dùng long long
int main(){
    int n;
    cin >> n;
    long long S = 1ll*n*(n+1)/2;//1ll: ep kieu sang long long
    cout << S << endl;
    return 0;
}
Bai 6: Tinh Sum = 1^2 + 2^2 + 3^2+....
Sum = n(n+1)(2*n+1)/6
int main(){
    int n;
    cin >> n;
    long long Sum = 1ll*n*(n+1)*(2*n+1)/6;
    cout << Sum << endl;
    return 0;
}
Bai 7: Tinh Sum = 1/1*2 + 1/2*3 + 1/3*4 +...+1/n*(n+1)
Sum = 1 - 1/2 + 1/2 - 1/3 +1/3 - 1/4 +....-1/n + 1/n - 1/(n+1) = 1 - 1/(n+1)
int main(){
    int n;
    cin >> n;
    double Sum = 1.0*n/(n-1); //1.0 ep kieu long
    cout << fixed << setprecision(2) << Sum << endl;
    return 0;
}
int main(){
   int n;
   cin >> n;
   long long Sum = 1ll*n*(n+1);
   cout << Sum << endl;
   return 0;
}*/
int main(){
    long long n;
    cin >> n;
    if(n % 2 == 0){
        cout << n/2 << endl;
    }
    else{
        cout << (n-1)/2 - n << endl;
    }
    return 0;
}
