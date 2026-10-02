#include <bits/stdc++.h>
class Solution {
public:
    int countOddDigit(int n) {
        long long num = llabs((long long)n);
        int cnt = 0;
        if(num==0)
        return 0;
        while (num>0){
            int digit = num%10;
            if(digit %2!=0){
                cnt ++;
            }
            num/=10;
        }
    return cnt;
    }
};
