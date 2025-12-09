#include <iostream>
using namespace std;

class Academic {
protected:
    int math, science;
public:
    void setAcademicMarks(int m, int s) {
        math = m;
        science = s;
    }
};

class Sports {
protected:
    int score;
public:
    void setSportsScore(int sc) {
        score = sc;
    }
};

class Result : public Academic, public Sports {
public:
    void displayResult() {
        int total = math + science + score;
        cout << "Math Marks: " << math << endl;
        cout << "Science Marks: " << science << endl;
        cout << "Sports Score: " << score << endl;
        cout << "--- Total Score: " << total << " ---" << endl;
    }
};

int main() {
    Result r;
    r.setAcademicMarks(90, 85);
    r.setSportsScore(10);
    r.displayResult();

    return 0;
}