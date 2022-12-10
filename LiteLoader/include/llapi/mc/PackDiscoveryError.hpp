/**
 * @file  PackDiscoveryError.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PackError.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackDiscoveryError.
 *
 */
class PackDiscoveryError : public PackError {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKDISCOVERYERROR
public:
    class PackDiscoveryError& operator=(class PackDiscoveryError const &) = delete;
    PackDiscoveryError(class PackDiscoveryError const &) = delete;
    PackDiscoveryError() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   289163259
     */
    virtual ~PackDiscoveryError();
    /**
     * @vftbl  2
     * @symbol ?getLocErrorMessageMap@PackDiscoveryError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     * @hash   890930426
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getLocErrorMessageMap() const;
    /**
     * @vftbl  3
     * @symbol ?getEventErrorMessageMap@PackDiscoveryError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
     * @hash   2025109504
     */
    virtual class std::unordered_map<int, std::string, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::string>>> const & getEventErrorMessageMap() const;
    /**
     * @symbol ??0PackDiscoveryError@@QEAA@W4PackParseErrorType@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1132350158
     */
    MCAPI PackDiscoveryError(enum class PackParseErrorType, std::vector<std::string> const &);

};