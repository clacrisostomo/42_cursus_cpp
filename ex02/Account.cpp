# include "./Account.hpp"

Account::Account( int initial_deposit){
	this ->_accountIndex = Account::getNbAccounts();
	this ->_amount = initial_deposit;
	this ->_nbDeposits = 0;
	this ->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout << "[";
	std::cout << _displayTimestamp;//yyyyMMdd_hhmmss
	std::cout << "] ";
	std::cout << "index:" << this ->_accountIndex;
	std::cout << ";amount:" << this ->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(){
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return (_totalAmount);
}
int	Account::getNbDeposits( void ){
	return (Account::_nbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return (Account::_nbWithdrawals);
}
//Funciona como global | Inicial como zero
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
