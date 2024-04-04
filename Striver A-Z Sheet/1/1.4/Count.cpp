// https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int countDigits(int n){
	int num = n,count=0;

	while(n>0){
        if ((n%10)!=0){
            if(num%(n%10)==0 ){
                count++;
		    }
        }
		
		n=n/10;
	}

    return count;
}