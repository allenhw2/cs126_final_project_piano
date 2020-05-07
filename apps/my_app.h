// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <CinderImGui.h>
#include <cinder/app/App.h>
#include <cinder/audio/audio.h>

const std::string K_C_PATH = "c4.mp3";
const std::string K_CS_PATH = "c-4.mp3";
const std::string K_D_PATH = "d4.mp3";
const std::string K_DS_PATH = "d-4.mp3";
const std::string K_E_PATH = "e4.mp3";
const std::string K_F_PATH = "f4.mp3";
const std::string K_FS_PATH = "f-4.mp3";
const std::string K_G_PATH = "g4.mp3";
const std::string K_GS_PATH = "g-4.mp3";
const std::string K_A_PATH = "a5.mp3";
const std::string K_AS_PATH = "a-5.mp3";
const std::string K_B_PATH = "b5.mp3";
// const std::string K_IMAGE_PATH = "Piano.jpg";
const std::string K_IMAGE_PATH = "base.jpg";

const std::vector<std::string> K_HIGH_MUSIC{
    "c4.mp3", "c-4.mp3", "d4.mp3", "e4.mp3",  "f4.mp3", "f-4.mp3",
    "g4.mp3", "g-4.mp3", "a5.mp3", "a-5.mp3", "b5.mp3"};

const std::vector<std::string> K_LOW_MUSIC{
    "c3.mp3", "c-3.mp3", "d3.mp3", "e3.mp3",  "f3.mp3", "f-3.mp3",
    "g3.mp3", "g-3.mp3", "a4.mp3", "a-4.mp3", "b4.mp3"};

namespace myapp {

class MyApp : public cinder::app::App {
 public:
  MyApp();
  void setup() override;
  void update() override;
  void draw() override;
  void keyDown(cinder::app::KeyEvent) override;
  cinder::gl::Texture2dRef mTex;

 private:
  bool my_tool_active = true;
  bool change_pitch = true;
  void InitializeNotes(std::vector<std::string> note_paths);
  ci::audio::VoiceRef c_sound_;
  ci::audio::VoiceRef cs_sound_;
  ci::audio::VoiceRef d_sound_;
  ci::audio::VoiceRef ds_sound_;
  ci::audio::VoiceRef e_sound_;
  ci::audio::VoiceRef f_sound_;
  ci::audio::VoiceRef fs_sound_;
  ci::audio::VoiceRef g_sound_;
  ci::audio::VoiceRef gs_sound_;
  ci::audio::VoiceRef a_sound_;
  ci::audio::VoiceRef as_sound_;
  ci::audio::VoiceRef b_sound_;
};

}  // namespace myapp

#endif  // FINALPROJECT_APPS_MYAPP_H_
