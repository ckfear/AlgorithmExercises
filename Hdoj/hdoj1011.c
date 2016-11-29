// hdoj1011
Struct Room {
    int bugs;
    int brains;
};
Struct Route {
    int start;
    int end;
}
int N, troppers;
Room rooms[101], Route routes[101];

int main() 
{
    int a;
    while(a) 
    {
        scanf("%d, %d", &N, &troppers);
        if(N==-1 && troppers==-1)
            a=0;
        else {
            for(int i=0; i<N; i++)
            {
                scanf("%d %d", rooms[i].bugs, rooms[i].brains);
            }
            for(int i=0; i<N-1; i++)
            {
                scanf("%d %d", routes[i].start, routes[i],end);
            }
            
        }
    }
}
