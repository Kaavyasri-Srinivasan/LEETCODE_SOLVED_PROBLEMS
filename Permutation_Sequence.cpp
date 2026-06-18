using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>num;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        stringstream ss;
        for(int val: num){
            ss<<val;
        }
        string s;
        ss>>s;
        vector<string> store;
        do{
            store.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        return store[k-1];
    }
};
