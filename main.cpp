#include "compiler.h"
#include <iostream>
#include <cstring>
#include <vector>

int main(int argc,char *argv[])
{
	vector<char*> srcfiles;//源文件
	if(srcfiles.size()){//存在源文件
		Compiler compiler;
		for(int i=0;i<srcfiles.size();i++){
			compiler.compile(srcfiles[i]);
		}
		cout<<"编译结束" << endl;
	}
	return 0;
}
