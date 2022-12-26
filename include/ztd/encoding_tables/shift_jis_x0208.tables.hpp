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

#ifndef ZTD_ENCODING_TABLES_SHIFT_JIS_X0208_TABLES_HPP
#define ZTD_ENCODING_TABLES_SHIFT_JIS_X0208_TABLES_HPP

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/shift_jis_x0208.tables.h>
#include <ztd/encoding_tables/predicates.hpp>
#include <ztd/ranges/algorithm.hpp>
#include <ztd/ranges/adl.hpp>

#include <cstddef>
#include <optional>

#include <ztd/prologue.hpp>

namespace ztd { namespace et {
	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_OPEN_I_

	inline constexpr ::std::optional<uint_least32_t> shift_jis_x0208_index_to_code_point(
		::std::size_t __lookup_index_pointer) noexcept {
		const ztd_et_index16 __lookup_index = static_cast<ztd_et_index16>(__lookup_index_pointer);
		auto __it_and_last
			= ::ztd::ranges::lower_bound(::ztd::ranges::cbegin(ztd_shift_jis_x0208_index_code_point_map),
			     ::ztd::ranges::cend(ztd_shift_jis_x0208_index_code_point_map), __lookup_index,
			     &::ztd::et::less_than_index16_target);
		if (__it_and_last.current == __it_and_last.last) {
			return ::std::nullopt;
		}
		const ztd_et_index16_code_point_t& __index_and_codepoint = *__it_and_last.current;
		if (__index_and_codepoint[0] != __lookup_index) {
			return ::std::nullopt;
		}
		return static_cast<uint_least32_t>(__index_and_codepoint[1]);
	}

	inline constexpr ::std::optional<::std::size_t> shift_jis_x0208_code_point_to_index(
		uint_least32_t __lookup_code_point) noexcept {
		auto __predicate = [&__lookup_code_point](const ztd_et_index16_code_point_t& __value) {
			return __lookup_code_point == __value[1] && !(__value[0] > 8272 && __value[0] < 8835);
		};
		auto __it_and_last = ::ztd::ranges::find_if(::ztd::ranges::cbegin(ztd_shift_jis_x0208_index_code_point_map),
			::ztd::ranges::cend(ztd_shift_jis_x0208_index_code_point_map), __predicate);
		if (__it_and_last.current == __it_and_last.last) {
			return std::nullopt;
		}
		const ztd_et_index16_code_point_t& __index_and_codepoint = *__it_and_last.current;
		return static_cast<::std::size_t>(__index_and_codepoint[0]);
	}

	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::et

#include <ztd/epilogue.hpp>

#endif
