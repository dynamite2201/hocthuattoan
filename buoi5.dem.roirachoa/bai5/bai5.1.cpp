#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map> 
#include <set>
using namespace std;
// typedef tuple<int, int, int> tuples; 
// typedef pair<int, int> pairs; 
int A[401][401];




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    set<tuple<int, int, int>> points; 
    int N;
    cin >> N;

    for(int i=0;i<=400;i++) {
        for (int j=0;j<=400;j++) {
            A[i][j]=0;
        }
    }

    for (int i=1;i<=N;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        A[a+200][b+200] = c;
        tuple<int, int, int> x = make_tuple(a+200, b+200, c); 
        points.insert(x);
    }

    int answer = 0;

    for(auto i=points.begin(); i!=std::prev(points.end()); i++)
    {
        for(auto j=std::next(i); j!=points.end(); j++)
        {
            tuple<int, int, int> p1 = *i;
            tuple<int, int, int> p2 = *j;

            int c[4];
            c[0]=get<2>(p1);
            c[1]=get<2>(p2);
            // cout<<c[0] <<" "<<c[1]<<"\n";
            // cout<<"P1: "<<get<0>(p1) <<" "<<get<1>(p1)<<"\n";
            // cout<<"P2: "<<get<0>(p1) <<" "<<get<1>(p1)<<"\n";
            c[2]=A[get<0>(p1)][get<1>(p2)];
            c[3]=A[get<0>(p2)][get<1>(p1)];

            sort(c,c+4);
            // cout<<c[0] <<" "<<c[1] <<" "<<c[2] <<" "<<c[3] <<"\n";
            if(c[0]==1 && c[1]==2 && c[2]==3 && c[3]==4) {
                ++answer;
                // cout<<"Hinh Chu Nhat"<<"\n";
                // cout <<get<0>(p1) <<" "<< get<1>(p1) << "\n";
                // cout <<get<0>(p2) <<" "<< get<1>(p2) << "\n";
                // cout <<get<0>(p1) <<" "<< get<1>(p2) << "\n";
                // cout <<get<0>(p2) <<" "<< get<1>(p1) << "\n";
            }



            
        }
    }

    cout << answer/2;

    return 0;
}