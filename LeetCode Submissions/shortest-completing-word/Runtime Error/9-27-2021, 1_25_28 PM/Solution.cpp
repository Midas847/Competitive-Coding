// https://leetcode.com/problems/shortest-completing-word

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        //vector<char> s;
        string s;
        for(int i=0;i<licensePlate.length();i++){
            if((licensePlate[i] >= 'a' && licensePlate[i] <= 'z' )||( licensePlate[i] >= 'A' && licensePlate[i] <= 'Z' )){
                //s.push_back(tolower(licensePlate[i]));
                s+=tolower(licensePlate[i]);
                        }
            }
        sort(s.begin(),s.end());
        vector< pair <int, string> > vect;
        int minlen = INT_MAX;
        for(int i=0;i<words.size();i++){
            string str = words[i];
            string newstr = str;
            sort(str.begin(),str.end());
            //cout<<str<<" ";
            int c = 0;
            for(int j=0;j<str.length();j++){
                string m = str.substr(j,s.size());
                if(m==s)
                    //cout<<m<<"\n"; 
                    vect.push_back({str.length(),newstr});
                }
            }
        sort(vect.begin(),vect.end());
        return vect[0].second;
    }
};