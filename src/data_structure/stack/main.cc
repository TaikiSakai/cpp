#include <iostream>
#include <stack>
#include <string>
#include <queue>


int main() {
    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    std::cout << "Queue size: " << q.size() << std::endl; 
 
    std::cout << q.front() << std::endl;

    std::cout << q.back() << std::endl;

    q.pop();

    std::cout << q.size() << std::endl;
    std ::cout << q.front() << std::endl;
}