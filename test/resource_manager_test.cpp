#include "resource_manager.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>

class ResourceManagerTest : public ::testing::Test {};

using namespace filesystem;
TEST_F(ResourceManagerTest, basic_test) {
  ResourceManager resource_mgr{};
  std::uint32_t fst_ind{0};
  auto fst_resource = resource_mgr.get_resource(fst_ind);

  ASSERT_GT(fst_resource.use_count(), 0);
  ASSERT_EQ(fst_resource->get_index(), 0);

  // std::uint32_t snd_ind{1};
  // Resource fst_resource{fst_ind};
  // Resource snd_resource{snd_ind};
  // ASSERT_EQ(fst_resource.get_index(), fst_ind);
}
