/**
 * @file  PhotoItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PhotoItem.
 *
 */
class PhotoItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOITEM
public:
    class PhotoItem& operator=(class PhotoItem const &) = delete;
    PhotoItem(class PhotoItem const &) = delete;
    PhotoItem() = delete;
#endif

public:
    /**
     * @symbol ?TAG_PHOTO_NAME@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -594828133
     */
    MCAPI static std::string const TAG_PHOTO_NAME;
    /**
     * @symbol ?TAG_PHOTO_OWNER@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   237660313
     */
    MCAPI static std::string const TAG_PHOTO_OWNER;
    /**
     * @symbol ?TAG_PHOTO_UUID@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   327090811
     */
    MCAPI static std::string const TAG_PHOTO_UUID;

};