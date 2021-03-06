#ifndef OCLINT_VIOLATION_H
#define OCLINT_VIOLATION_H

#include <string>

namespace oclint
{

class RuleBase;

class Violation
{
public:
    const RuleBase *rule;
    std::string path;
    int startLine;
    int startColumn;
    int endLine;
    int endColumn;
    std::string message;

    Violation(RuleBase *violatedRule,
        const std::string& violationFilePath,
        int violationStartLine,
        int violationStartColumn,
        int violationEndLine,
        int violationEndColumn,
        const std::string& violationMessage = "");
};

} // end namespace oclint

#endif
