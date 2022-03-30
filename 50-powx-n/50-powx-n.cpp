class Solution {
public:
    
    double power(double x, int n)
    {
        if (n==0) return 1;
        else if (n==1) return x;
        
        double half = myPow(x, n/2);
        return (n%2) ? half*half*x : half* half;  
    }
    
    double myPow(double x, int n) {
        double res = power(x, abs(n));
        return (n<0) ? 1/res : res;
    }
};