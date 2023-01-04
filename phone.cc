#include "phone.h"

#include <iomanip>
#include <vector>

#include "message.h"

using namespace std;

std::string Phone::GetOwner() const {
  return owner_;
}
std::shared_ptr<Message> Phone::AuthorMessage(const std::string& nMessage) {
  Message m1(nMessage, owner_);
  return std::make_shared<Message>(m1);
}
void Phone::AcceptMessage(std::shared_ptr<Message> nMessage)  {
  messages_.push_back(nMessage);
}
void Phone::PrintMessages()
{
  for (int i = 0; i < messages_.size(); i++)
  {
     cout << messages_[i]->GetSender() << ": " << messages_[i]->GetMessage() << endl;
  }
}
