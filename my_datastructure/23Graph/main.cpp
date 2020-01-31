#include <iostream>

#define MAX_VERTS 20

using namespace std;

class Vertex
{
public:
    Vertex(char lab) {Label = lab;}

private:
    char Label;
};

class Graph
{
public:
    Graph();
    ~Graph();
    void addVertex(char lab);//增加一个顶点
    void addEdge(int start, int end);//增加一条边
    void printMatrix();

private:
    Vertex* vertexList[MAX_VERTS];//最多保存20个顶点
    int nVerts;//顶点数
    int adjMat[MAX_VERTS][MAX_VERTS];
};

Graph::Graph()//将顶点数和数组都置为零
{
    nVerts = 0;
    for(int i=0; i<MAX_VERTS; i++)
        for(int j=0; j<MAX_VERTS; j++)
            adjMat[i][j] = 0;
}

void Graph::addVertex(char lab)
{
    //增加一个新的顶点 new必须有相对应的delete
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

    system("pause");
    return 0;
}
