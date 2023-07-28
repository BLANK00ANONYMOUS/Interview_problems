#include <bits/stdc++.h>
    
using namespace std;
    
#define endl                       '\n'
#define mod                        1000000007
#define span(a)                    begin(a), end(a)
#define ps(x)                      fixed << setprecision(8) << (x);
#define int                        long long
#define ll                         long long
#define inf                        1e18
    
template<class T>
ostream &operator<<(ostream &out, const vector<T> &v) {
    for (int i = 0, n = (int) v.size(); i < n; ++i) {
        if (i) out << ' ';
        out << v[i];
    }
    return out << "\n";
}
    
template<class T>
ostream &operator<<(ostream &out, const vector<vector<T>> &M) {
    for (int i = 0, n = (int) M.size(); i < n; ++i) {
        for (int j = 0, m = (int) M[i].size(); j < m; ++j) {
            if (j) out << " ";
            out << M[i][j];
        }
        out << "\n";
    }
    return out;
}
    
int ceil_div(int a, int b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

class Node {
public:
    int data;
    Node *next;
    Node(int data) {

        this->data = data;
        this->next = NULL;
    }
};

Node *getListAfterAddingNodes(Node *head, int k)
{
    if (!head)
    {
        return NULL;
    }
    int sum = 0;
    int cnt = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        cnt++;
        sum += temp->data;
        if (cnt == k)
        {
            Node *toInsert = new Node(sum);
            toInsert->next = temp->next;
            temp->next = toInsert;
            cnt = 0;
            sum = 0;
            temp = temp->next;
        }
        temp = temp->next;
    }
    sum += temp->data;
    Node *toInsert = new Node(sum);
    temp->next = toInsert;
    return head;
}

void solve() {
    Node* head = new Node(1);
    
}
    
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    cout << '\n';
    cout << "Output\n";
#endif
   
    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    cout << endl;
    return 0;
}