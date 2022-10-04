# include "Account.hpp"

Account::Account(int initial_deposit){
	this ->_accountIndex = Account::getNbAccounts();
	this ->_amount = initial_deposit;
	this ->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout << "[";
	Account::_displayTimestamp();//yyyyMMdd_hhmmss
	std::cout << "] ";
	std::cout << "index:" << this ->_accountIndex;
	std::cout << ";amount:" << this ->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(){
}

void Account::displayAccountsInfos(void){
	std::cout << "[";
	Account::_displayTimestamp();//yyyyMMdd_hhmmss
	std::cout << "] ";
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void){
	time_t timer;
	struct tm *date;

	time(&timer);
	date = localtime(&timer);
	std::cout << date->tm_year + 1900 <<
	std::setfill ('0') << std::setw(2) << date->tm_mon + 1 <<
	std::setfill ('0') << std::setw(2) << date->tm_mday << "_" <<
	std::setfill ('0') << std::setw(2) << date->tm_hour <<
	std::setfill ('0') << std::setw(2) << date->tm_min <<
	std::setfill ('0') << std::setw(2) << date->tm_sec;
}

void Account::displayStatus(void) const{
	std::cout << "[";
	Account::_displayTimestamp();//yyyyMMdd_hhmmss
	std::cout << "] ";
	std::cout << "index:" << this ->_accountIndex;
	std::cout << ";amount:" << this ->_amount;
	std::cout << ";deposits:" << this ->_nbDeposits;
	std::cout << ";withdrawals:" << this ->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
	
}

//Funciona como global | Inicial como zero
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
