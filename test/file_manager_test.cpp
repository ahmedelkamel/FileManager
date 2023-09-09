#include "file_manager.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>

class FileManagerTest : public ::testing::Test {};

using namespace filesystem;
TEST_F(FileManagerTest, basic_test) {
  FileManager file_mgr{};
  std::uint32_t fst_ind{0};
  auto fst_file = file_mgr.get_file(fst_ind);

  ASSERT_GT(fst_file.use_count(), 0);
  ASSERT_EQ(fst_file->get_file_id(), 0);

  // std::uint32_t snd_ind{1};
  // File fst_file{fst_ind};
  // File snd_file{snd_ind};
  // ASSERT_EQ(fst_file.get_index(), fst_ind);
}
