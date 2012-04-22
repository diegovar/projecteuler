#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

void euler1() {
    printf("%d\n", 3*333*334/2 + 5*199*200/2 - 15*66*67/2);
}

void euler2() {
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
}

void euler3() {
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

}

void euler4() {
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

void euler5() {
    printf("%d\n", 2*2*2*2*3*3*5*7*11*13*17*19);
}

void euler6() {
    int tot = 0;
    for(int i = 1; i <= 100; i++) {
        for(int j = 1; j <= 100; j++) {
            tot += i == j ? 0 : i*j;
        }
    }
    
    printf("%d\n", tot);
}

void euler7() {
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

void euler8() {
    unsigned int nums [] = {7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,9,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0};
    
    unsigned int max = 0;
    
    for (int i = 0; i < 1000 - 5; i++) {
        unsigned int num = nums[i]*nums[i+1]*nums[i+2]*nums[i+3]*nums[i+4];
        if(num > max)
            max = num;
    }
    printf("%d\n", max);
}

void euler9() {
    bool found;
    for (int i = 1; i <= 1000 && !found; i++) {
        for (int j = 1; j <= 1000 && !found; j++) {
            float root = sqrt(i*i+j*j);
            if(floor(root) == root && i + j + root == 1000) {
                found = true;
                printf("(%d, %d, %f). Product = %f\n", i, j, floor(root), i*j*root);
            }
        }
    }
}

void euler10() {
    int max = 2000000;
    bool primes [max];
    for (int i = 0; i < max; i++) {
        primes[i] = false;
    }
    long long sum = 0;
    long count = 0;
    for(int i = 2; i < max; i++) {
        if(!primes[i]) {
            sum += i;
            count++;
            for(int j = i; j < max; j += i) {
                primes[j] = true;
            }
        }
    }
    printf("count: %ld, sum: %lld\n", count, sum);
}

int main(int argc, char** argv) {
    if(argc > 1) {
        char * ex = argv[1];
        
        if(strcmp(ex, "1") == 0) {
            euler1();
        } else if(strcmp(ex, "2") == 0) {
            euler2();
        } else if(strcmp(ex, "3") == 0) {
            euler3();            
        } else if(strcmp(ex, "4") == 0) {
            euler4();
        } else if(strcmp(ex, "5") == 0) {
            euler5();
        } else if(strcmp(ex, "6") == 0) {
            euler6();
        } else if(strcmp(ex, "7") == 0) {
            euler7();
        } else if(strcmp(ex, "8") == 0) {
            euler8();
        } else if(strcmp(ex, "9") == 0) {
            euler9();
        } else if(strcmp(ex, "10") == 0) {
            euler10();
        }
    }
}
