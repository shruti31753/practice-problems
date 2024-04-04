class Solution {
public:
    int maxDepth(string s) {
        int depth=0, open=0;
        for(char c : s){
            if(c == '('){
                open++;
                if(depth < open)
                    depth = open;
            }
            else if(c == ')'){
                open--;
            }
            
        }
        return depth;
    }
};
