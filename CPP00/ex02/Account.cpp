#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout   << "accounts:" << getNbAccounts()
                << ";total:" << getTotalAmount()
                << ";deposits:" << getNbDeposits()
                << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << checkAmount()
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	++_totalNbDeposits;
    ++_nbDeposits;
    _amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex
            	<< ";p_amount:" << checkAmount() - deposit
            	<< ";deposit:" << deposit
            	<< ";amount:" << checkAmount()
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout   << "index:" << _accountIndex
            	<< ";p_amount:" << checkAmount()
				<< ";withdrawal:";

    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
		return false;
    }

	++_totalNbWithdrawals;
    ++_nbWithdrawals;
    _amount -= withdrawal;
	_totalAmount -= withdrawal;

    std::cout	<< withdrawal
            	<< ";amount:" << checkAmount()
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

Account::Account( int initial_deposit )
{
    _totalAmount += _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbDeposits = _nbWithdrawals = 0;
    ++_nbAccounts;
	_displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << checkAmount()
                << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
        std::cout   << "index:" << _accountIndex
                    << ";amount:" << checkAmount()
                    << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	tm tm_time;
	time_t t_mytime;

	t_mytime = std::time(nullptr);
	tm_time = *std::localtime(&t_mytime);
	
	std::cout	<< std::setfill('0') << "[" << tm_time.tm_year + 1900
				<< std::setw(2) << tm_time.tm_mon << std::setw(2) << tm_time.tm_mday
				<< "_" << std::setw(2) << tm_time.tm_hour << std::setw(2) << tm_time.tm_min << std::setw(2) <<  tm_time.tm_sec
				<< "] ";
}