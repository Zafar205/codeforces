#include <iostream>
using namespace std;

int main()
{
    string s, out;
    cin >> s;
    out = "";
    for (int i = 0; i < s.size(); ++i)
    {
            // cout << s.substr(i,2)<< " t" <<endl;

            if (s.substr(i, 2) == "-.")
            {   
                // cout << s.substr(i, 2) << "test1" << endl;
                out += "1";
                ++i;
            }
            else if (s.substr(i, 2) == "--")
            {   
                // cout << s.substr(i, 2) << " test2" << endl;
                out += "2";
                ++i;
            }
            else if (s.substr(i, 2) == ".")
                {   
                    // cout << s.substr(i, 2) << "test0" << endl;
                    out += "0";
                }
            else{
                // cout << s.substr(i, 2) << "test0" << endl;
                out += "0";
            }    
            
    }

            

        
    // }
    cout << out << endl;
    return 0;
}