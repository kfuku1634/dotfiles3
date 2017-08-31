" Place this file in ~/.vim/after/syntax directory.

syn match cOpenParen "?=(" contains=cParen,cCppParen
syn match cFunc      "\w\+\s*(\@=" contains=cOpenParen

hi def link cFunc Function