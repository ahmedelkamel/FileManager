#include "file.hpp"

namespace filesystem {

File::File(const std::uint32_t file_id) : m_file_id(file_id) {}

std::uint32_t File::get_file_id() const { return m_file_id; }

std::vector<std::uint8_t> File::read(const std::uint32_t data_size) {
  return std::vector<std::uint8_t>(m_buffer.begin(),
                                   m_buffer.begin() + data_size);
}

bool File::write(const std::vector<std::uint8_t> &data) {
  m_buffer = data;
  return true;
}

} // namespace filesystem
