#include <bits/stdc++.h>

using namespace std;

bool match(string virus, string pattern) {
  int lstart = ((int)virus.size()) - ((int)pattern.size());
  for (int start = 0; start <= lstart; start++) {
    bool ok = true;
    for (int pos = 0; pos < pattern.size(); pos++) {
      if (pattern[pos] == '*') continue;
      if (pattern[pos] != virus[pos+start]) {
        ok = false;
        break;
      }
    }
    if (ok)
      return true;
  }
  return false;
}

bool checkADN(string ADN){
    string pattern = "ACGT*";
    for (int i = 0; i < ADN.size(); i++){
        bool flag = false;
        for (int j = 0; j < 5; j++){
            if (ADN[i] == pattern[j]){
                flag = true;
            }
        }
        if (!flag)return false;
    }
    return true;
}

int main(){
    int nSets, nPatterns, nViruses;
    cin >> nSets;
    for(int s = 1; s <= nSets; s++){

        cout << "Data set #" << s << ":\n";

        string patterns[30];
        cin >> nPatterns;
        assert(nPatterns <= 30 && nPatterns >= 1);
        for(int p = 0; p < nPatterns; p++){
            cin >> patterns[p];
            assert(checkADN(patterns[p]));
            assert(patterns[p].size() <= 20 && patterns[p].size() >= 1);
        }

        cin >> nViruses;
        assert(nViruses >= 1 && nViruses <= 100);
        for(int v = 1; v <= nViruses; v++){
            cout << "Virus #" << v << ": ";
            string virus;
            cin >> virus;
            assert(virus.size() <= 200 && virus.size() >= 1);
            bool matched = false;
            for(int p = 0; p < nPatterns; p++){
                if(match(virus, patterns[p])){
                    cout << "Nuts. This virus is illegal in Hawaii!\n";
                    matched = true;
                    break;
                }
            }
            if (!matched) cout << "Cool! Victor can take it with him!\n";
        }
        cout << "\n";
    }
}