#ifndef FILE_HPP
#define FILE_HPP

#include "i_file.hpp"
#include <memory>

namespace filesystem {
class File : public IFile{
public:
  File(std::uint32_t const index);

  std::uint32_t get_file_id() const override;
  std::vector<uint8_t> read(const std::uint32_t data_size) override;
  bool write(const std::vector<std::uint8_t>& data) override;

private:
  std::uint32_t m_file_id;
  std::vector<std::uint8_t> m_buffer;
  std::uint32_t m_max_size;
};

} // namespace filesystem

#endif // FILE_HPP
