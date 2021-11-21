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
        //sort(s.begin(),s.end());
        cout<<s<<"\n";
        vector< pair <int, string> > vect;
        int minlen = INT_MAX;
        for(int i=0;i<words.size();i++){
            string str = words[i];
            string newstr = str;
            int c = 0;
            for(int j=0;j<s.length();j++){
                for(int k=0;k<str.length();k++){
                    if(s[j]==str[k]){
                        str[k] = '0';
                        c++;
                        continue;
                    }
                }
            }
            if(c==s.length()){
                vect.push_back({str.length(),newstr});
            }
            //cout<<c<<"\n";
        }
        sort(vect.begin(),vect.end());
        return vect[0].second;
    }
};