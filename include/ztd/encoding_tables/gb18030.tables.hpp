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

#ifndef ZTD_ENCODING_TABLES_GB18030_TABLES_HPP
#define ZTD_ENCODING_TABLES_GB18030_TABLES_HPP

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/gb18030.tables.h>
#include <ztd/encoding_tables/predicates.hpp>
#include <ztd/encoding_tables/generic.tables.hpp>
#include <ztd/ranges/algorithm.hpp>
#include <ztd/ranges/adl.hpp>

#include <cstddef>
#include <optional>
#include <iterator>
#include <algorithm>

#include <ztd/prologue.hpp>

namespace ztd { namespace et {
	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_OPEN_I_

	inline constexpr ::std::optional<uint32_t> gb18030_ranges_index_to_code_point(
		::std::size_t __lookup_index_pointer) noexcept {
		if ((__lookup_index_pointer > 39419 && __lookup_index_pointer < 189000) || __lookup_index_pointer > 1237575) {
			return ::std::nullopt;
		}
		if (__lookup_index_pointer == 7457) {
			return U'\uE7C7';
		}
		::std::uint_least32_t __lookup_index = static_cast<::std::uint_least32_t>(__lookup_index_pointer);
		auto __last                          = ::ztd::ranges::cend(ztd_et_gb18030_ranges_index_code_point_map);
		auto __first                         = ::ztd::ranges::cbegin(ztd_et_gb18030_ranges_index_code_point_map);
		auto __it = ::std::lower_bound(::ztd::ranges::cbegin(ztd_et_gb18030_ranges_index_code_point_map), __last,
			__lookup_index, &::ztd::et::less_than_index32_target);
		if (__it == __first) {
			return ::std::nullopt;
		}
		--__it;
		const ::ztd::et::index32_code_point_t& __index_and_codepoint = *__it;
		const auto __offset                                          = __index_and_codepoint[0];
		const auto __code_point_offset                               = __index_and_codepoint[1];
		const uint_least32_t __code
			= static_cast<uint_least32_t>((__code_point_offset + __lookup_index_pointer) - __offset);
		return __code;
	}

	inline constexpr ::std::optional<::std::size_t> gb18030_ranges_code_point_to_index(
		::std::uint_least32_t __lookup_code_point) noexcept {
		if (__lookup_code_point == U'\uE7C7') {
			return 7457;
		}
		auto __first = ::ztd::ranges::cbegin(ztd_et_gb18030_ranges_index_code_point_map);
		auto __last  = ::ztd::ranges::cend(ztd_et_gb18030_ranges_index_code_point_map);
		auto __it
			= ::std::lower_bound(__first, __last, __lookup_code_point, &::ztd::et::less_than_code_point32_target);
		if (__it == __first) {
			return ::std::nullopt;
		}
		--__it;
		const ::ztd::et::index32_code_point_t& __index_and_codepoint = *__it;
		const auto __offset                                          = __index_and_codepoint[1];
		const auto __index_offset                                    = __index_and_codepoint[0];
		return static_cast<::std::size_t>((__index_offset + __lookup_code_point) - __offset);
	}

	inline constexpr ::std::optional<::std::uint_least32_t> gb18030_index_to_code_point(
		::std::size_t __lookup_index_pointer) noexcept {
		return ::ztd::et::generic_index_to_code_point<index32_code_point_t>(
			ztd_gb18030_index_code_point_map, __lookup_index_pointer);
	}

	inline constexpr ::std::optional<::std::size_t> gb18030_code_point_to_index(
		::std::uint_least32_t __lookup_code_point) noexcept {
		return ::ztd::et::generic_code_point_to_index<index32_code_point_t>(
			ztd_gb18030_index_code_point_map, __lookup_code_point);
	}

	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::et

#include <ztd/epilogue.hpp>

#endif
