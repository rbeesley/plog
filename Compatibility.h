#pragma once

//////////////////////////////////////////////////////////////////////////
// This file provides backward compatibility with the old version of plog.

namespace plog
{
    const Severity trace = verbose;
    const Severity minimum_log_level = none;
    const Severity maximum_log_level = verbose;
    
    typedef Severity log_level;
    typedef Record message;

    inline void free(bool = true)
    {
    }

    template<class CharType>
    inline void init_csv(const CharType* fileName, Severity maxSeverity)
    {
        initCsv<0>(maxSeverity, fileName);
    }

    template<class CharType>
    inline void init_txt(const CharType* fileName, Severity maxSeverity)
    {
        initTxt<0>(maxSeverity, fileName);
    }

    #define LOG_TRACE LOG_VERBOSE

    template<int instance, class CharType>
    inline Logger<instance>& init(const CharType* fileName, Severity maxSeverity, size_t maxFileSize = 0, int maxFiles = 0)
    {
        return init<instance>(maxSeverity, fileName, maxFileSize, maxFiles);
    }

    template<class CharType>
    inline Logger<0>& init(const CharType* fileName, Severity maxSeverity, size_t maxFileSize = 0, int maxFiles = 0)
    {
        return init<0>(maxSeverity, fileName, maxFileSize, maxFiles);
    }
}
