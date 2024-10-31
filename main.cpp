#include <iostream>
using namespace std;

int main() {
    int range;

    cout<<"Enter the Multiplication Range (0-10): "<<endl;
    cin>>range;

if (range <= 10) {
    for(int i=1;i<=range;i++) {
        cout<<"Multiplication Table for: "<<i<<endl;
        for(int j=1;j<=10;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }
}
    else {
        cout<<"You entered a number that exceeds the Limit!"<<endl;
    }


    return 0;
}
