#ifndef DATALAYER_H
#define DATALAYER_H


class DataLayer
{
public:
    DataLayer();
    ifstream openCSstream();
    void closeCSstream(ifstream CSstream);
    void printAll();
    void read_from_file();

private:
    vector<ComputerScientist> CSstorer5000;
};

#endif // DATALAYER_H
