#include "user.h"

User::User() {}

User::User(const QString& username, const QString& email, const QString& password, const QDate& birthday_)
    : username(username), password(password), email(email), birthday(birthday_) {}

User::User(const User& other)
    : username(other.username), password(other.password), email(other.email), birthday(other.birthday) {}

const QString User::get_username() const
{
    return username;
}

const QString User::get_password() const
{
    return password;
}

const QString User::get_email() const
{
    return email;
}

const QDate User::get_birthday() const
{
    return birthday;
}
void User::set_username(const QString& username_)
{
    username = username_;
}

void User::set_password(const QString& password_)
{
    password = password_;
}

void User::set_email(const QString& email_)
{
    email = email_;
}

void User::set_birthday(const QDate& birthday_)
{
    birthday = birthday_;
}

/*User& User::operator++()

User User::operator++(int)

User& User::operator--()

User User::operator--(int)

User& User::operator+(double addRating)

User& User::operator-(double decreaseRating)
User& User::operator=(const User& other)
{
    if (this != &other) {}
    return *this;
}*/
