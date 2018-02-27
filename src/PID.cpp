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

  current_cte_ = 0;
  cte_sum_ = 0;
  delta_cte_ = 0;
}

void PID::UpdateError(double cte) {
  delta_cte_ = cte - current_cte_;
  current_cte_ = cte;
  cte_sum_ += cte;
}

double PID::TotalError() {
  return cte_sum_;
}

double PID::GetResult(double cte) {
  return -Kp_ * cte  - Ki_ * cte_sum_ - Kd_ * delta_cte_;
}