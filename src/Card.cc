#include "Card.hh"

Card::Card(std::string suit, std::string name)
{
    // Set suit_
    if (suit == "Diamonds")
        suit_ = suit::Diamonds;
    else if (suit == "Hearts")
        suit_ = suit::Hearts;
    else if (suit == "Clubs")
        suit_ = suit::Clubs;
    else if (suit == "Spades")
        suit_ = suit::Spades;
    else
        std::cerr << "Invalid suit.\n";

    // Set name_ and value_
    if (name == "Ace")
    {
        name_ = name::As;
        value_ = 1;
    }
    else if (name == "Two")
    {
        name_ = name::Two;
        value_ = 2;
    }
    else if (name == "Three")
    {
        name_ = name::Three;
        value_ = 3;
    }
    else if (name == "Four")
    {
        name_ = name::Four;
        value_ = 4;
    }
    else if (name == "Five")
    {
        name_ = name::Five;
        value_ = 5;
    }
    else if (name == "Six")
    {
        name_ = name::Six;
        value_ = 6;
    }
    else if (name == "Seven")
    {
        name_ = name::Seven;
        value_ = 7;
    }
    else if (name == "Eight")
    {
        name_ = name::Eight;
        value_ = 8;
    }
    else if (name == "Nine")
    {
        name_ = name::Nine;
        value_ = 9;
    }
    else if (name == "Ten")
    {
        name_ = name::Ten;
        value_ = 10;
    }
    else if (name == "Jack")
    {
        name_ = name::Jack;
        value_ = 10;
    }
    else if (name == "Queen")
    {
        name_ = name::Queen;
        value_ = 10;
    }
    else if (name == "King")
    {
        name_ = name::King;
        value_ = 10;
    }
    else
        std::cerr << "Invalid name.\n";
}

Card::suit Card::get_suit()
{
    return suit_;
}

Card::name Card::get_name()
{
    return name_;
}

unsigned int Card::get_value()
{
    return value_;
}