#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    if(argc > 1) {
        char * ex = argv[1];

        if(strcmp(ex, "1") == 0) {
            
            printf("%d\n", 3*333*334/2 + 5*199*200/2 - 15*66*67/2);
            
        } else if(strcmp(ex, "2") == 0) {
            
            unsigned int prev = 1;
            unsigned int current = 2;
            unsigned int evenSum = 2;
            
            while(current <= 4000000) {
                current = current + prev;
                prev = current - prev;
                if(current % 2 == 0) {
                    evenSum += current;
                }
            }
            printf("%d\n", evenSum);
            
        } else if(strcmp(ex, "3") == 0) {
            
            long number = 600851475143;
            long root = 775146;
            bool primes[775146 + 1];
            long highestPrime = 0;
            
            for(long i = 2; i <= root; i++) {
                if(!primes[i]) {
                    if(number % i == 0) {
                        highestPrime = i;
                    }
                    for(long j = i; j <= root; j += i) {
                        primes[j] = true;
                    }
                }
            }
            
            printf("%ld\n", highestPrime);
            
        } else if(strcmp(ex, "4") == 0) {
            
            int i = 999;
            long max = 0;
            while (i > 111) {
                int j = 999;
                while (j > 111) {
                    int num = i*j;
                    string s;
                    stringstream out;
                    out << num;
                    s = out.str();
                    bool palindrome = true;
                    for (int k = 0; k <= s.length() / 2; k++) {
                        palindrome = palindrome && s.at(k) == s.at(s.length()-1-k);
                    }
                    if(palindrome && num > max) {
                        max = num;
                    }
                    j--;
                }
                i--;
            }
            printf("%ld\n", max);
            
        } else if(strcmp(ex, "5") == 0) {
            
            printf("%d\n", 2*2*2*2*3*3*5*7*11*13*17*19);
            
        } else if(strcmp(ex, "6") == 0) {
            
            int tot = 0;
            for(int i = 1; i <= 100; i++) {
                for(int j = 1; j <= 100; j++) {
                    tot += i == j ? 0 : i*j;
                }
            }
            
            printf("%d\n", tot);
            
        } else if(strcmp(ex, "7") == 0) {
            bool primes [1000000];
            int numPrime = 0;
            for(long i = 2; i < 1000000; i++) {
                if(!primes[i]) {
                    numPrime++;
                    if(numPrime == 10001) {
                        printf("%ld\n", i);
                        break;
                    }
                    for(long j = i; j < 1000000; j += i) {
                        primes[j] = true;
                    }
                }
            }
            
        }
    }
}



