#include "query_result.h"
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <set>

class QueryResult;

class TextQuery
{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;

private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::set<line_no>> wm;
};