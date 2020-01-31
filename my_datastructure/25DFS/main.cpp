#include <iostream>
#include <stack>

#define MAX_VERTS 20

using namespace std;

class Vertex
{
public:
    Vertex(char lab)
    {
        Label = lab;
        wasVisited = false;
    }

public:
    bool wasVisited;
    char Label;
};

class Graph
{
public:
    Graph();
    ~Graph();
    void addVertex(char lab);//����һ������
    void addEdge(int start, int end);//����һ����
    void printMatrix();
    void showVertex(int v);
    void DFS();

private:
    Vertex* vertexList[MAX_VERTS];//��ౣ��20������
    int nVerts;//������
    int adjMat[MAX_VERTS][MAX_VERTS];

    int getAdjUnviistedVertex(int v);
};

void Graph::DFS()
{
    stack<int> gStack;
    vertexList[0]->wasVisited = true;
    showVertex(0);
    gStack.push(0);
    int v;
    while(gStack.size()>0)
    {
        v = getAdjUnviistedVertex(gStack.top());
        if(v==-1)
            gStack.pop();
        else
        {
            vertexList[v]->wasVisited = true;
            showVertex(v);
            gStack.push(v);
        }
    }
    cout << endl;

    for(int j=0; j<nVerts; j++)
        vertexList[j]->wasVisited = false;//Ϊ�˶������
}

int Graph::getAdjUnviistedVertex(int v)
{
    for(int j=0; j<nVerts; j++)
        if((adjMat[v][j]==1)&&(vertexList[j]->wasVisited == false))
            return j;
    return -1;
}

void Graph::showVertex(int v)
{
    cout << vertexList[v]->Label << " ";
}

Graph::Graph()//�������������鶼��Ϊ��
{
    nVerts = 0;
    for(int i=0; i<MAX_VERTS; i++)
        for(int j=0; j<MAX_VERTS; j++)
            adjMat[i][j] = 0;
}

void Graph::addVertex(char lab)
{
    //����һ���µĶ��� new���������Ӧ��delete
    vertexList[nVerts++] = new Vertex(lab);
}

void Graph::addEdge(int start, int end)
{
    adjMat[start][end] = 1;
    adjMat[end][start] = 1;
}

void Graph::printMatrix()
{
    for(int i=0; i<nVerts; i++)
    {
        for(int j=0; j<nVerts; j++)
            cout << adjMat[i][j] << " ";
        cout << endl;
    }
}

Graph::~Graph()
{
    for(int i=0; i<nVerts; i++)
        delete vertexList[i];
}

int main()
{
    Graph g;

    g.addVertex('A');//0
    g.addVertex('B');//1
    g.addVertex('C');//2
    g.addVertex('D');//3
    g.addVertex('E');//4

    g.addEdge(0,1);//A-B
    g.addEdge(0,3);//A-D
    g.addEdge(1,0);//B-A
    g.addEdge(1,4);//B-E
    g.addEdge(2,4);//C-E
    g.addEdge(3,0);//D-A
    g.addEdge(3,4);//D=E
    g.addEdge(4,1);
    g.addEdge(4,2);
    g.addEdge(4,3);

    g.printMatrix();

    cout << "������������Ľ����" << endl;
    g.DFS();

    system("pause");
    return 0;
}
