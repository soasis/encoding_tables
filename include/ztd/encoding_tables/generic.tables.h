// =============================================================================
//
// ztd.encoding_tables
// Copyright © 2022-2023 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.encoding_tables licenses may use this file in
// accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================ //

#pragma once

#ifndef ZTD_ENCODING_TABLES_GENERIC_TABLES_H
#define ZTD_ENCODING_TABLES_GENERIC_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

#include <ztd/idk/extent.h>

ZTD_EXTERN_C_I_ bool ztdc_generic_index32_to_code_point(size_t __index_to_code_point_map_size,
     const ztd_et_index32_code_point_t
          __index_to_code_point_map_arr[ZTD_STATIC_PTR_EXTENT_I_(__index_to_code_point_map_size)],
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_generic_code_point_to_index32(size_t __index_to_code_point_map_size,
     const ztd_et_index32_code_point_t
          __index_to_code_point_map_arr[ZTD_STATIC_PTR_EXTENT_I_(__index_to_code_point_map_size)],
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_EXTERN_C_I_ bool ztdc_generic_index16_to_code_point(size_t __index_to_code_point_map_size,
     const ztd_et_index16_code_point_t
          __index_to_code_point_map_arr[ZTD_STATIC_PTR_EXTENT_I_(__index_to_code_point_map_size)],
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_generic_code_point_to_index16(size_t __index_to_code_point_map_size,
     const ztd_et_index16_code_point_t
          __index_to_code_point_map_arr[ZTD_STATIC_PTR_EXTENT_I_(__index_to_code_point_map_size)],
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

#endif
