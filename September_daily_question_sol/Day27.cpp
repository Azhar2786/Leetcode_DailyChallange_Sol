//!    880. Decoded String at Index



class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long int v = 0;   
        for(int i=0; i<s.length(); i++){
            if(s[i]>='a' and s[i]<='z'){
                v++;
                if(v==k){       // if we find the answer directly return it
                    string a="";
                    a += s[i];
                    return a;
                }
            }
            else{
                long long int dig = s[i]-'0';
                if(v*dig<k) v = v*dig;  // answer is still on the right
                else{   // answer lies in left part
                    k = k%v;    // new value of k
                    if(k==0) k = v; 
                    return decodeAtIndex(s,k);
                }
            }
        }    
        return "Thankyou For Reading";
    }
};