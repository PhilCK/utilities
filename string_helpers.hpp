#ifndef STRING_HELPERS_INCLUDED_CC0C05E9_7D4D_4A69_B002_6E59BDC031B9
#define STRING_HELPERS_INCLUDED_CC0C05E9_7D4D_4A69_B002_6E59BDC031B9


#include <string>


namespace util {


std::string
get_contents_from_file(const std::string &filename)
{
  // Open the file in binary mode
  FILE *f = fopen(filename.c_str(), "rb");
  
  // Determine the size of the file
  fseek(f, 0, SEEK_END);
  long len = ftell(f);
  fseek(f, 0, SEEK_SET);
  
  // Load the entire file in one call
  std::string output;
  output.resize(len);
  fread(&output[0], len, 1, f);
  
  fclose(f);

  return output;
}


} // ns


#endif // include guard