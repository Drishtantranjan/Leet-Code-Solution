class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int res = 0; 
        for(auto i:ops){
            if(i == "+"){
                int x = st.top();   st.pop();
                int y = st.top();              
                st.push(x);
                st.push(x+y);
            }
            else if(i == "D"){
                st.push(st.top()*2);
            }
            else if(i == "C")
                st.pop();
            else
                st.push(stoi(i));
        }
        
        while(st.size()>0){
            res += st.top();
            st.pop();
        }
        return res;
    }
};