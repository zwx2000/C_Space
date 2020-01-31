#include <iostream>

using namespace std;

void Permutations(char *p, const int k, const int m)
{
    if(k==m)
    {
        for(int i=0; i<=m; i++)
            cout<<p[i];
        cout<<endl;
    }
    else
    {
        for(int i=k; i<=m; i++)
        {
            swap(p[k],p[i]);
            Permutations(p,k+1,m);
            swap(p[k],p[i]);
        }
    }


//    //a开头 后面跟bc的所有排列
//    swap(p[0],p[0]);
//    Permutations(p,1,2);
//    swap(p[0],p[0]);
//    //b开头.....
//    swap(p[0],p[1]);
//    Permutations(p,1,2);
//    swap(p[0],p[1]);
//    //c.....
//    swap(p[0],p[2]);
//    Permutations(p,1,2);
//    swap(p[0],p[2]);
}

int main()
{
    char s[] = "abc";
    Permutations(s,0,2);
    system("pause");
    return 0;
}
