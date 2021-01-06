#include <iostream>
#include<string>
using namespace std;


class Flu{
    char value;
    //行
    int row;
    //int 列
    int column;
public:
    const char &getValue() const {
        return value;
    }

    void setValue(const char &value) {
        Flu::value = value;
    }

    int getRow() const {
        return row;
    }

    void setRow(int row) {
        Flu::row = row;
    }

    int getColumn() const {
        return column;
    }

    void setColumn(int column) {
        Flu::column = column;
    }

};
//地图输出
void outMap(Flu flu[], int M, int N){
    for (int k = 0, endlNum = 0; k < M*N; ++k) {
        cout << flu[k].getValue();
        endlNum++;
        if (endlNum == M) {
            cout << endl;
            endlNum = 0;
        }
    }
}
//感染人群
void FluOther(Flu flu[], int M, int N){
    int newFluRow[4];
    int newFluColumn[4];
    for (int l = 0; l < M*N; ++l) {
        if (flu[l].getValue() == 'X'){
            newFluRow[0] = flu[l].getRow() + 1;
            newFluColumn[0] = flu[l].getColumn();
            newFluRow[1] = flu[l].getRow() - 1;
            newFluColumn[1] = flu[l].getColumn();
            newFluRow[2] = flu[l].getRow();
            newFluColumn[2] = flu[l].getColumn()+1;
            newFluRow[3] = flu[l].getRow();
            newFluColumn[3] = flu[l].getColumn()-1;
            for (int m = 0; m < 4; ++m) {
                cout << newFluRow[m];
                cout << " " << newFluColumn[m] << endl;
            }
            //把每次感染的设成V(非X) 在主程序中再将V换成X
            for (int i = 0; i < M*N; ++i) {
                if (flu[i].getColumn() == newFluColumn[0] && flu[i].getRow() == newFluRow[0] && flu[i].getValue()!='P'){
                    if (flu[i].getValue()=='X')
                        continue;
                    flu[i].setValue('V');
                }
                if (flu[i].getColumn() == newFluColumn[1] && flu[i].getRow() == newFluRow[1] && flu[i].getValue()!='P'){
                    if (flu[i].getValue()=='X')
                        continue;
                    flu[i].setValue('V');
                }
                if (flu[i].getColumn() == newFluColumn[2] && flu[i].getRow() == newFluRow[2]&& flu[i].getValue()!='P'){
                    if (flu[i].getValue()=='X')
                        continue;
                    flu[i].setValue('V');
                }
                if (flu[i].getColumn() == newFluColumn[3] && flu[i].getRow() == newFluRow[3]&& flu[i].getValue()!='P'){
                    if (flu[i].getValue()=='X')
                        continue;
                    flu[i].setValue('V');
                }
            }
        }
    }

}
int main(){
    cout << "字符串问题" << endl;
    int M, N;
    int freq;
    cin >> M >> N;
    cout << endl;
    Flu flu[99];
    string s;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        //创建对象存储每个点的位置和感染情况 M 即为长度
        for (int j = 0; j < M; ++j) {
            flu[i*(M)+j].setRow(i);
            flu[i*(M)+j].setColumn(j);
            flu[i*(M)+j].setValue(s[j]);
        }
    }
    cin >> freq;
    //地图输出
    outMap(flu, M, N);
    //此时X的个数
    for (int k = freq; k > 0; --k) {
        FluOther(flu, M,N);

        for (int i = 0; i < M*N; ++i) {
            if(flu[i].getValue()=='V')
                flu[i].setValue('X');
        }
        outMap(flu, M, N);
    }

    return 0;
}
