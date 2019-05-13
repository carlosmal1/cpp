#include <ctime>

class CAppointment {

public:

CAppointment();
~CAppointment();
virtual time_t Occurs_on(int year, int month, int day);

CString m_strAppointmentDescription;
time_t m_dtTime;

};

class COneTime : public CAppointment {

public:

COneTime();
~COneTime();
virtual time_t Occurs_on(int year, int month, int day);

};

class CDaily : public CAppointment {
 
public:

CDaily();
~CDaily();
virtual time_t Occurs_on(int year, int month, int day);

};

class CWeekly : public CAppointment {

public:

CWeekly();
~CWeekly();
virtual time_t Occurs_on(int year, int month, int day);

};

class CMonthly : public CAppointment {

public:

CMonthly();
~CMonthly();
virtual time_t Occurs_on(int year, int month, int day);

};

void

CAppointmentAppDlg::OnBnClickedButton1() {

CAppointment *appoint = new COneTime();
appoint->m_strAppointmentDescription = "Go to the doctor's";
appointmentsArr.push_back(appoint);
appoint = new CDaily();
appointmentsArr.push_back(appoint);
appoint = new CWeekly();
appointmentsArr.push_back(appoint);
appoint = new CMonthly();
appointmentsArr.push_back(appoint);

}

for (int i = 0; i < appointmentsArr.size(); i++) {
appointmentsArr[i]->Occurs_on(2016, 05, 25);

}