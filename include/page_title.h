#pragma once
#include <iostream>
#include <utility>


std::pair<bool, std::string> findPageTitle(const std::string &str, const std::string &open_tag, const std::string &close_tag);

void requestHtml();