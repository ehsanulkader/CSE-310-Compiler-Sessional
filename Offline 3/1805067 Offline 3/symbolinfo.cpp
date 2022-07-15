#include<bits/stdc++.h>
using namespace std;
class Parameter {
    string name, type;
public:
    Parameter(string name, string type) {
        this->name = name;
        this->type = type;
    }
    string getParameterName() {return name;}
    string getParameterType() {return type;}
};

class FunctionData {
    vector<Parameter>parameterList;
    bool defined = false;
public:
    vector<Parameter> getParameterList() {return parameterList;}
    bool isDefined() { return defined;}
    void setParameterList(vector<Parameter> paramlist) {
        int n = paramlist.size();
        for(int i = 0; i < n; i++) {
            parameterList.push_back(paramlist[i]);
        }
    }
    void setDefined(bool defined) {
        this->defined = defined;
    }
};

class ArrayData {
    int size;
public:
    ArrayData(int size) {
        this->size = size;
    }
    int getSize() {
        return size;
    }
};

class SymbolInfo{
    string symbolName;
    string symbolType;
    SymbolInfo* next;
    string dtype;
    FunctionData* funcdata;
    ArrayData* arraydata;

public:
    SymbolInfo() {
        this->symbolName = "";
        this->symbolType = "";
        this->next = nullptr;
        this->dtype = "";
        this->funcdata = nullptr;
        this->arraydata = nullptr;
    }

    SymbolInfo(string symbolName, string symbolType) {
        this->symbolName = symbolName;
        this->symbolType = symbolType;
        this->next = nullptr;
        this->dtype = "";
        this->funcdata = nullptr;
        this->arraydata = nullptr;
    }

    string getSymbolName() {
        return symbolName;
    }

    string getSymbolType() {
        return symbolType;
    }

    SymbolInfo* getNext() {
        return next;
    }

    FunctionData* getFunctionData() {
        return funcdata;
    }

    ArrayData* getArrayData() {
        return arraydata;
    }

    string getDtype() {
        return dtype;
    }

    void setSymbolName(string symbolName) {
        this->symbolName = symbolName;
    }

    void setSymbolType(string symbolType) {
        this->symbolType = symbolType;
    }

    void setDtype(string dtype) {
        this->dtype = dtype;
    }

    void setArrayData(ArrayData* arraydata) {
        this->funcdata = funcdata;
    }

    void setFunctionData(FunctionData* funcdata) {
        this->funcdata = funcdata;
    }

    void setNext(SymbolInfo* next) {
        SymbolInfo* temp = this->next;
        this->next = next;
        if(next != nullptr)
            delete temp;
    }

    void print() {
        cout<<symbolName<<" : "<<symbolType;
    }

    ~SymbolInfo() {
       
    }
};