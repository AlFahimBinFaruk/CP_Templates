//https://www.geeksforgeeks.org/bitwise-sieve/
bool ifnotPrime(int prime[], int x){ 
	return (prime[x/64] & (1 << ((x >> 1) & 31))); 
} 

bool makeComposite(int prime[], int x){ 
	prime[x/64] |= (1 << ((x >> 1) & 31)); 
} 

void bitWiseSieve(int n){ 
	
	int prime[n/64]; 
	for (int i = 3; i * i <= n; i += 2) { 
		if (!ifnotPrime(prime, i)) 
			for (int j = i * i, k = i << 1; j < n; j += k) 
				makeComposite(prime, j); 
	} 
	if(ifnotPrime(prime,104743)){
        cout<<"NOT prime\n";
    }else cout<<"Prime\n";
} 
