#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map> 
#include <set>
using namespace std;
// typedef tuple<int, int, int> tuples; 
// typedef pair<int, int> pairs; 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    set<tuple<int, int, int>> points; 
    int N;
    cin >> N;

    for (int i=1;i<=N;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        tuple<int, int, int> x = make_tuple(a, b, c); 
  
        // inserts into the set 
        points.insert(x);
    }

    int answer = 0;

    for(auto i=points.begin(); i!=std::prev(points.end()); i++)
    {
        for(auto j=std::next(i); j!=points.end(); j++)
        {
            tuple<int, int, int> p1 = *i;
            tuple<int, int, int> p2 = *j;
            pair<int, int> p3 = make_pair(get<0>(p1), get<1>(p2));
            pair<int, int> p4 = make_pair(get<0>(p2), get<1>(p1));
            auto it3 = std::find_if( points.begin(), points.end(), [&p3](const tuple<int, int, int>& element){ return (get<1>(element) == p3.second && get<0>(element) == p3.first);} );
            auto it4 = std::find_if( points.begin(), points.end(), [&p4](const tuple<int, int, int>& element){ return (get<1>(element) == p4.second && get<0>(element) == p4.first);} );
            if(it3 != points.end() && it4!= points.end()&& it3 !=i&&it3 !=j&&it4 !=i&&it4 !=j) {
                
                int c[4];
                tuple<int, int, int> p3 = *it3;
                tuple<int, int, int> p4 = *it4;
                c[0] = get<2>(p1);
                c[1] = get<2>(p2);
                c[2] = get<2>(p3);
                c[3] = get<2>(p4);
                sort(c,c+4);
                if(c[0]==1 && c[1]==2 && c[2]==3 && c[3]==4) {
                    ++answer;
                    // cout<<"Hinh Chu Nhat"<<"\n";
                    // cout <<get<0>(p1) <<" "<< get<1>(p1) << "\n";
                    // cout <<get<0>(p2) <<" "<< get<1>(p2) << "\n";
                    // cout <<get<0>(p3) <<" "<< get<1>(p3) << "\n";
                    // cout <<get<0>(p4) <<" "<< get<1>(p4) << "\n";
                }



            }
        }
    }

    cout << answer/2;

    return 0;
}