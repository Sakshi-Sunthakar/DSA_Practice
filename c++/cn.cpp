#include<iostream>

using namespace std ;

long long int sumOrProduct(long long int n,long long int q)
{
	long long int answer = 0;
	long long int mod = 1e9 + 7;

	if (q == 1)
	{
		/*
			Sun of first 'N' numbers is given by
			'N' * 'N + 1' / 2.
		*/
		answer = (n * (n + 1)) / 2 ;
	}
	else
	{
		answer = 1 ;
		for (long long int i = 1 ; i <= n ; i++)
		{	
			// Modular Arithmatic.
			i %= mod, answer %= mod ;
			answer = (((answer * i) % mod) + mod) % mod ;
		}
	}

	return answer;
}


int main()
{
    long long int n,q;

    cin>>n>>q;

    cout<<sumOrProduct(n,q);

    return 0;
}