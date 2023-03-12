#pragma once

#include "iostream"
class Card
{
private:
    enum class suit : unsigned char
    {
        Diamonds,
        Hearts,
        Clubs,
        Spades
    } suit_;
    enum class name : unsigned char
    {
        As,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack,
        Queen,
        King
    } name_;
    unsigned int value_;

public:
    Card(std::string suit, std::string name);
    suit get_suit();
    name get_name();
    unsigned int get_value();
};
