#ifndef CHANNEL_HPP
# define CHANNEL_HPP

# include <iostream>
# include <map> 
# include <Client.hpp>

class Channel
{
    private:

    std::map<int, Client> _users;
    std::map<int, Client> _admins;
    std::map<int, Client> _invitedUsers;
    std::string           _topic;
    std::string           _pswrd;
    int                   _maxCapacity;
    bool                  _inviteOnly;

    public:

    Channel( void );
    Channel( const Client & );
    Channel(const Channel & );
    Channel &operator=(const Channel & );
    ~Channel( void );

    std::string getTopic() const;
    std::string getPswrd() const;
    int getCapacity() const;
    bool getInvite() const;

    void    setTopic( std::string newTopic );
    void    setPswrd( std::string newPswrd );
    void    setCapacity( int newCapacity );
    void    setInvite( bool changeMode );

};

#endif