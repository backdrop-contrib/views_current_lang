# Views Field Current Language

Provides a field handler for values related to the currently active user
interface language.

This can be useful, if you'd like to use such values in an override.

Provided values via *Global: Current language* are:

- Language code (for example, "en" or "de")
- Language name (the English name of a language)
- Native name (language names in their own language)
- Language prefix (the path prefix configured in Locale for this language,
  often but not always same as language code)

Core provides views filters and contextual filters for the currently active
langugage, but does not provide the current UI language as a views field.

## Installation

Install this module using the [official Backdrop CMS instructions](https://docs.backdropcms.org/documentation/extend-with-modules).

## Dependencies

- Views (core)
- Locale (core)

## Issues

Bugs and feature requests should be reported in the [Issue Queue](https://github.com/backdrop-contrib/views_current_lang/issues).

## Current maintainers

* [Indigoxela](https://github.com/indigoxela)

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.
