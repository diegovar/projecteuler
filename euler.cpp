#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    if(argc > 1) {
        char * ex = argv[1];

        if(strcmp(ex, "0") == 0) {
            
            printf("%d\n", 3*333*334/2 + 5*199*200/2 - 15*66*67/2);
            
        } else if(strcmp(ex, "1") == 0) {
            
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
            
        } else if(strcmp(ex, "2") == 0) {
            
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
            
        } else if(strcmp(ex, "3") == 0) {
            
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
        }
    }
}