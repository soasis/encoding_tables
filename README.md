# `ztd.encoding_tables`

This is a support library containing shared encoding tables between C and C++. It is a separate library to prevent any sort of header or implementation-based bloat.

The tables are usually sourced from one of the following places, when it is not come up with by just observing output in the wild:

- WHATWG's Encoding Specification (https://encoding.spec.whatwg.org/)
- For Unicode and from the Unicode Consortium (https://www.unicode.org/):
	- The UCD and its derivatives (https://www.unicode.org/ucd/)
	- Unicode's (Legacy) Mapping Data (https://www.unicode.org/Public/MAPPINGS/)
- Vendor Documentation and Manuals when it is clear the encoding is not patented or has entered the Public Domain / CC0.
