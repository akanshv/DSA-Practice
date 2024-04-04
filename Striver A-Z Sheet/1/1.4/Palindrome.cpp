// https://www.naukri.com/code360/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

using namespace std;

bool palindrome(int n){
    string num=to_string(n);
    for(int i =0; i<num.length();i++){
        if(num[i] != num[num.length() - 1 - i]){
            return false;
        }
    }

    return true;
}