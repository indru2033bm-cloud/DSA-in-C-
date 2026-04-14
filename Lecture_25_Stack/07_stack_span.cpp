#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void spanofstock(vector<int> stack, vector<int> &span){
    std::stack<int> st;
    st.push(0);
    span[0] = 1;
    for(int i = 1; i < stack.size(); i++){
        while(!st.empty() && stack[st.top()] <= stack[i]){
            st.pop();
        }
        // if(st.empty()){
        //     span[i] = i + 1;
        // }
        // else{
        //     span[i] = i - st.top();
        // }
        span[i] = st.empty() ? i + 1 : i - st.top();
        st.push(i);
    }
    for(int i = 0 ; i < span.size() ; i++){
        cout << span[i] << " ";
    }


}
int main(){
vector<int> stock = {100, 80 ,60 ,70 ,60 ,85 ,100};
vector<int> span(stock.size());
spanofstock(stock, span);
return 0;
}