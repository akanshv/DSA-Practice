// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n, Fn1=1, Fn2=1,Fn=0;
        cin>>n;
        if(n==1 || n==2){
                cout<<"1";
        } else {
                for (int i=2; i <n; i++){
                                Fn =  Fn1 + Fn2;
                                Fn1 = Fn2;
                                Fn2 = Fn;

                }
                cout<<Fn;
        }

        return 0;