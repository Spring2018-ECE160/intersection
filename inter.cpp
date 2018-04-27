#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
        vector<int> s{0, 1, 2, 3, 4, 5};
        vector<int> c{3, 5, 7, 9, 10, 22, 33};

        for (int i = 0; i < c.size(); i++)
        {
        auto check = find(begin(s), end(s), c[i]);
        if (check != end(s)) {
                cout << "intersect element "<< c[i] << endl;
                
                }
        }
}
