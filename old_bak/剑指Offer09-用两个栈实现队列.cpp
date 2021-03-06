#include<iostream>
#include<stack>
using namespace std;
/*两个栈要来回折腾,有点麻烦,评论区应该有简单做法*/

class CQueue {
public:
    CQueue() {

    }
    void appendTail(int value) {
        int i = 0;
        int sout_size = this->m_Sout.size();
        for (i = 0; i < sout_size; ++i) {
            this->m_Sin.push(m_Sout.top());
            this->m_Sout.pop();
        }
        m_Sin.push(value);
    }

    int deleteHead() {
        int i = 0;
        int ret = 0;
        int sin_size = this->m_Sin.size();
        for (i = 0; i < sin_size; ++i) {
            this->m_Sout.push(m_Sin.top());
            this->m_Sin.pop();
        }
        if (!this->m_Sout.empty()) {
            ret = this->m_Sout.top();
            this->m_Sout.pop();
            return ret;
        }
        else
            return -1;
    }
private:
    stack<int> m_Sin;
    stack<int> m_Sout;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
#if 0
int main(int argc, char* argv[]) {
    CQueue* cq = new CQueue();
    cq->appendTail(1);
    cq->appendTail(2);
    cq->appendTail(3);
    cq->appendTail(4);

    cout << cq->deleteHead() << endl;
    cq->appendTail(5);
    cout << cq->deleteHead() << endl;
    cout << cq->deleteHead() << endl;
    cout << cq->deleteHead() << endl;
    cout << cq->deleteHead() << endl;

    delete(cq);

    return 0;
}
#endif

