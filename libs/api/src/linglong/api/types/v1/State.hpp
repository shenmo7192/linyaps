// This file is generated by tools/codegen.sh
// DO NOT EDIT IT.

// clang-format off

//  To parse this JSON data, first install
//
//      json.hpp  https://github.com/nlohmann/json
//
//  Then include this file, and then do
//
//     State.hpp data = nlohmann::json::parse(jsonString);

#pragma once

#include <optional>
#include <nlohmann/json.hpp>
#include "linglong/api/types/v1/helper.hpp"

namespace linglong {
namespace api {
namespace types {
namespace v1 {
/**
* main state of current task,
*/

using nlohmann::json;

/**
* main state of current task,
*/
enum class State : int { Canceled, Failed, PartCompleted, Pending, Processing, Queued, Succeed, Unknown };
}
}
}
}

// clang-format on