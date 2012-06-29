/*
 * convection_diffusion.cpp
 *
 *  Created on: 20.07.2011
 *      Author: andreasvogel
 */

#include "convection_diffusion_common.h"
#include "convection_diffusion_fv1.h"
#include "convection_diffusion_fvcr.h"
#include "convection_diffusion_fvho.h"
#include "convection_diffusion_fe.h"

namespace ug{
namespace ConvectionDiffusionPlugin{
////////////////////////////////////////////////////////////////////////////////
//	explicit template instantiations
////////////////////////////////////////////////////////////////////////////////

#ifdef UG_DIM_1
template class ConvectionDiffusion<Domain1d>;
#endif
#ifdef UG_DIM_2
template class ConvectionDiffusion<Domain2d>;
#endif
#ifdef UG_DIM_3
template class ConvectionDiffusion<Domain3d>;
#endif

} // end ConvectionDiffusionPlugin
} // end namespace ug
