#ifndef NODETYPE_H
#define NODETYPE_H

// define node type
typedef enum nodeType {
    TOKEN_INT,
    TOKEN_FLOAT,
    TOKEN_ID,
    TOKEN_TYPE,
    // TOKEN_COMMA,
    // TOKEN_SEMI,
    // TOKEN_ASSIGNOP,
    // TOKEN_RELOP,
    // TOKEN_PLUS,
    // TOKEN_MINUS,
    TOKEN_OTHER,
    NOT_A_TOKEN

} Nodetype;
#endif
