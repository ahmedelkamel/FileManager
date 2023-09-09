#ifndef FILE_MANAGER_HPP
#define FILE_MANAGER_HPP

#include "i_file.hpp"
#include <vector>

namespace filesystem {
class FileManager {
public:
  FileManager();
  ~FileManager() = default;
  IFile::Ptr get_file(std::uint32_t index);

private:
  std::uint32_t m_max_files{128u};
  std::vector<IFile::Ptr> m_files;
};

} // namespace filesystem

#endif // FILE_MANAGER_HPP
