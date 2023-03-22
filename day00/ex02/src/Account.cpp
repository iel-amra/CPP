/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:08:52 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/22 12:31:58 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int	    Account::_totalNbWithdrawals = 0;

int  Account::getNbAccounts()
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

void    Account::_displayTimestamp( void )
{
    char       buf[18];
    time_t     now = time(0);

    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", localtime(&now));
    std::cout << buf << " ";
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout   << "accounts:"
                << _nbAccounts
                << ";total:"
                << _totalAmount
                << ";deposits:"
                << _totalNbDeposits
                << ";withdrawals:"
                << _totalNbWithdrawals
                << std::endl;
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    std::cout   << "index:"
                << _accountIndex
                << ";amount:"
                << _amount
                << ";created"
                << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout   << "index:"
            << _accountIndex
            << ";amount:"
            << _amount
            << ";closed"
            << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout   << "index:"
                << _accountIndex
                << ";p_amount:"
                << _amount
                << ";deposit:"
                << deposit;
    _amount += deposit;
    std::cout   << ";amount:"
                << _amount
                << ";nb_deposits:"
                << _nbDeposits
                << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout   << "index:"
                << _accountIndex
                << ";p_amount:"
                << _amount
                << ";withdrawal:";
    if (_amount - withdrawal >= 0)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout   << withdrawal
                    << ";amount:"
                    << _amount
                    << ";nb_withdrawals:"
                    << _nbWithdrawals;
    }
    else
        std::cout << "refused";
    std::cout << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout   << "index:"
            << _accountIndex
            << ";amount:"
            << _amount
            << ";deposits:"
            << _nbDeposits
            << ";withdrawals:"
            << _nbWithdrawals
            << std::endl;
}
