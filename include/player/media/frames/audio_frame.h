/*  Copyright (C) 2014-2020 FastoGT. All right reserved.

    This file is part of FastoTV.

    FastoTV is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FastoTV is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FastoTV. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <player/media/frames/base_frame.h>

namespace fastoplayer {
namespace media {
namespace frames {

struct AudioFrame : public BaseFrame {
  AudioFrame();

  AVSampleFormat format;

 private:
  DISALLOW_COPY_AND_ASSIGN(AudioFrame);
};

}  // namespace frames
}  // namespace media
}  // namespace fastoplayer
