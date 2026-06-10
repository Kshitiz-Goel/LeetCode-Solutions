class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(),wordList.end());
        queue<string> todo;
        todo.push(beginWord);
        int ladder = 1;
        while(!todo.empty()){
            int n = todo.size();
            for(int i=0;i<n;i++){
                string word = todo.front();
                if(word == endWord){
                    return ladder;
                }
                todo.pop();
                words.erase(word);
                for(int j=0;j<word.size();j++){
                    char c= word[j];
                    for(int k=0;k<26;k++){
                        word[j]='a'+k;
                        if(words.find(word)!=words.end()){
                            todo.push(word);
                        }
                    }
                    word[j]=c;
                }
            }
            ladder++;
        }
        return 0;
    }
};