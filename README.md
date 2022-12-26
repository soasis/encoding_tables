# `ztd.encoding_tables`

This is the ENCODING_TABLES (Industrial Development Kit) library, part of the ZTD collection. The ENCODING_TABLES is a small, useful toolbox of supplementary things, including:

- The `ztd.encoding_tables` core library:
	- A small collection of type traits, optimizations, and other semi-niche utilities for accelerating development.
	- Small, header-only.
	- CMake: `ztd::encoding_tables`
- The `ztd.tag_invoke` customization point library:
	- Modeled after C++ Proposal [P1985](https://wg21.link/p1895).
	- Makes for a single extension point to be written, `tag_invoke(...)`, whose first argument is the name of the extension point to be hooking into. E.g., `tag_invoke(tag_t<lua_push>, ...)`.
	- Tiny, header-only.
	- CMake: `ztd::tag_invoke`
- The `ztd.version` configuration macro library:
	- A formalization of the principles found in [this post](https://thephd.dev/versioning-and-other-boilerplate) and [this post](https://thephd.dev/versioning-and-other-boilerplate-part-2).
	- Mistake-resistant configuration and default-on/off vs. deliberate on/off detection.
	- Infinitesimally tiny, header-only.
	- CMake: `ztd::version`
- And more!

All of these utilities should be header-only, and come with CMake build files for ease of use. Simply depend on `ztd::encoding_tables` or `ztd::tag_invoke`. You can find the [the library documentation here (https://ztdencoding_tables.rtfd.io)](https://ztdencoding_tables.rtfd.io/).
