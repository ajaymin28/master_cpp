class IntegerArray{
    public:
        int *data;
        int size;

        IntegerArray(int n) : data(new int[n]), size(n) {}
        IntegerArray(const IntegerArray& o) : data(new int[o.size]), size(o.size) {
                for (int i = 0; i < size; ++i) data[i] = o.data[i];
        }
        ~IntegerArray() { delete[] data; }

};