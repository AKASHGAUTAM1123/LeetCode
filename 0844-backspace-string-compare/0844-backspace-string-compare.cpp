class Solution {
public:
    string process(string s){
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(s[i]);
            }   
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool backspaceCompare(string s, string t) {
        string a = process(s);
        string b = process(t);

        return a==b;
    }
};