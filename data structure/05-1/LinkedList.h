#ifndef __C_LINKEDLIST_H__
#define __C_LINKEDLIST_H__

typedef struct _node
{
    struct _data *data;
    struct Node *next;
}Node;

typedef struct _list{
    Node *cur;
    Node *before;
    Node *tail;
    int numOf;

}List;

void add_data(List *plist,int num, char *name);
// 노드 추가 완
int LFirst(List *plist); 
// cur이 처음 노드를 가리키게 완
int LNext(List *plist);
// cur이 다음 노드를 가리키게 완
int LSearch(List *plist, char *dname);
// cur이 해당 노드를 가리키게
void ListInit(List *plist);  
//리스트 처음 추가 완
void add_list(List *plist, Node *pNode); 
// 노드를 리스트에 추가 완
int Next_dangik(List *plist,char*dname, int dnum); 
// 다음 당직이 누구인지 완
void showyourinfo(List *plist);
// 직원 정보 보여주기 완
void LRemove(List* plist);
// 직원 정보 삭제
#endif