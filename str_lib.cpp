#include "str_lib.h"

void getter(string* lines, int n){
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, lines[i]);
    }
}

void counter(int* ASCII, string* lines, int n){
    int count=0;
    char BL[15];
    for(int i=0; i<n; i++){
        for(int j=0; j<lines[i].length(); j++){
            ASCII[(int)lines[i][j]]++;
        }
    }
    cout<<count<<endl;
    cout<<"Symbols which would be deleted: "<<endl;
    for(int i=0; i<128; i++){
        if(ASCII[i]>=5) {
            cout<<(char) i<<" - "<<ASCII[i]<<endl;
            BL[count]=(char)i;
            count++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<lines[i].length(); j++){
            bool to_erase=false;
            for(int k=0; k<count; k++){
                if(lines[i][j]==BL[k]){
                    to_erase=true;
                }
            }
            if(to_erase){
                lines[i].erase(j, 1);
                j--;
            }
            to_erase=false;
        }
    }
}

void outer(string* lines, int n){
    for(int i=0; i<n;i++){
        cout<<lines[i]<<endl;
    }
}

