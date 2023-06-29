/*
 * Copyright 2022-2023 Advanced Micro Devices Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <iostream>
using namespace std;
#include "vitis/ai/proto/config.hpp"
#include "vitis/ai/proto/dpu_model_param.pb.h"
extern "C" vitis::ai::proto::DpuModelParam get_config(
    const std::string &model_name);
int main(int argc, char *argv[]) {
  auto m = get_config("inception_v1");
  std::cerr << __FILE__ << ":" << __LINE__ << ": [" << __FUNCTION__ << "]"  //
            << "m.DebugString() " << m.DebugString() << " "                 //
            << std::endl;
  return 0;
}
