#include<bits/stdc++.h>
class solution {
  public :
    bool palindromeNum (int r){
      if(r < 0 || r%10==0&&r!=0){
        int reverseHalf = reverseHalf*10 + r%10;
        r/=10;
      }
  return r == reverseHalf || r == reverseHalf/10;
  }
}
