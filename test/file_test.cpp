#include "file.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <memory>

class FileTest : public ::testing::Test {};

using namespace filesystem;

TEST_F(FileTest, get_index_ShallReturnCorrectIndex) {
  std::uint32_t fst_ind{0};
  std::uint32_t snd_ind{1};
  IFile::Ptr fst_file = std::make_shared<File>(fst_ind);
  IFile::Ptr snd_file = std::make_shared<File>(snd_ind);

  ASSERT_EQ(fst_file->get_file_id(), fst_ind);
  ASSERT_EQ(snd_file->get_file_id(), snd_ind);
}

TEST_F(FileTest, write_WhenUsingPipes) {
  std::uint32_t fst_ind{0};
  std::uint32_t snd_ind{1};
  const std::vector<std::uint8_t> data{0x01, 0x02, 0x03};

  IFile::Ptr fst_file = std::make_shared<File>(fst_ind);

  fst_file->write(data);
  ASSERT_EQ(data, fst_file->read(data.size()));
}

// TEST_F(FileTest, get_resource_count_ShallReturnCorrectResourceCount) {
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
