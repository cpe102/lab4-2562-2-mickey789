#include<iostream>
#include<cmath>
using namespace std;

float Result (float x, float y, float e = 2.71828){
    y = 3 * pow(x,3) + 2 * e + pow(2,2*x+1) + sqrt(pow(x,2)+1);
    return y;
}

int main(){
	float y, x;
    cout << "Enter x = ";
    cin >> x;
    cout << "Result y = " << Result(x,y);
    
    return 0;
}
