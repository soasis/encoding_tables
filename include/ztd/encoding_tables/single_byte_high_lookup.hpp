


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

#ifndef ZTD_ENCODING_TABLES_SINGLE_BYTE_HIGH_LOOKUP_HPP
#define ZTD_ENCODING_TABLES_SINGLE_BYTE_HIGH_LOOKUP_HPP

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/predicates.hpp>

#include <ztd/idk/charN_t.hpp>
#include <ztd/idk/type_traits.hpp>
#include <ztd/ranges/algorithm.hpp>
#include <ztd/ranges/adl.hpp>

#include <cstddef>
#include <optional>

#include <ztd/prologue.hpp>

namespace ztd { namespace et {
	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_OPEN_I_

	template <ztd_char32_t _FailureCodePoint = 0xFFFFu, typename _Table>
	inline constexpr ::std::optional<::std::uint_least32_t> single_byte_high_index_to_code_point(
		_Table& __table, ::std::size_t __lookup_index_pointer) noexcept {
		// standard lookup table
		auto __first                    = ::ztd::ranges::cbegin(__table);
		auto __last                     = ::ztd::ranges::cend(__table);
		using _IndexCodePointType       = decltype(*__first);
		using _IndexType                = decltype(*__first[0]);
		const _IndexType __lookup_index = static_cast<_IndexType>(__lookup_index_pointer);
		auto __it_and_last              = ::ztd::ranges::lower_bound(
               __first, __last, __lookup_index, &::ztd::et::less_than_index_target<_IndexCodePointType>);
		if (__it_and_last.current == __it_and_last.last) {
			return ::std::nullopt;
		}
		const auto& __index_and_codepoint = *__it_and_last.current;
		if (__index_and_codepoint[0] != __lookup_index) {
			return ::std::nullopt;
		}
		if constexpr (_FailureCodePoint != 0) {
			if (__index_and_codepoint[0] == static_cast<_IndexType>(_FailureCodePoint)) {
				return ::std::nullopt;
			}
		}
		return static_cast<uint_least32_t>(__index_and_codepoint[1]);
	}

	template <ztd_char32_t _FailureCodePoint = 0xFFFFu, typename _Table>
	inline constexpr ::std::optional<::std::size_t> single_byte_high_code_point_to_index(
		const _Table& __table, ::std::uint_least32_t __lookup_code_point) noexcept {
		auto __first            = ::ztd::ranges::cbegin(__table);
		auto __last             = ::ztd::ranges::cend(__table);
		using _TableElementType = ::ztd::remove_cvref_t<decltype(*__first)>;
		auto __predicate
			= [&__lookup_code_point](const _TableElementType& __value) { return __lookup_code_point == __value[1]; };
		auto __it_and_last = ::ztd::ranges::find_if(__first, __last, __predicate);
		if (__it_and_last.current == __it_and_last.last) {
			return std::nullopt;
		}
		const _TableElementType& __index_and_codepoint = *__it_and_last.current;
		if constexpr (_FailureCodePoint != 0) {
			if (__index_and_codepoint[0] == _FailureCodePoint) {
				return ::std::nullopt;
			}
		}
		return static_cast<::std::size_t>(__index_and_codepoint[0]);
	}

	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::et

#include <ztd/epilogue.hpp>

#endif
