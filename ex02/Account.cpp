# include "./Account.hpp"

Account::Account(){
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
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
