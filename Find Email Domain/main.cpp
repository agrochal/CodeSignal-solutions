std::string findEmailDomain(std::string address) {
  int pos = address.rfind("@");
  return address.substr(++pos);
}
