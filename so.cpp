#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num>9){
        int sum=0;
        int temp=num;
       while (temp>0) {
        sum += temp%10;
        temp = temp/10;
     }
     num=sum;
    }
    cout << "the final single digit is :"<<num;

    return 0;
}

