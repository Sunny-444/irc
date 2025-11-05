#include "Channel.hpp"


Channel::Channel( void ){

}

Channel::Channel( const Client & ){

}

Channel::Channel(const Channel & ){

}

Channel &Channel::operator=(const Channel & ){

}

Channel::~Channel( void ){

}

std::string Channel::getTopic() const{
    return this->_topic;
}

std::string Channel::getPswrd() const{
    return this->_pswrd;
}

int Channel::getCapacity() const{
    return this->_maxCapacity;
}

bool Channel::getInvite() const{
    return this->_inviteOnly;
}


void    Channel::setTopic( std::string newTopic ){
    this->_topic = newTopic;
}

void    Channel::setPswrd( std::string newPswrd ){
    this->_pswrd = newPswrd;
}

void    Channel::setCapacity( int newCapacity ){
    this->_maxCapacity = newCapacity;
}

void    Channel::setInvite( bool changeMode ){
    this->_inviteOnly - changeMode;
}
