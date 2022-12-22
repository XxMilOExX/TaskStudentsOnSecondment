#include <iostream>
#include <string>

using namespace std;

class GroupLog {

private:
    int sequenceNumber;
    string secondName;
    float entranceScore;
    Exam exam;
    Cred cred;
    string words;

public:
    GroupLog();
    GroupLog(int, string, float, Exam, Cred, string);
    ~GroupLog();
    void Print();
    void DataEntry(int, string, float, Exam, Cred, string);

    int GetSequenceNumber() { return sequenceNumber; };
    string GetSecondName() { return secondName; };
    float GetEntranceScore() { return entranceScore; };
    Exam GetExam() { return exam; };
    Cred GetCred() { return cred; };
    string GetWord() { return words; };

    GroupLog& operator = (GroupLog d_o);
};
