#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	Kp_ = Kp;
  Ki_ = Ki;
  Kd_ = Kd;

  old_cte_ = 0;
  cte_sum_ = 0;
}

void PID::UpdateError(double cte) {
  old_cte_ = cte;
  cte_sum_ += cte;
}

double PID::TotalError() {
  return cte_sum_;
}

