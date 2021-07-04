class Solution {
public:
    int num = 0;
    int romanToInt(string s) {
        
        while(s.size() > 0)
        {   
            cout<<s.back();
            switch(s.back()) {
                case 'M':
                    if (s.size() > 1) {
                        if(s.at(s.size() - 2) == 'C') {
                            num = num + 900;
                            s.pop_back();
                        }
                        else {
                            num = num + 1000;
                        }
                    }
                    else {
                        num = num + 1000;
                    }
                    break;
                case 'D':
                    if (s.size() > 1) {
                        if(s.at(s.size() - 2) == 'C') {
                            num = num + 400;
                            s.pop_back();
                        }
                        else {
                            num = num + 500;
                        }
                    }
                    else {
                        num = num + 500;
                    }
                    break;
                case 'C':
                    if (s.size() > 1) {
                        if(s.at(s.size() - 2) == 'X'){
                            num = num + 90;
                            s.pop_back();
                        } 
                        else {
                            num = num + 100;
                        }
                    }
                    else {
                        num = num + 100;
                    }
                    break;
                case 'L':
                    if (s.size() > 1) {
                        if (s.at(s.size() - 2) == 'X'){
                            num = num + 40;
                            s.pop_back();
                        }
                        else {
                            num = num + 50;
                        }
                    }
                    else {
                        num = num + 50;
                    }
                    break;
                case 'X':
                    if (s.size() > 1){
                        if(s.at(s.size() - 2) == 'I') {
                            num = num + 9;
                            s.pop_back();
                        }
                        else {
                            num = num + 10;
                        }
                    }    
                    else {
                        num = num + 10;
                    }
                    break;
                case 'V':
                    if (s.size() > 1) {
                        cout<<"here";
                        if(s.at(s.size() - 2) == 'I') {
                            num = num + 4;
                            s.pop_back();
                        }
                        else {
                            num = num + 5;
                        }
                    }
                    else {
                        num = num + 5;
                    }
                    break;
                case 'I':
                    num = num + 1;
                    break;
                default:
                    // break;
                    s.pop_back();
                    continue;
                    
            }
            s.pop_back();
        }
        return num;
    }
};