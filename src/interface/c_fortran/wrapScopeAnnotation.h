// wrapScopeAnnotation.h
// This file is generated by Shroud 0.12.1. Do not edit.
/**
 * \file wrapScopeAnnotation.h
 * \brief Shroud generated wrapper for ScopeAnnotation class
 */
// For C users and C++ implementation

#ifndef WRAPSCOPEANNOTATION_H
#define WRAPSCOPEANNOTATION_H

#include "typesCaliper.h"

// splicer begin class.ScopeAnnotation.CXX_declarations
// splicer end class.ScopeAnnotation.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin class.ScopeAnnotation.C_declarations
// splicer end class.ScopeAnnotation.C_declarations

cali_ScopeAnnotation * cali_ScopeAnnotation_begin(const char * name,
    cali_ScopeAnnotation * SHC_rv);

void cali_ScopeAnnotation_end(cali_ScopeAnnotation * self);

#ifdef __cplusplus
}
#endif

#endif  // WRAPSCOPEANNOTATION_H