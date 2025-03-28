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

#ifndef ZTD_ENCODING_TABLES_WINDOWS_1256_TABLES_H
#define ZTD_ENCODING_TABLES_WINDOWS_1256_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_windows_1256_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_USE(ZTD_NOEXCEPT_IF_CXX);
ZTD_EXTERN_C_I_ bool ztdc_windows_1256_code_point_to_index(uint_least32_t __lookup_code_point, size_t* __p_index)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX);

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_windows_1256_index_code_point_map[128]
#if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
     = {
	       { (0x80 - 0x80), 0x20AC },
	       { (0x81 - 0x80), 0x067E },
	       { (0x82 - 0x80), 0x201A },
	       { (0x83 - 0x80), 0x0192 },
	       { (0x84 - 0x80), 0x201E },
	       { (0x85 - 0x80), 0x2026 },
	       { (0x86 - 0x80), 0x2020 },
	       { (0x87 - 0x80), 0x2021 },
	       { (0x88 - 0x80), 0x02C6 },
	       { (0x89 - 0x80), 0x2030 },
	       { (0x8A - 0x80), 0x0679 },
	       { (0x8B - 0x80), 0x2039 },
	       { (0x8C - 0x80), 0x0152 },
	       { (0x8D - 0x80), 0x0686 },
	       { (0x8E - 0x80), 0x0698 },
	       { (0x8F - 0x80), 0x0688 },
	       { (0x90 - 0x80), 0x06AF },
	       { (0x91 - 0x80), 0x2018 },
	       { (0x92 - 0x80), 0x2019 },
	       { (0x93 - 0x80), 0x201C },
	       { (0x94 - 0x80), 0x201D },
	       { (0x95 - 0x80), 0x2022 },
	       { (0x96 - 0x80), 0x2013 },
	       { (0x97 - 0x80), 0x2014 },
	       { (0x98 - 0x80), 0x06A9 },
	       { (0x99 - 0x80), 0x2122 },
	       { (0x9A - 0x80), 0x0691 },
	       { (0x9B - 0x80), 0x203A },
	       { (0x9C - 0x80), 0x0153 },
	       { (0x9D - 0x80), 0x200C },
	       { (0x9E - 0x80), 0x200D },
	       { (0x9F - 0x80), 0x06BA },
	       { (0xA0 - 0x80), 0x00A0 },
	       { (0xA1 - 0x80), 0x060C },
	       { (0xA2 - 0x80), 0x00A2 },
	       { (0xA3 - 0x80), 0x00A3 },
	       { (0xA4 - 0x80), 0x00A4 },
	       { (0xA5 - 0x80), 0x00A5 },
	       { (0xA6 - 0x80), 0x00A6 },
	       { (0xA7 - 0x80), 0x00A7 },
	       { (0xA8 - 0x80), 0x00A8 },
	       { (0xA9 - 0x80), 0x00A9 },
	       { (0xAA - 0x80), 0x06BE },
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
	       { (0xBA - 0x80), 0x061B },
	       { (0xBB - 0x80), 0x00BB },
	       { (0xBC - 0x80), 0x00BC },
	       { (0xBD - 0x80), 0x00BD },
	       { (0xBE - 0x80), 0x00BE },
	       { (0xBF - 0x80), 0x061F },
	       { (0xC0 - 0x80), 0x06C1 },
	       { (0xC1 - 0x80), 0x0621 },
	       { (0xC2 - 0x80), 0x0622 },
	       { (0xC3 - 0x80), 0x0623 },
	       { (0xC4 - 0x80), 0x0624 },
	       { (0xC5 - 0x80), 0x0625 },
	       { (0xC6 - 0x80), 0x0626 },
	       { (0xC7 - 0x80), 0x0627 },
	       { (0xC8 - 0x80), 0x0628 },
	       { (0xC9 - 0x80), 0x0629 },
	       { (0xCA - 0x80), 0x062A },
	       { (0xCB - 0x80), 0x062B },
	       { (0xCC - 0x80), 0x062C },
	       { (0xCD - 0x80), 0x062D },
	       { (0xCE - 0x80), 0x062E },
	       { (0xCF - 0x80), 0x062F },
	       { (0xD0 - 0x80), 0x0630 },
	       { (0xD1 - 0x80), 0x0631 },
	       { (0xD2 - 0x80), 0x0632 },
	       { (0xD3 - 0x80), 0x0633 },
	       { (0xD4 - 0x80), 0x0634 },
	       { (0xD5 - 0x80), 0x0635 },
	       { (0xD6 - 0x80), 0x0636 },
	       { (0xD7 - 0x80), 0x00D7 },
	       { (0xD8 - 0x80), 0x0637 },
	       { (0xD9 - 0x80), 0x0638 },
	       { (0xDA - 0x80), 0x0639 },
	       { (0xDB - 0x80), 0x063A },
	       { (0xDC - 0x80), 0x0640 },
	       { (0xDD - 0x80), 0x0641 },
	       { (0xDE - 0x80), 0x0642 },
	       { (0xDF - 0x80), 0x0643 },
	       { (0xE0 - 0x80), 0x00E0 },
	       { (0xE1 - 0x80), 0x0644 },
	       { (0xE2 - 0x80), 0x00E2 },
	       { (0xE3 - 0x80), 0x0645 },
	       { (0xE4 - 0x80), 0x0646 },
	       { (0xE5 - 0x80), 0x0647 },
	       { (0xE6 - 0x80), 0x0648 },
	       { (0xE7 - 0x80), 0x00E7 },
	       { (0xE8 - 0x80), 0x00E8 },
	       { (0xE9 - 0x80), 0x00E9 },
	       { (0xEA - 0x80), 0x00EA },
	       { (0xEB - 0x80), 0x00EB },
	       { (0xEC - 0x80), 0x0649 },
	       { (0xED - 0x80), 0x064A },
	       { (0xEE - 0x80), 0x00EE },
	       { (0xEF - 0x80), 0x00EF },
	       { (0xF0 - 0x80), 0x064B },
	       { (0xF1 - 0x80), 0x064C },
	       { (0xF2 - 0x80), 0x064D },
	       { (0xF3 - 0x80), 0x064E },
	       { (0xF4 - 0x80), 0x00F4 },
	       { (0xF5 - 0x80), 0x064F },
	       { (0xF6 - 0x80), 0x0650 },
	       { (0xF7 - 0x80), 0x00F7 },
	       { (0xF8 - 0x80), 0x0651 },
	       { (0xF9 - 0x80), 0x00F9 },
	       { (0xFA - 0x80), 0x0652 },
	       { (0xFB - 0x80), 0x00FB },
	       { (0xFC - 0x80), 0x00FC },
	       { (0xFD - 0x80), 0x200E },
	       { (0xFE - 0x80), 0x200F },
	       { (0xFF - 0x80), 0x06D2 },
       };
#else
     ;
#endif

#endif
