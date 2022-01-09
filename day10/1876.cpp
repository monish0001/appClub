class Solution {
public:
    bool isunique(string subStr){
    if(subStr[0]==subStr[1]||subStr[0]==subStr[2]|subStr[1]==subStr[2]){
        return 0;
    }
    return 1;
}
    int countGoodSubstrings(string str) {
         if(str.size()<3) return 0;
         int count=0;
    for (int i = 0; i <=str.size()-3; i++)
    {
        string subStr=str.substr(i,3);
        if(isunique(subStr)){
            count++;
        }
    }
    return count;
    }
};