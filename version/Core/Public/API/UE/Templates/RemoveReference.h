// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

/**
 * TRemoveReference<type> will remove any references from a type.
 */
template <typename T> struct TRemoveReference      { typedef T Type; };
template <typename T> struct TRemoveReference<T& > { typedef T Type; };
template <typename T> struct TRemoveReference<T&&> { typedef T Type; };
