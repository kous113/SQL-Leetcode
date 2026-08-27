class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> a;
        for(int i=0;i<s.length();i++){
            if(a.empty()){
                a.push(s[i]);
                continue;
            }
            else if(a.top()==s[i]){
                a.pop();
                continue;
            }
            a.push(s[i]);
        }
        string res="";
        while(!a.empty()){
            res=res+a.top();
            a.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};