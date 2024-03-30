/*https://www.naukri.com/code360/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf*/

#include<iostream>
using namespace std;

int main() {

    char ch;
    
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') {
        cout << "1" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
	
	return 0;
}
