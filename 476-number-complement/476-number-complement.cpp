class Solution {
public:
    int findComplement(int num) {
          int bit;
    int c = 0;
    for(int i = 0; num > 0;i++){
        bit = num & 1;
        if(bit == 0) c |= ( 1 << i);
        num >>= 1;
    }
    
    return c;
}
};