// https://www.naukri.com/code360/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>
using namespace std;

int main() {
	
	int num, evensum=0, oddsum=0;

	cin>>num;

	while(num!=0){
		if((num%10)%2==0){
			evensum = evensum + (num%10);
		}
		else{
			oddsum = oddsum + (num%10);
		}
		num=num/10;
	}

	cout<<evensum<<" "<<oddsum;

	return 0;