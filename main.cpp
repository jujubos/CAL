#include "compiler.h"
#include <iostream>
#include <cstring>
#include <vector>

int main(int argc,char *argv[])
{
	vector<char*> srcfiles;
  if(argc > 1) {
    for(int i = 1; i < argc; i ++) srcfiles.push_back(argv[i]);
  }
	if(srcfiles.size()){//存在源文件
		Compiler compiler;
		for(int i=0;i<srcfiles.size();i++){
			compiler.compile(srcfiles[i]);
		}
		cout<<"编译结束" << endl;
	}
	return 0;
}
