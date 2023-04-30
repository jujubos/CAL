#include "compiler.h"
#include "lexer.h"
#include <iostream>
#include "error.h"

/*
	编译参数初始化
*/
bool Args::showChar=false;
bool Args::showToken=false;
bool Args::showSym=false;
bool Args::showIr=false;
bool Args::showOr=false;
bool Args::showBlock=false;
bool Args::showHelp=false;
bool Args::opt=false;

/*
	编译一个文件
*/
void Compiler::compile(char*file)
{
	//准备
	Scanner scanner(file); //扫描器
  Lexer lexer(scanner);
  Error error(&scanner);
  

  return;
}
