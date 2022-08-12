class Solution {
public:
    string defangIPaddr(string address) {
        string ans ="";
        for(int i = 0; i<address.length(); i++){
            if(address[i]!='.'){
                ans = ans + address[i];
            }
            else{
                ans = ans + "[.]";
            }
        }
        return ans;
    }
};
