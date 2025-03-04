#ifndef _SWAY_PANGO_H
#define _SWAY_PANGO_H
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#ifdef HAVE_FONTS
#include <cairo.h>
#include <pango/pangocairo.h>
#endif

/**
 * Utility function which escape characters a & < > ' ".
 *
 * The function returns the length of the escaped string, optionally writing the
 * escaped string to dest if provided.
 */
size_t escape_markup_text(const char *src, char *dest);
#ifdef HAVE_FONTS
PangoLayout *get_pango_layout(cairo_t *cairo, const char *font,
		const char *text, double scale, bool markup);
void get_text_size(cairo_t *cairo, const char *font, int *width, int *height,
		int *baseline, double scale, bool markup, const char *fmt, ...);
void pango_printf(cairo_t *cairo, const char *font,
		double scale, bool markup, const char *fmt, ...);
#endif

#endif
