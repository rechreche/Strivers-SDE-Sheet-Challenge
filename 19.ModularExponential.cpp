#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long ans=1;
	long long t=x;

        while (n > 0) {
          if (n % 2 == 1)
            ans = (ans % m * t % m) % m;

          t = (t % m * t % m) % m;
		  n=n>>1;
        }
		return int(ans%m);

}
