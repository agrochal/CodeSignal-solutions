int makeArrayConsecutive2(std::vector<int> statues) {
    return *max_element(std::begin(statues), std::end(statues)) - *min_element(std::begin(statues), std::end(statues)) - statues.size() + 1;
}
