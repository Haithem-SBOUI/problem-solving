#include<bits/stdc++.h>
using namespace std;

class BrowserHistory {
public:
    stack<string> f, b;

    BrowserHistory(string homepage) {
        b.push(homepage);
    }
    
    void visit(string url) {
        b.push(url);
        f = stack<string>(); 
    }
    
    string back(int steps) {
        int i = min<int>(b.size() - 1, steps);
        while (i--) {
            f.push(b.top());
            b.pop();
        }
        return b.top();
    }
    
    string forward(int steps) {
        int i = min<int>(f.size(), steps);
        while (i--) {
            b.push(f.top());
            f.pop();
        }
        return b.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */