// This file is part of the AliceVision project.
// Copyright (c) 2019 AliceVision contributors.
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file,
// You can obtain one at https://mozilla.org/MPL/2.0/.

#pragma once
#include <aliceVision/image/all.hpp>
#include "rgbCurve.hpp"
#include <aliceVision/numeric/numeric.hpp>
#include <Eigen/SparseQR>

namespace aliceVision {
namespace hdr {

class DebevecCalibrate
{
public:  

  /**
   * @brief
   * @param[in] groups
   * @param[in] times
   * @param[in] nbPoints (number of samples for calibration)
   * @param[in] weight
   * @param[in] lambda (parameter of smoothness)
   * @param[out] response
   */
  void process(const std::vector< std::vector< image::Image<image::RGBfColor> > > &ldrImageGroups,
               const std::size_t channelQuantization,
               const std::vector< std::vector<float> > &times,
               const int nbPoints,
               const rgbCurve &weight,
               const float lambda,
               rgbCurve &response);

};

} // namespace hdr
} // namespace aliceVision