#include <iostream>
#include <string>
using namespace std;

class Individual {
private:
    string fullName;
    int individualAge;
    string occupation;
public:
    void setBasicDetails(string name, int age, string job) {
        fullName = name;
        individualAge = age;
        occupation = job;
    }

    void showBasicDetails() const {
        cout << "Full Name: " << fullName << endl;
        cout << "Age: " << individualAge << endl;
        cout << "Occupation: " << occupation << endl;
    }
};

class Learner : public Individual {
private:
    string institution;
public:
    void setLearnerDetails(string name, int age, string job, string school) {
        setBasicDetails(name, age, job);
        institution = school;
    }

    void showLearnerDetails() const {
        showBasicDetails();
        cout << "Institution: " << institution << endl;
    }
};

class Educator : public Individual {
private:
    string expertiseArea;
public:
    void setEducatorDetails(string name, int age, string job, string subject) {
        setBasicDetails(name, age, job);
        expertiseArea = subject;
    }

    void showEducatorDetails() const {
        showBasicDetails();
        cout << "Subject of Expertise: " << expertiseArea << endl;
    }
};

class TeachingAssistant : public Individual {
private:
    string institution;
    string expertiseArea;
public:
    void setTAInfo(string name, int age, string job, string school, string subject) {
        setBasicDetails(name, age, job);
        institution = school;
        expertiseArea = subject;
    }

    void displayTAInfo() const {
        cout << "--- Teaching Assistant Details ---" << endl;
        showBasicDetails();
        cout << "Institution: " << institution << endl;
        cout << "Subject of Expertise: " << expertiseArea << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.setTAInfo("John Doe", 25, "Teaching Assistant", "XYZ University", "Mathematics");
    ta.displayTAInfo();
    return 0;
}
