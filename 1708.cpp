#include <cstdio>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

const int MAX =10000;

struct Point{
    int x,y;//실제위치
    int p,q;//상대위치

    Point() : Point(0,0,1,0){}
    Point(int x1,int y1):Point(x1,y1,1,0){}
    Point(int x1,int y1,int p1,int q1):x(x1),y(y1),p(p1),q(q1){}

    bool operator < (const Point& poi){
        if(1LL*q*poi.p != 1LL*poi.q*p) return 1LL*q*poi.p < 1LL *poi.q*p;
        if(y!=poi.y) return y<poi.y;
        return x<poi.x;
    }
};

long long ccw(const Point& A, const Point& B,const Point& C){
    return 1LL*(B.x-A.x) * (C.y-A.Y) - 1LL*(B.y-A.y)*(C.x-A.x);
};

int main(){
    int N;
    scanf("%d",&N);
    Point p[MAX];
    for(int i=0;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        p[i] = Point(x,y);
    }

    sort(p,p+N);

    for(int i=0;i<N;i++){
        p[i].p = p[i].x - p[0].x;
        p[i].q = p[i].y - p[0].y;
    }
    sort(p,p+N);

    stack<int> S;

    S.push(0);
    S.push(1);
    int next=2;

    while(next<N){

        while(S.size()>=2){
            int first,second;
            first = S.top();
            S.pop();
            second = S.top();

            if(ccw(p[second],p[first],p[next])>0){
                S.push(first);
                break;
            }
        }

        S.push(next++);
    }

    printf("%d\n",S.size());
};