/**
 * @file  OnExtractSideBySide.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnExtractSideBySide.
 *
 */
struct OnExtractSideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONEXTRACTSIDEBYSIDE
public:
    struct OnExtractSideBySide& operator=(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide() = delete;
#endif

public:
    /**
     * @symbol ?createContext@OnExtractSideBySide@@QEBA?AUExtractionSystemContext@@XZ
     * @hash   1801344466
     */
    MCAPI struct ExtractionSystemContext createContext() const;

};