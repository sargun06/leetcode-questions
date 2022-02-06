class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> stack;
        for(auto x: s)
        {
            if(x=='(' || x=='[' || x=='{')
                stack.push(x);
            else if(!stack.empty() && ((x==')' && stack.top()=='(') || (x==']' && stack.top()=='[') || (x=='}' && stack.top()=='{')))
                stack.pop();
            else
                stack.push(x);
            
        }
        return stack.empty();
    }
};