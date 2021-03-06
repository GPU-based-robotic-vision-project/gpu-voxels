// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE in the top
// directory of the source code.
//
// © Copyright 2018 FZI Forschungszentrum Informatik, Karlsruhe, Germany
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2007-11-02
 *
 * \brief   Contains import/export definitions for the Win32 plattform.
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_LOGGING_IMPORT_EXPORT_H_INCLUDED
#define ICL_CORE_LOGGING_IMPORT_EXPORT_H_INCLUDED

#if defined(_SYSTEM_WIN32_) && !defined(_IC_STATIC_)
#  pragma warning ( disable : 4251 )

# if defined ICL_CORE_LOGGING_EXPORT_SYMBOLS
#  define ICL_CORE_LOGGING_IMPORT_EXPORT __declspec(dllexport)
# else
#  define ICL_CORE_LOGGING_IMPORT_EXPORT __declspec(dllimport)
# endif

#elif defined(__GNUC__) && (__GNUC__ > 3) && !defined(_IC_STATIC_)

# define ICL_CORE_LOGGING_IMPORT_EXPORT __attribute__ ((visibility("default")))

#else

# define ICL_CORE_LOGGING_IMPORT_EXPORT

#endif

#endif
