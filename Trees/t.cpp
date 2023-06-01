
#include <iostream>
#include <stack>
 
int main()
{
    std::stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
 
    std::stack<int> stk_copy(stk);
    while(!stk_copy.empty()) {
        std::cout << stk_copy.top() << std::endl;
        stk_copy.pop();
    }
 
    return 0;
}
