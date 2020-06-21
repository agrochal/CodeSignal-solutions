bool isMAC48Address(std::string inputString) {
    regex r("[0-9A-F]{2}-[0-9A-F]{2}-[0-9A-F]{2}-[0-9A-F]{2}-[0-9A-F]{2}-[0-9A-F]{2}");
    return regex_match(inputString, r);
}
