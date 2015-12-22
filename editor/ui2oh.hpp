#pragma once

#include "editor/opening_hours_ui.hpp"

#include "std/string.hpp"

namespace osmoh
{
class OpeningHours;
} // namespace osmoh

namespace editor
{
osmoh::OpeningHours ConvertOpeningHours(ui::TimeTableSet const & tts);
bool ConvertOpeningHours(osmoh::OpeningHours const & oh, ui::TimeTableSet & tts);
bool ConvertOpeningHours(string oh, ui::TimeTableSet & tts);
} // namespace editor
