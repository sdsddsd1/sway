#ifndef _SWAY_BUFFERS_H
#define _SWAY_BUFFERS_H
#ifdef HAVE_FONTS
#include <cairo.h>
#include <pango/pangocairo.h>
#endif
#include <stdbool.h>
#include <stdint.h>
#include <wayland-client.h>

struct pool_buffer {
	struct wl_buffer *buffer;
#ifdef HAVE_FONTS
	cairo_surface_t *surface;
	cairo_t *cairo;
	PangoContext *pango;
#endif
	uint32_t width, height;
	void *data;
	size_t size;
	bool busy;
};

struct pool_buffer *get_next_buffer(struct wl_shm *shm,
		struct pool_buffer pool[static 2], uint32_t width, uint32_t height);
void destroy_buffer(struct pool_buffer *buffer);

#endif
