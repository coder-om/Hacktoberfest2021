// find the HCF of two numbers or write the Euclide Algorithm 
#include <bits/stdc++.h>
using namespace std;

int euclideAlgorithm(int a,int b){
    if (a==0)
    {
        return b;
    }
    euclideAlgorithm(b%a,a);
}

int main(int argc, char const *argv[])
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<euclideAlgorithm(num1,num2);   
    return 0;
}
