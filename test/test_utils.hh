/*
 * Copyright (C) 2014 Open Source Robotics Foundation
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
 *
*/

#ifndef GZ_TRANSPORT_TEST_UTILS_HH_
#define GZ_TRANSPORT_TEST_UTILS_HH_

#include <climits>
#include <random>
#include <string>

namespace testing
{
  /// \brief Get a random number based on an integer converted to string.
  /// \return A random integer converted to string.
  inline std::string getRandomNumber()
  {
    // Initialize random number generator.
    uint32_t seed = std::random_device {}();
    std::mt19937 randGenerator(seed);

    // Create a random number based on an integer converted to string.
    std::uniform_int_distribution<int32_t> d(0, INT_MAX);

    return std::to_string(d(randGenerator));
  }
}  // namespace testing

#endif  // GZ_TRANSPORT_TEST_UTILS_HH_

