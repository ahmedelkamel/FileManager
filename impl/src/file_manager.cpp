#include "file_manager.hpp"
#include "file.hpp"

namespace filesystem {

FileManager::FileManager() : m_files(m_max_files, nullptr) {}

IFile::Ptr FileManager::get_file(const std::uint32_t file_id) {
  if (!m_files[file_id]) {
    m_files[file_id] = std::make_shared<File>(file_id);
  }
  return m_files[file_id];
}

} // namespace filesystem
