class Solution {
public:
   int romanToInt(string s) {
     int m[7]={1,5,10,50,100,500,1000};
        int sum=0;
        int j=0,k=0;
        if(s.length()==1)
        {
            // int j=0;
         sum=0;
            if(s[0]=='I')
                j=0;
            if(s[0]=='V')
                j=1;
            if(s[0]=='X')
                j=2;
            if(s[0]=='L')
                j=3;
            if(s[0]=='C')
                j=4;
            if(s[0]=='D')
                j=5;
            if(s[0]=='M')
                j=6;

            sum+=m[j];
        }
        else{
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='I')
                j=0;
            if(s[i]=='V')
                j=1;
            if(s[i]=='X')
                j=2;
            if(s[i]=='L')
                j=3;
            if(s[i]=='C')
                j=4;
            if(s[i]=='D')
                j=5;
            if(s[i]=='M')
                j=6;
            if(s[i+1]=='I')
                k=0;
            if(s[i+1]=='V')
                k=1;
            if(s[i+1]=='X')
                k=2;
            if(s[i+1]=='L')
                k=3;
            if(s[i+1]=='C')
                k=4;
            if(s[i+1]=='D')
                k=5;
            if(s[i+1]=='M')
                k=6;
            if(j<k)
                sum-=m[j];
            else sum+=m[j];
        }
        sum+=m[k];
        }
        return sum;
    }
};