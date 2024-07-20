#include <stdio.h>
#include <stdlib.h>

struct person
{

    int data;
    struct person *Pnext;
    struct person *Pperv;

} node;

node *Pfirst, *Plast;
node * createNode(int data)

node * createNode(int data)
{

    node *Pnode = (node*)malloc(sizeof(node));

    if (Pnode!=NULL)
    {

        Pnode->data= data;
        Pnode->Pnext= NULL;
        Pnode->Pprev= NULL;
    }

    return Pnode;

}

void addNodeBack(int data)
{

    if (Pnode!=NULL)
    {
        if(pFirst == NULL)
        {

            Pfirst = Plast = Pnode;
        }
        else
        {

            Plast->Pprev = Pnode;
            Pnode->Pnext=Plast;
            Plast=Pnode;

        }

    }
}

void addNodeFront(int data)
{

    if (Pnode!=NULL)
    {
        if(pFirst == NULL)
        {

            Pfirst = Plast = Pnode;
        }
        else
        {

            Pfirst->Pnext=Pnode;
            Pnode->Pprev = Pfirst;
            Pfirst=Pnode;

        }

    }
}

void insertNode(int data, int index){

    /*node* Pnode = createNode(data);

    if (Pnode!=NULL){

        if(index==0){

            addNodeFront(data);
        }
        else{

            node* Pcur = Pfirst;
            for (;index>0;index--){
                Pcur= Pcur->Pprev;
            }
        }
    }*/

    int c=0;


    if(index==0){

            addNodeFront(data);
        }
        else{

            node* Pcur = Pfirst;
            for (;index>0;index--){
                Pcur= Pcur->Pprev;
                if(Pcurl==NULL){
                    addNodeBackdata(data);
                    return;
                }
            }
            if(Pcur->Pprev==NULL){
                addNodeBack(data);
            }
            else{
                    node *Pnode= createNode(data);
                    if(Pnode !=NULL){

                            Pcur->Pnext->Pprev =P

                    }

            }
        }


}


int main()
{

    addNodeFront(5);
    addNodeBack(7);
    addNodeBack(8);
    addNodeBack(1);
    addNodeBack(3);

    for(int i=0;;i++){

        printf("node No.%d=%d\n",i,Pcurl->data);
        Pcur= Pcur->Pprev;
    }

    return 0;
}
