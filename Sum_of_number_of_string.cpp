//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int ans = 0;
    	string temp = "";
        for(int i = 0; i<str.length(); i++){
            if(str[i]>='0' && str[i]<='9'){
                temp = temp + str[i];
            }
            else{
                if(temp!=""){
                    ans = ans + stoi(temp);
                }
                
                temp = "";
            }
        }
        if(temp!=""){
            ans = ans + stoi(temp);
        }
        
    	return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
