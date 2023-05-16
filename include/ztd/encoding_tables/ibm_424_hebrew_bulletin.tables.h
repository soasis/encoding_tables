// =============================================================================
//
// ztd.encoding_tables
// Copyright © 2022-2023 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
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

#ifndef ZTD_ENCODING_TABLES_IBM_424_HEBREW_BULLETIN_TABLES_H
#define ZTD_ENCODING_TABLES_IBM_424_HEBREW_BULLETIN_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_ibm_424_hebrew_bulletin_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_ibm_424_hebrew_bulletin_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_EXTERN_C_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_ibm_424_hebrew_bulletin_index_code_point_map[]
     = {
	       { 0x00, 0x0000 },
	       { 0x01, 0x0001 },
	       { 0x02, 0x0002 },
	       { 0x03, 0x0003 },
	       { 0x04, 0x009C },
	       { 0x05, 0x0009 },
	       { 0x06, 0x0086 },
	       { 0x07, 0x007F },
	       { 0x08, 0x0097 },
	       { 0x09, 0x008D },
	       { 0x0A, 0x008E },
	       { 0x0B, 0x000B },
	       { 0x0C, 0x000C },
	       { 0x0D, 0x000D },
	       { 0x0E, 0x000E },
	       { 0x0F, 0x000F },
	       { 0x10, 0x0010 },
	       { 0x11, 0x0011 },
	       { 0x12, 0x0012 },
	       { 0x13, 0x0013 },
	       { 0x14, 0x009D },
	       { 0x15, 0x0085 },
	       { 0x16, 0x0008 },
	       { 0x17, 0x0087 },
	       { 0x18, 0x0018 },
	       { 0x19, 0x0019 },
	       { 0x1A, 0x0092 },
	       { 0x1B, 0x008F },
	       { 0x1C, 0x001C },
	       { 0x1D, 0x001D },
	       { 0x1E, 0x001E },
	       { 0x1F, 0x001F },
	       { 0x20, 0x0080 },
	       { 0x21, 0x0081 },
	       { 0x22, 0x0082 },
	       { 0x23, 0x0083 },
	       { 0x24, 0x0084 },
	       { 0x25, 0x000A },
	       { 0x26, 0x0017 },
	       { 0x27, 0x001B },
	       { 0x28, 0x0088 },
	       { 0x29, 0x0089 },
	       { 0x2A, 0x008A },
	       { 0x2B, 0x008B },
	       { 0x2C, 0x008C },
	       { 0x2D, 0x0005 },
	       { 0x2E, 0x0006 },
	       { 0x2F, 0x0007 },
	       { 0x30, 0x0090 },
	       { 0x31, 0x0091 },
	       { 0x32, 0x0016 },
	       { 0x33, 0x0093 },
	       { 0x34, 0x0094 },
	       { 0x35, 0x0095 },
	       { 0x36, 0x0096 },
	       { 0x37, 0x0004 },
	       { 0x38, 0x0098 },
	       { 0x39, 0x0099 },
	       { 0x3A, 0x009A },
	       { 0x3B, 0x009B },
	       { 0x3C, 0x0014 },
	       { 0x3D, 0x0015 },
	       { 0x3E, 0x009E },
	       { 0x3F, 0x001A },
	       { 0x40, 0x0020 },
	       { 0x41, 0x05D0 },
	       { 0x42, 0x05D1 },
	       { 0x43, 0x05D2 },
	       { 0x44, 0x05D3 },
	       { 0x45, 0x05D4 },
	       { 0x46, 0x05D5 },
	       { 0x47, 0x05D6 },
	       { 0x48, 0x05D7 },
	       { 0x49, 0x05D8 },
	       { 0x4A, 0x00A2 },
	       { 0x4B, 0x002E },
	       { 0x4C, 0x003C },
	       { 0x4D, 0x0028 },
	       { 0x4E, 0x002B },
	       { 0x4F, 0x007C },
	       { 0x50, 0x0026 },
	       { 0x51, 0x05D9 },
	       { 0x52, 0x05DA },
	       { 0x53, 0x05DB },
	       { 0x54, 0x05DC },
	       { 0x55, 0x05DD },
	       { 0x56, 0x05DE },
	       { 0x57, 0x05DF },
	       { 0x58, 0x05E0 },
	       { 0x59, 0x05E1 },
	       { 0x5A, 0x0021 },
	       { 0x5B, 0x0024 },
	       { 0x5C, 0x002A },
	       { 0x5D, 0x0029 },
	       { 0x5E, 0x003B },
	       { 0x5F, 0x00AC },
	       { 0x60, 0x002D },
	       { 0x61, 0x002F },
	       { 0x62, 0x05E2 },
	       { 0x63, 0x05E3 },
	       { 0x64, 0x05E4 },
	       { 0x65, 0x05E5 },
	       { 0x66, 0x05E6 },
	       { 0x67, 0x05E7 },
	       { 0x68, 0x05E8 },
	       { 0x69, 0x05E9 },
	       { 0x6A, 0x00A6 },
	       { 0x6B, 0x002C },
	       { 0x6C, 0x0025 },
	       { 0x6D, 0x005F },
	       { 0x6E, 0x003E },
	       { 0x6F, 0x003F },
	       { 0x70, 0xFFFF },
	       { 0x71, 0x05EA },
	       { 0x72, 0xFFFF },
	       { 0x73, 0xFFFF },
	       { 0x74, 0x00A0 },
	       { 0x75, 0xFFFF },
	       { 0x76, 0xFFFF },
	       { 0x77, 0xFFFF },
	       { 0x78, 0x2017 },
	       { 0x79, 0x0060 },
	       { 0x7A, 0x003A },
	       { 0x7B, 0x0023 },
	       { 0x7C, 0x0040 },
	       { 0x7D, 0x0027 },
	       { 0x7E, 0x003D },
	       { 0x7F, 0x0022 },
	       { 0x80, 0xFFFF },
	       { 0x81, 0x0061 },
	       { 0x82, 0x0062 },
	       { 0x83, 0x0063 },
	       { 0x84, 0x0064 },
	       { 0x85, 0x0065 },
	       { 0x86, 0x0066 },
	       { 0x87, 0x0067 },
	       { 0x88, 0x0068 },
	       { 0x89, 0x0069 },
	       { 0x8A, 0x00AB },
	       { 0x8B, 0x00BB },
	       { 0x8C, 0xFFFF },
	       { 0x8D, 0xFFFF },
	       { 0x8E, 0xFFFF },
	       { 0x8F, 0x00B1 },
	       { 0x90, 0x00B0 },
	       { 0x91, 0x006A },
	       { 0x92, 0x006B },
	       { 0x93, 0x006C },
	       { 0x94, 0x006D },
	       { 0x95, 0x006E },
	       { 0x96, 0x006F },
	       { 0x97, 0x0070 },
	       { 0x98, 0x0071 },
	       { 0x99, 0x0072 },
	       { 0x9A, 0xFFFF },
	       { 0x9B, 0xFFFF },
	       { 0x9C, 0xFFFF },
	       { 0x9D, 0x00B8 },
	       { 0x9E, 0xFFFF },
	       { 0x9F, 0x00A4 },
	       { 0xA0, 0x00B5 },
	       { 0xA1, 0x007E },
	       { 0xA2, 0x0073 },
	       { 0xA3, 0x0074 },
	       { 0xA4, 0x0075 },
	       { 0xA5, 0x0076 },
	       { 0xA6, 0x0077 },
	       { 0xA7, 0x0078 },
	       { 0xA8, 0x0079 },
	       { 0xA9, 0x007A },
	       { 0xAA, 0xFFFF },
	       { 0xAB, 0xFFFF },
	       { 0xAC, 0xFFFF },
	       { 0xAD, 0xFFFF },
	       { 0xAE, 0xFFFF },
	       { 0xAF, 0x00AE },
	       { 0xB0, 0x005E },
	       { 0xB1, 0x00A3 },
	       { 0xB2, 0x00A5 },
	       { 0xB3, 0x00B7 },
	       { 0xB4, 0x00A9 },
	       { 0xB5, 0x00A7 },
	       { 0xB6, 0x00B6 },
	       { 0xB7, 0x00BC },
	       { 0xB8, 0x00BD },
	       { 0xB9, 0x00BE },
	       { 0xBA, 0x005B },
	       { 0xBB, 0x005D },
	       { 0xBC, 0x00AF },
	       { 0xBD, 0x00A8 },
	       { 0xBE, 0x00B4 },
	       { 0xBF, 0x00D7 },
	       { 0xC0, 0x007B },
	       { 0xC1, 0x0041 },
	       { 0xC2, 0x0042 },
	       { 0xC3, 0x0043 },
	       { 0xC4, 0x0044 },
	       { 0xC5, 0x0045 },
	       { 0xC6, 0x0046 },
	       { 0xC7, 0x0047 },
	       { 0xC8, 0x0048 },
	       { 0xC9, 0x0049 },
	       { 0xCA, 0x00AD },
	       { 0xCB, 0xFFFF },
	       { 0xCC, 0xFFFF },
	       { 0xCD, 0xFFFF },
	       { 0xCE, 0xFFFF },
	       { 0xCF, 0xFFFF },
	       { 0xD0, 0x007D },
	       { 0xD1, 0x004A },
	       { 0xD2, 0x004B },
	       { 0xD3, 0x004C },
	       { 0xD4, 0x004D },
	       { 0xD5, 0x004E },
	       { 0xD6, 0x004F },
	       { 0xD7, 0x0050 },
	       { 0xD8, 0x0051 },
	       { 0xD9, 0x0052 },
	       { 0xDA, 0x00B9 },
	       { 0xDB, 0xFFFF },
	       { 0xDC, 0xFFFF },
	       { 0xDD, 0xFFFF },
	       { 0xDE, 0xFFFF },
	       { 0xDF, 0xFFFF },
	       { 0xE0, 0x005C },
	       { 0xE1, 0x00F7 },
	       { 0xE2, 0x0053 },
	       { 0xE3, 0x0054 },
	       { 0xE4, 0x0055 },
	       { 0xE5, 0x0056 },
	       { 0xE6, 0x0057 },
	       { 0xE7, 0x0058 },
	       { 0xE8, 0x0059 },
	       { 0xE9, 0x005A },
	       { 0xEA, 0x00B2 },
	       { 0xEB, 0xFFFF },
	       { 0xEC, 0xFFFF },
	       { 0xED, 0xFFFF },
	       { 0xEE, 0xFFFF },
	       { 0xEF, 0xFFFF },
	       { 0xF0, 0x0030 },
	       { 0xF1, 0x0031 },
	       { 0xF2, 0x0032 },
	       { 0xF3, 0x0033 },
	       { 0xF4, 0x0034 },
	       { 0xF5, 0x0035 },
	       { 0xF6, 0x0036 },
	       { 0xF7, 0x0037 },
	       { 0xF8, 0x0038 },
	       { 0xF9, 0x0039 },
	       { 0xFA, 0x00B3 },
	       { 0xFB, 0xFFFF },
	       { 0xFC, 0xFFFF },
	       { 0xFD, 0xFFFF },
	       { 0xFE, 0xFFFF },
	       { 0xFF, 0x009F },
       };

#endif
