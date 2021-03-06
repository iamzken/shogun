/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2012 Sergey Lisitsyn
 * Copyright (C) 2012 Jiayu Zhou and Jieping Ye
 */

#ifndef  MALSAR_CLUSTERED_H_
#define  MALSAR_CLUSTERED_H_
#include <shogun/lib/config.h>
#ifdef USE_GPL_SHOGUN
#include <shogun/lib/malsar/malsar_options.h>
#include <shogun/features/DotFeatures.h>

namespace shogun
{

/**
 * Routine for learning a linear multitask
 * logistic regression model using
 * Clustered multitask learning algorithm.
 *
 */
malsar_result_t malsar_clustered(
		CDotFeatures* features,
		double* y,
		double rho1,
		double rho2,
		const malsar_options& options);

};
#endif //USE_GPL_SHOGUN
#endif   /* ----- #ifndef MALSAR_CLUSTERED_H_  ----- */
