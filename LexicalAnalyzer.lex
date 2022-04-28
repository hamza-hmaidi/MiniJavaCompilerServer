%{
     #include <stdio.h>	
     #include <stdlib.h>	
     #include <string.h>
     #define YYSTYPE char*

     #include "SyntaxAnalyzer.tab.h"	                                                                         	
     #include <math.h>	
     

     int line = 1;
%}

delim                                   ([ \t]|(" "))
bl                                      {delim}+
bl0                                     {delim}*
numberN                                 [0-9]
numberNN                                [1-9]
lettre                                  [a-zA-Z]

openParentheses                         (\()
closeParentheses                        (\))
openSquareBrackets                      (\[)
closeSquareBrackets                     (\])
openBraces                              (\{)
closeBraces                             (\})
COMMENT_LINE                            "//"

identifier                              ([A-Za-z_][A-Za-z0-9_]*)                                                     
integerLiteral                          ({numberNN}{numberN}*)                                                          
booleanLiteral                          "true"|"false"                                                                 
illegalIdentifier                       {numberN}({lettre}|{numberN})*                                                  

dataType                                {primtiveType}|tableType                                                        
primtiveType                            "int"|"boolean"|"String"|"byte"|"char"|"short"|"long"|"float"|"double"  
tableType                               ({primtiveType}{bl}{openSquareBrackets}{bl0}{closeSquareBrackets})

%%   

{bl}                                    /* pas d'actions */
"\n"                                    line++;

"public"                                { yylval = strdup(yytext); return  _PUBLIC;            }
"static"                                { yylval = strdup(yytext); return  _STATIC;            }
"class"                                 { yylval = strdup(yytext); return  _CLASS;             }
"void"                                  { yylval = strdup(yytext); return  _VOID;              }
"main"                                  { yylval = strdup(yytext); return  _MAIN;              }
"extends"                               { yylval = strdup(yytext); return  _EXTENDS;           }
"return"                                { yylval = strdup(yytext); return  _RETURN;            }
"System.out.println"                    { yylval = strdup(yytext); return  _SOP;               }
"length"                                { yylval = strdup(yytext); return  _LENGTH;            }
"this"                                  { yylval = strdup(yytext); return  _THIS;              }
"new"                                   { yylval = strdup(yytext); return  _NEW;               }

"if"                                    { yylval = strdup(yytext); return  _IF;                }
"else"                                  { yylval = strdup(yytext); return  _ELSE;              }
"while"                                 { yylval = strdup(yytext); return  _WHILE;             }

"int"                                   { yylval = strdup(yytext); return  _INTEGER;           }
"String"                                { yylval = strdup(yytext); return  _STRING;            }
{dataType}                              { yylval = strdup(yytext); return  _DATATYPE;          }

{openParentheses}                       { yylval = strdup(yytext); return  _OPENPARENT;        }
{closeParentheses}                      { yylval = strdup(yytext); return  _CLOSEPARENT;       }
{openSquareBrackets}                    { yylval = strdup(yytext); return  _OPENSQRBRACK;      }
{closeSquareBrackets}                   { yylval = strdup(yytext); return  _CLOSESQRBRACK;     }
{openBraces}                            { yylval = strdup(yytext); return  _OPENBRAC;          }
{closeBraces}                           { yylval = strdup(yytext); return  _CLOSEBRAC;         }

"&&"                                    { yylval = strdup(yytext); return  _AND;               }
"||"                                    { yylval = strdup(yytext); return  _OR;                }

"."                                     { yylval = strdup(yytext); return  _DOT;               }
";"                                     { yylval = strdup(yytext); return  _SEMICOLON;         }
","                                     { yylval = strdup(yytext); return  _COMMA;             }
"\""                                    { yylval = strdup(yytext); return  _DOUBLEQUOTE;       }
"\'"                                    { yylval = strdup(yytext); return  _SINGLEQUOTE;       }

"+"                                     { yylval = strdup(yytext); return  _PLUS;              }
"-"                                     { yylval = strdup(yytext); return  _MINUS;             }
"*"                                     { yylval = strdup(yytext); return  _MULTIPLY;          }
"!"                                     { yylval = strdup(yytext); return  _NOT;               }
"="                                     { yylval = strdup(yytext); return  _EQUAL;             }
"\/"                                    { yylval = strdup(yytext); return  _DIV;               }

"<"|">"|"<="|">="|"=="|"!="             { yylval = strdup(yytext); return  _COMPOP;            }


 
{booleanLiteral}                        { yylval = strdup(yytext); return  _BOOLVALUE;         }
{integerLiteral}                        { yylval = strdup(yytext); return  _INTEGERVALUE;      }
{identifier}                            { yylval = strdup(yytext); return  _IDENT;             }
{illegalIdentifier}                     { printf("\nLEXICAL ERROR on character %d (line %d): Illegal Identifier\n\n", yytext[0], line);   }

\/\/.*                                  {   /* skip */   }

"/*"                                    {
                                             int isComment = 1;
                                             char c;
                                             while(isComment) {
                                                  c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') isComment = 0;
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') line++;
                                                  else if(c == EOF) {
                                                       printf("\nLEXICAL ERROR (line %d): Unterminated comment", line);
                                                       isComment = 0;
                                                  }
                                             }
                                        }

"*\/"                                 { yylval = strdup(yytext); printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

.                                     { yylval = strdup(yytext); printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

%%

int yywrap()
{
	return(1);
}
