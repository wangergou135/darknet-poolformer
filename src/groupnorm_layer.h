#ifndef GROUPNORM_LAYER_H
#define GROUPNORM_LAYER_H

#include "image.h"
#include "layer.h"
#include "network.h"

layer make_groupnorm_layer(int batch, int w, int h, int c, int groups);
void forward_groupnorm_layer(layer l, network net);
void backward_groupnorm_layer(layer l, network net);

#ifdef GPU
void forward_batchnorm_layer_gpu(layer l, network net);
void backward_batchnorm_layer_gpu(layer l, network net);
void pull_batchnorm_layer(layer l);
void push_batchnorm_layer(layer l);
#endif

#endif
