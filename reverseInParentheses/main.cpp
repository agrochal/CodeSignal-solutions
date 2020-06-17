std::string reverseInParentheses(std::string inputString) {
    stack<int> st;

    for(int i=0;i<inputString.length();i++){
        if(inputString[i]=='(') st.push(i);
        else if(inputString[i]==')'){
            int front = st.top()+1;
            int back = i-1;
            while(front<back){
                swap(inputString[front],inputString[back]);
                front++;
                back--;
            }
            st.pop();
        }
    }

    std::string result = "";
    for(char c:inputString){
        if(c=='('||c==')') continue;
        else result += c;
    }
    return result;
}
