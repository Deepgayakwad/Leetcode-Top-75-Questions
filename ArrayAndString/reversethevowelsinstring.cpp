class Solution {
public:

    bool isVowel(char ch){
        ch=tolower(ch);


        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    string reverseVowels(string s) {
        int n=s.size();
        //  vector<char>c;
        // for(int i=0;i<n;i++){
        //     c.push_back(s[i]);
        // }


        // take a left pointer and right pointer 
        int left=0;
        int right=n-1;

        while(left<=right){
            if(isVowel(s[left]) && !isVowel(s[right])){
                right--;
            }
            else if(!isVowel(s[left]) && isVowel(s[right])){
                left++;
            }
            else if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        // string name="";
        // for(int k=0;k<c.size();k++){
        //     name+=c[k];
        // }

        // return name;
        return s;
    }
};