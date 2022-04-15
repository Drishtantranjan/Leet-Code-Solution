class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) { vector<int> vect(26) ;
    for(auto c : magazine)
    {
        vect[c-'a']++;
        
    }
      for(auto c : ransomNote)
    {
        vect[c-'a']--;
          if(vect[c-'a'] < 0)   
              return false;
        
    }
    
    return true;
    
}
};