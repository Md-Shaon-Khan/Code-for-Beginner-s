#include <iostream>
using namespace std;

class Guardian {
private:
    int guardianAge;
    string guardianJob;
    string guardianQualification;
    string guardianName;
public:
    void setDetails(int age, string job, string qualification, string name) {
        guardianAge = age;
        guardianName = name;
        guardianJob = job;
        guardianQualification = qualification;
    }

    void showGuardianDetails() {
        cout << "Guardian's Name: " << guardianName << endl;
        cout << "Age: " << guardianAge << endl;
        cout << "Occupation: " << guardianJob << endl;
        cout << "Qualification: " << guardianQualification << endl;
    }
};

class Caregiver {
private:
    string caregiverName;
    int caregiverAge;
    string caregiverQualification;
    string caregiverJob;
public:
    void assignData(int age, string job, string qualification, string name) {
        caregiverAge = age;
        caregiverName = name;
        caregiverJob = job;
        caregiverQualification = qualification;
    }

    void showCaregiverData() {
        cout << "Caregiver's Name: " << caregiverName << endl;
        cout << "Age: " << caregiverAge << endl;
        cout << "Occupation: " << caregiverJob << endl;
        cout << "Qualification: " << caregiverQualification << endl;
    }
};

class Offspring : public Guardian, public Caregiver {
private:
    string offspringName;
    int offspringAge;
public:
    void setOffspringInfo(string name, int age) {
        offspringName = name;
        offspringAge = age;
        cout << "Offspring's Name: " << offspringName << endl;
        cout << "Offspring's Age: " << offspringAge << endl;
    }
};

int main() {
    Offspring youngOne;
    youngOne.setOffspringInfo("Shaon Khan", 20);
    youngOne.Guardian::setDetails(46, "Govt. Employee", "HSC", "Monzur Rahman Khan");
    youngOne.Guardian::showGuardianDetails();
    youngOne.Caregiver::assignData(35, "HouseWife", "SSC", "Shahanaz Khan");
    youngOne.Caregiver::showCaregiverData();
    return 0;
}
