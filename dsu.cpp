struct DSU
{
    vector<int> Parent, Size;
    int MAXN;
    void init(int size)
    {
        MAXN=size;
        Parent.resize(size+2);
        Size.resize(size+2);

        for (int i = 0; i < size+2; i++)
            Parent[i]=i, Size[i]=1;
    }

    int Find(int v)
    {
        if(v==Parent[v])
            return v;
        return Parent[v]=Find(Parent[v]);
    }

    void Union(int a, int b)
    {
        a=Find(a);
        b=Find(b);

        if(a!=b)
        {
            if(Size[a]<Size[b])
                swap(a, b);

            Parent[b]=a;
            Size[a]+=Size[b];
        }
    }

    int components()
    {
        int c=0;
        for(int i=1; i<=MAXN; i++)
            if(i==Parent[i])
                c++;
        return c;
    }
};
