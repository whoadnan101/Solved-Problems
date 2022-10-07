//Palindrome or not

string is_palindrome(int n)
		{
		    int temp=n,r,sum=0;
		    while(n!=0){
		    r=n%10;
		    sum=(sum*10)+r;
		    n=n/10;
		    }
		    if(temp==sum){
		      return "Yes";
		    }
		    else{
		        return "No";
		    }
		}