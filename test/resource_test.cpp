#include "resource.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>

class ResourceTest : public ::testing::Test {};

using namespace filesystem;
TEST_F(ResourceTest, get_index_ShallReturnCorrectIndex) {
  std::uint32_t fst_ind{0};
  std::uint32_t snd_ind{1};
  Resource fst_resource{fst_ind};
  Resource snd_resource{snd_ind};
  ASSERT_EQ(fst_resource.get_index(), fst_ind);
  ASSERT_EQ(snd_resource.get_index(), snd_ind);
}

// TEST_F(ResourceTest, get_resource_count_ShallReturnCorrectResourceCount) {
//   Resource fst_resource{};
//   ASSERT_EQ(Resource::get_resource_count(), 1);

//   Resource snd_resource{};
//   ASSERT_EQ(Resource::get_resource_count(), 2);
// }

// TEST_F(ResourceTest,
// get_index_ShallReturnCorrectIndex_WhenResourcesAreReleased) {
//   Resource::Ptr fst_resource = std::make_shared<Resource>();
//   Resource::Ptr snd_resource = std::make_shared<Resource>();
//   ASSERT_EQ(fst_resource->get_index(), 0);
//   ASSERT_EQ(snd_resource->get_index(), 1);

//   fst_resource.reset();
//   Resource::Ptr trd_resource = std::make_shared<Resource>();
//   ASSERT_NE(trd_resource->get_index(), 1);
// }
