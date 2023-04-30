#pragma once

#include "lexer.h"
#include "token.h"

class Parser {
  Lexer lex;
  Token* look;  
  void program();
  void segment();
  void type();
  void def();
  void init();
  void deflist();
  void idtail();
  void expr();
  void defdata();
  void deflist();
  void varrdef();
  bool F();
public:
  void parse();
  bool match(Tag t);
  void move();
};