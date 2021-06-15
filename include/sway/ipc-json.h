#ifndef _SWAY_IPC_JSON_H
#define _SWAY_IPC_JSON_H
#ifdef HAVE_JSON
#include <json.h>
#endif
#include "sway/tree/container.h"
#include "sway/input/input-manager.h"

#ifdef HAVE_JSON
json_object *ipc_json_get_version(void);

json_object *ipc_json_get_binding_mode(void);

json_object *ipc_json_describe_disabled_output(struct sway_output *o);
json_object *ipc_json_describe_node(struct sway_node *node);
json_object *ipc_json_describe_node_recursive(struct sway_node *node);
json_object *ipc_json_describe_input(struct sway_input_device *device);
json_object *ipc_json_describe_seat(struct sway_seat *seat);
json_object *ipc_json_describe_bar_config(struct bar_config *bar);
#endif

#endif
