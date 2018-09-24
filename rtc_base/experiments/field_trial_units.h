/*
 *  Copyright 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */
#ifndef RTC_BASE_EXPERIMENTS_FIELD_TRIAL_UNITS_H_
#define RTC_BASE_EXPERIMENTS_FIELD_TRIAL_UNITS_H_

#include "rtc_base/experiments/field_trial_parser.h"

#include "api/units/data_rate.h"
#include "api/units/data_size.h"
#include "api/units/time_delta.h"

namespace webrtc {
extern template class FieldTrialParameter<DataRate>;
extern template class FieldTrialParameter<DataSize>;
extern template class FieldTrialParameter<TimeDelta>;

extern template class FieldTrialOptional<DataRate>;
extern template class FieldTrialOptional<DataSize>;
extern template class FieldTrialOptional<TimeDelta>;
}  // namespace webrtc

#endif  // RTC_BASE_EXPERIMENTS_FIELD_TRIAL_UNITS_H_