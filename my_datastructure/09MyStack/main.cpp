#include <iostream>
#include "MyUtil.h"
#include "MyStack.h"

using namespace std;

int main()
{
    cout << "Test!" << endl;
    MyStack<int> st;

    st.Push(99);
    st.Push(22);
    st.Push(18);
    st.Push(67);
    cout<<st.Top()<<endl;
    st.Pop();
    cout<<st.Top()<<endl;
    st.Pop();
    cout<<st.Top()<<endl;

    return 0;
}
