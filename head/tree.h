#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>

#include "nodetype.h"

#define TRUE 1
#define FALSE 0

// node type declared
typedef struct node{
	int lineno;	// line no. which node in
	Nodetype type;	// type of node
	char* name;	// name of node
	char* val;	// value of node
	
	struct node* first_child;	// first non-terminal node child
	struct node* brother;	// next non-terminal node brother
} Node;

typedef Node* pNode;

/*
Create a new node
*/
static inline pNode newNode(int lineno, Nodetype type, char* name, int argc, ...){
	pNode curNode = NULL;
	int namelen = strlen(name) + 1;
	
	curNode = (pNode)malloc(sizeof(Node));
	assert(curNode != NULL);
	
	curNode->name = (char*)malloc(sizeof(char)*namelen);
	assert(curNode->name != NULL);
	
	curNode->lineno = lineno;
	curNode->type = type;
	strncpy(curNode->name, name, namelen);
	
	va_list vaList;
	va_start(vaList, argc);
	
	pNode tempNode = va_arg(vaList, pNode);
	
	curNode->first_child = tempNode;
	
	for(int i=1; i<argc; i++){
		tempNode->brother = va_arg(vaList, pNode);
		if(tempNode->brother != NULL){
			tempNode = tempNode->brother;
		}
	}
	
	va_end(vaList);
	return curNode;
}

/*
Create a new leaf(token) node
*/
static inline pNode newTokenNode(int lineno, Nodetype type, char* tokenName, char* tokenText){
	pNode tokenNode = (pNode)malloc(sizeof(Node));
	assert(tokenNode != NULL);
	int namelen = strlen(tokenName) + 1;
	int textlen = strlen(tokenText) + 1;
	
	tokenNode->name = (char*)malloc(sizeof(char)*namelen);
	assert(tokenNode->name != NULL);
	tokenNode->val = (char*)malloc(sizeof(char)*textlen);
	assert(tokenNode->val != NULL);
	
	tokenNode->lineno = lineno;
	tokenNode->type = type;
	strncpy(tokenNode->name, tokenName, namelen);
	strncpy(tokenNode->val, tokenText, textlen);
	
	tokenNode->first_child = NULL;
	tokenNode->brother = NULL;
	
	return tokenNode;	
}

/*
Delete a node
*/
static inline void delNode(pNode node){
	if(node == NULL){
		return;
	}
	
	while(node->first_child != NULL){
		pNode temp = node->first_child;
		node->first_child = temp->brother;
		delNode(temp);
	}
	
	free(node->name);
	free(node->val);
	free(node);
	
	node->name = NULL;
	node->val = NULL;
	node = NULL;
}

/*
Print the tree whose root node is *pNode.
*/
static inline void printTree(pNode pNode, int height){
	if(pNode == NULL){
		return;
	}
	
	for(int i=0; i<height; i++){
		printf("  ");
	}
	printf("%s", pNode->name);
	
	if(pNode->type == NOT_A_TOKEN){
		printf(" (%d)", pNode->lineno);
	}
	else if(pNode->type == TOKEN_TYPE || pNode->type == TOKEN_ID || pNode->type == TOKEN_INT){
		printf(": %s", pNode->val);
	}
	else if(pNode->type == TOKEN_FLOAT){
		printf(": %f", atof(pNode->val));
	}
	
	printf("\n");
	printTree(pNode->first_child, height+1);
	printTree(pNode->brother, height);
}

#endif
