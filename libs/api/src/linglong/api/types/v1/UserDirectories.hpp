// This file is generated by tools/codegen.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     UserDirectories.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "linglong/api/types/v1/helper.hpp"

namespace linglong {
namespace api {
namespace types {
namespace v1 {
using nlohmann::json;

struct UserDirectories {
std::optional<std::vector<std::string>> allowed;
std::optional<std::vector<std::string>> disallowed;
};
}
}
}
}

// clang-format on
