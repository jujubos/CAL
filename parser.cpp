#include "parser.h"
#include "common.h"

void Parser::move() {
  look = lex.tokenize();
}

bool Parser::F() {
  return look->tag == ID;
}

bool Parser::match(Tag t) {
  if (look->tag == t) {
    move();
    return true;
  }
  return false;
}

void Parser::program(){
  if(F() == END) {
    return;
  }
  segment();
  program();  
}


void Parser::segment(){
  match(KW_EXTERN);
  type();
  def();
}

//<type>  ->	rsv_int|rsv_char|rsv_void
void Parser::type(){
  if(look->tag != KW_INT && look->tag != KW_CHAR && look->tag != KW_VOID) {
    //report error
    printf("type() err\n");
  }
}
//<def>					->	mul id <init><deflist>|ident <idtail>
void Parser::def(){}
void Parser::init(){}
void Parser::deflist(){}
void Parser::idtail(){}
void Parser::expr(){}
void Parser::defdata(){}
void Parser::deflist(){}
void Parser::varrdef(){}