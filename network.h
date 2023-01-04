#pragma once

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"

class Network {

  public:
    void AddPhone(std::shared_ptr<Phone> &nPhone);
    void SendMessage(std::shared_ptr<Message> nMessage, const std::string &recipient);
  void SendMessage(std::shared_ptr<Message> nMessage, const std::vector<std::string> &lRecipient);
  private:
    std::map<std::string, std::shared_ptr<Phone>> phonebook_;
};
