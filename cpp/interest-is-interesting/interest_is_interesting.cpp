// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    if (balance < 0.f) return 3.213f;
    else if (balance < 1000.f) return 0.5f;
    else if (balance < 5000.f) return 1.621f;
    else return 2.475f;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    return (balance / 100) * interest_rate(balance);
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    int years{0};
    
    double new_bal = balance;
    while (new_bal < target_balance) {
        new_bal = annual_balance_update(new_bal);
        years++;
    }
    
    return years;
}