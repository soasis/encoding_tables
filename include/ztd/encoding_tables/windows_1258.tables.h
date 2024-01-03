// =============================================================================
//
// ztd.encoding_tables
// Copyright © JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.encoding_tables licenses may use
// this file in accordance with the commercial license agreement provided
// with the Software or, alternatively, in accordance with the terms
// contained in a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use
// this file except in compliance with the License. You may obtain a copy
// of the License at
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

#ifndef ZTD_ENCODING_TABLES_WINDOWS_1258_TABLES_H
#define ZTD_ENCODING_TABLES_WINDOWS_1258_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_windows_1258_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_windows_1258_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_windows_1258_index_code_point_map[128]
#if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
     = {
	       { (0x80 - 0x80), 0x20AC },
	       { (0x81 - 0x80), 0xFFFF },
	       { (0x82 - 0x80), 0x201A },
	       { (0x83 - 0x80), 0x0192 },
	       { (0x84 - 0x80), 0x201E },
	       { (0x85 - 0x80), 0x2026 },
	       { (0x86 - 0x80), 0x2020 },
	       { (0x87 - 0x80), 0x2021 },
	       { (0x88 - 0x80), 0x02C6 },
	       { (0x89 - 0x80), 0x2030 },
	       { (0x8A - 0x80), 0xFFFF },
	       { (0x8B - 0x80), 0x2039 },
	       { (0x8C - 0x80), 0x0152 },
	       { (0x8D - 0x80), 0xFFFF },
	       { (0x8E - 0x80), 0xFFFF },
	       { (0x8F - 0x80), 0xFFFF },
	       { (0x90 - 0x80), 0xFFFF },
	       { (0x91 - 0x80), 0x2018 },
	       { (0x92 - 0x80), 0x2019 },
	       { (0x93 - 0x80), 0x201C },
	       { (0x94 - 0x80), 0x201D },
	       { (0x95 - 0x80), 0x2022 },
	       { (0x96 - 0x80), 0x2013 },
	       { (0x97 - 0x80), 0x2014 },
	       { (0x98 - 0x80), 0x02DC },
	       { (0x99 - 0x80), 0x2122 },
	       { (0x9A - 0x80), 0xFFFF },
	       { (0x9B - 0x80), 0x203A },
	       { (0x9C - 0x80), 0x0153 },
	       { (0x9D - 0x80), 0xFFFF },
	       { (0x9E - 0x80), 0xFFFF },
	       { (0x9F - 0x80), 0x0178 },
	       { (0xA0 - 0x80), 0x00A0 },
	       { (0xA1 - 0x80), 0x00A1 },
	       { (0xA2 - 0x80), 0x00A2 },
	       { (0xA3 - 0x80), 0x00A3 },
	       { (0xA4 - 0x80), 0x00A4 },
	       { (0xA5 - 0x80), 0x00A5 },
	       { (0xA6 - 0x80), 0x00A6 },
	       { (0xA7 - 0x80), 0x00A7 },
	       { (0xA8 - 0x80), 0x00A8 },
	       { (0xA9 - 0x80), 0x00A9 },
	       { (0xAA - 0x80), 0x00AA },
	       { (0xAB - 0x80), 0x00AB },
	       { (0xAC - 0x80), 0x00AC },
	       { (0xAD - 0x80), 0x00AD },
	       { (0xAE - 0x80), 0x00AE },
	       { (0xAF - 0x80), 0x00AF },
	       { (0xB0 - 0x80), 0x00B0 },
	       { (0xB1 - 0x80), 0x00B1 },
	       { (0xB2 - 0x80), 0x00B2 },
	       { (0xB3 - 0x80), 0x00B3 },
	       { (0xB4 - 0x80), 0x00B4 },
	       { (0xB5 - 0x80), 0x00B5 },
	       { (0xB6 - 0x80), 0x00B6 },
	       { (0xB7 - 0x80), 0x00B7 },
	       { (0xB8 - 0x80), 0x00B8 },
	       { (0xB9 - 0x80), 0x00B9 },
	       { (0xBA - 0x80), 0x00BA },
	       { (0xBB - 0x80), 0x00BB },
	       { (0xBC - 0x80), 0x00BC },
	       { (0xBD - 0x80), 0x00BD },
	       { (0xBE - 0x80), 0x00BE },
	       { (0xBF - 0x80), 0x00BF },
	       { (0xC0 - 0x80), 0x00C0 },
	       { (0xC1 - 0x80), 0x00C1 },
	       { (0xC2 - 0x80), 0x00C2 },
	       { (0xC3 - 0x80), 0x0102 },
	       { (0xC4 - 0x80), 0x00C4 },
	       { (0xC5 - 0x80), 0x00C5 },
	       { (0xC6 - 0x80), 0x00C6 },
	       { (0xC7 - 0x80), 0x00C7 },
	       { (0xC8 - 0x80), 0x00C8 },
	       { (0xC9 - 0x80), 0x00C9 },
	       { (0xCA - 0x80), 0x00CA },
	       { (0xCB - 0x80), 0x00CB },
	       { (0xCC - 0x80), 0x0300 },
	       { (0xCD - 0x80), 0x00CD },
	       { (0xCE - 0x80), 0x00CE },
	       { (0xCF - 0x80), 0x00CF },
	       { (0xD0 - 0x80), 0x0110 },
	       { (0xD1 - 0x80), 0x00D1 },
	       { (0xD2 - 0x80), 0x0309 },
	       { (0xD3 - 0x80), 0x00D3 },
	       { (0xD4 - 0x80), 0x00D4 },
	       { (0xD5 - 0x80), 0x01A0 },
	       { (0xD6 - 0x80), 0x00D6 },
	       { (0xD7 - 0x80), 0x00D7 },
	       { (0xD8 - 0x80), 0x00D8 },
	       { (0xD9 - 0x80), 0x00D9 },
	       { (0xDA - 0x80), 0x00DA },
	       { (0xDB - 0x80), 0x00DB },
	       { (0xDC - 0x80), 0x00DC },
	       { (0xDD - 0x80), 0x01AF },
	       { (0xDE - 0x80), 0x0303 },
	       { (0xDF - 0x80), 0x00DF },
	       { (0xE0 - 0x80), 0x00E0 },
	       { (0xE1 - 0x80), 0x00E1 },
	       { (0xE2 - 0x80), 0x00E2 },
	       { (0xE3 - 0x80), 0x0103 },
	       { (0xE4 - 0x80), 0x00E4 },
	       { (0xE5 - 0x80), 0x00E5 },
	       { (0xE6 - 0x80), 0x00E6 },
	       { (0xE7 - 0x80), 0x00E7 },
	       { (0xE8 - 0x80), 0x00E8 },
	       { (0xE9 - 0x80), 0x00E9 },
	       { (0xEA - 0x80), 0x00EA },
	       { (0xEB - 0x80), 0x00EB },
	       { (0xEC - 0x80), 0x0301 },
	       { (0xED - 0x80), 0x00ED },
	       { (0xEE - 0x80), 0x00EE },
	       { (0xEF - 0x80), 0x00EF },
	       { (0xF0 - 0x80), 0x0111 },
	       { (0xF1 - 0x80), 0x00F1 },
	       { (0xF2 - 0x80), 0x0323 },
	       { (0xF3 - 0x80), 0x00F3 },
	       { (0xF4 - 0x80), 0x00F4 },
	       { (0xF5 - 0x80), 0x01A1 },
	       { (0xF6 - 0x80), 0x00F6 },
	       { (0xF7 - 0x80), 0x00F7 },
	       { (0xF8 - 0x80), 0x00F8 },
	       { (0xF9 - 0x80), 0x00F9 },
	       { (0xFA - 0x80), 0x00FA },
	       { (0xFB - 0x80), 0x00FB },
	       { (0xFC - 0x80), 0x00FC },
	       { (0xFD - 0x80), 0x01B0 },
	       { (0xFE - 0x80), 0x20AB },
	       { (0xFF - 0x80), 0x00FF },
       };
#else
     ;
#endif

#endif
