#pragma once
#include <iostream>

using namespace std;

int drill() 
{
    try {
        int drill_num =0;
        cout << "please enter drill number:" << endl;
        cin >> drill_num;
        // All cases have been commented out due to error messages
        switch(drill_num)
        {
            case 1:
            {
                // 1) "capital C"
                //Cout << "Success!\n";
                break;
            }
            case 2:
            {
                //2) missing "
                //cout << "Success!\n;
                break;
            }
            case 3:
            {
                //3) << and inside brackets and no ;
                //cout << "success"  << !\n";
                break;
            }
            case 4:
            {
                //4) no ""
                //cout << success << '\n';
                break;
            }
            case 5:
            {
                //5) res  cannot be a string
                /*
                string res = 7;
                vector<int>v(10);
                v[5] = res;
                cout << "Success!\n";
                */
                break;
            }
            case 6:
            {
                //6) changesd () - [] and ! =
                vector<int>v(10);
                v[5] = 7;
                if (v[5] != 7)cout << "Success!\n";
                break;
            }
            case 7:
            {
                //7) declare cond
                if(bool cond = true)cout << "Success!\n";
                else cout << "fail!\n";
                break;
            }
            case 8:
            {
                //8) if statement had no condition
                bool c = false;
                if (c == false)
                    cout << "Success!\n";
                else
                    cout << "Fail!\n";
            }
            case 9:
            {
                //9) bool to string change condition in if statement
                string s = "ape";
                string c = "fool" ;
                if (c > s)
                    cout << "Success!\n";
            }
            case 10:
            {
                //10)  changed '=' to '!'
                string s = "ape";
                if (s != "fool")
                    cout << "Success!\n";
            }
            case 11:
            {
                //11) missing < changed = to !
                string s = "ape";
                if (s != "fool")
                    cout << "Success!\n";
            }
            case 12:
            {
                //12) swap + for !=
                string s = "ape";
                if (s != "fool")
                    cout << "Success!\n";
            }
            case 13:
            {
                //13) swap 0 for i
                vector<char>v(5);
                for (int i = 0; i < v.size(); ++i);
                cout << "Success!\n";
            }
            case 14:
            {
                //14) take out =
                vector<char>v(5);
                for (int i = 0; i < v.size(); ++i);
                cout << "Success!\n";
            }
            case 15:
            {
                //15) change 6 to 8
                string s = "Success!\n";
                for (int i = 0; i < 8; ++i)
                    cout << s[i];
            }
            case 16:
            {
                //16) remove "then"
                if (true)
                        cout << "Success!\n";
                else
                    cout << "Fail!\n";
            }
            case 17:
            {
                //17)swap char to int
                int x = 2000;
                int c = x;
                if (c == 2000)
                    cout << "Success!\n";
            }
            case 18:
            {
                //18) swap 10 t0 8
                string s = "Success!\n";
                for (int i = 0; i < 8; ++i)
                    cout << s[i];
            }
            case 19:
            {
                //19)declare <char> and reduce size to 1
                vector<char> v(1);
                for (int i = 0; i < v.size(); ++i)
                    cout << "Success!\n";
            }
            case 20:
            {
                //20)
                int i = 0;
                int j = 9;
                while (i < 10)
                    ++i;
                if (j < i)
                    cout << "Success!\n";
            }
            case 21:
            {
                //21)change int to double and == to >=
                double x = 2;
                double d = 5 / (x - 2);
                if (d >= 2 * x + 0.5)
                    cout << "Success!\n";
            }
            case 22:
            {
                //22)delete <char> and change 10 to 8
                string s = "Success!\n";
                for (int i = 0; i <= 8; ++i)
                    cout << s[i];
            }
            case 23:
            {
                //23) declare j =9 and change j to i and 0 to 10
                int i = 0;
                int j = 9;
                while (i < 10)
                    ++i;
                if (j < i)
                    cout << "Success!\n";
            }
            case 24:
            {
                //24)change int to double
                double x = 4;
                double d = 5 / (x - 2);
                if (d = 2 * x + 0.5)
                    cout << "Success!\n";
            }
            case 25:
            {
                //25)change cin to cout
                cout << "Success!\n";
            }
            default:
            {
                cout << "drill not recognised!" << endl;
            }
            return 0;
        }
    }
    catch (out_of_range) {
        cerr << "Oops! range error\n";
        return 1;
    }
    catch (...) {
        cerr << "Exception: something went wrong\n";
        return 2;
    }
}
