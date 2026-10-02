#include <bits/stdc++.h>
class Solution {
public:
    int countDigit(int n) {
        long long num = llabs((long long)n);
        if(num == 0){
            return 1;
        }
        int cnt = 0;
        while(num>0){
            num/=10;
            cnt ++;
        }
        return cnt;
    }
};
