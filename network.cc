#include "phone.h"
#include "message.h"
#include "network.h"

#include <vector>

void Network::AddPhone(std::shared_ptr<Phone> &nPhone)
{
  phonebook_.insert({nPhone->GetOwner(),nPhone});
}
void Network::SendMessage(std::shared_ptr<Message> nMessage, const std::string &recipient)
{
  if (phonebook_.count(recipient))
  {
    phonebook_.at(recipient)->AcceptMessage(nMessage);
  }
}

void Network::SendMessage(std::shared_ptr<Message> nMessage, const std::vector<std::string> &lRecipient)
{
  for (int i = 0; i < lRecipient.size(); i++)
  {
    if (phonebook_.count(lRecipient[i]))
    {
      phonebook_.at(lRecipient[i])->AcceptMessage(nMessage);
    }
  }
}
