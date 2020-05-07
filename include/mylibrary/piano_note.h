//
// Created by Allen Wang on 4/30/20.
//

#ifndef FINALPROJECT_PIANO_NOTE_H
#define FINALPROJECT_PIANO_NOTE_H

#include <CinderImGui.h>
#include <Imgui.h>

#include <string>

namespace mylibrary {

class Note {
 public:
 private:
  std::string image_path;
  std::string music_path;

  void SetImage(std::string image);

  void SetMusic(std::string music);
};

}  // namespace mylibrary

#endif  // FINALPROJECT_PIANO_NOTE_H