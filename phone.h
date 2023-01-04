#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "message.h"

class Phone {
  public:
    Phone(const std::string &nOwner) : owner_(nOwner) {}
    std::string GetOwner() const;
    std::shared_ptr<Message> AuthorMessage(const std::string& nMessage);
    void AcceptMessage(std::shared_ptr<Message> nMessage);
    void PrintMessages();
    
  private:
    std::string owner_;
    std::vector<std::shared_ptr<Message>> messages_;
};
