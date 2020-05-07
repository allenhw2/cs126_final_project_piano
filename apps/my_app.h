// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <CinderImGui.h>
#include <cinder/app/App.h>
#include <cinder/audio/audio.h>

// Constant file paths for the high octave music files
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

// Constant file paths for the low octave music files
const std::string K_C_PATH_LOW = "c3.mp3";
const std::string K_CS_PATH_LOW = "c-3.mp3";
const std::string K_D_PATH_LOW = "d3.mp3";
const std::string K_DS_PATH_LOW = "d-3.mp3";
const std::string K_E_PATH_LOW = "e3.mp3";
const std::string K_F_PATH_LOW = "f3.mp3";
const std::string K_FS_PATH_LOW = "f-3.mp3";
const std::string K_G_PATH_LOW = "g3.mp3";
const std::string K_GS_PATH_LOW = "g-3.mp3";
const std::string K_A_PATH_LOW = "a4.mp3";
const std::string K_AS_PATH_LOW = "a-4.mp3";
const std::string K_B_PATH_LOW = "b4.mp3";

// Base image file path
const std::string K_IMAGE_PATH = "base.jpg";

/*const std::vector<std::string> K_HIGH_MUSIC{
    "c4.mp3", "c-4.mp3", "d4.mp3", "e4.mp3",  "f4.mp3", "f-4.mp3",
    "g4.mp3", "g-4.mp3", "a5.mp3", "a-5.mp3", "b5.mp3"};*/

const std::vector<std::string> K_HIGH_MUSIC{
    K_C_PATH,  K_CS_PATH, K_D_PATH,  K_DS_PATH, K_E_PATH,  K_F_PATH,
    K_FS_PATH, K_G_PATH,  K_GS_PATH, K_A_PATH,  K_AS_PATH, K_B_PATH};

/*const std::vector<std::string> K_LOW_MUSIC{
    "c3.mp3", "c-3.mp3", "d3.mp3", "e3.mp3",  "f3.mp3", "f-3.mp3",
    "g3.mp3", "g-3.mp3", "a4.mp3", "a-4.mp3", "b4.mp3"};*/

const std::vector<std::string> K_LOW_MUSIC{
    K_C_PATH_LOW,  K_CS_PATH_LOW, K_D_PATH_LOW,  K_DS_PATH_LOW,
    K_E_PATH_LOW,  K_F_PATH_LOW,  K_FS_PATH_LOW, K_G_PATH_LOW,
    K_GS_PATH_LOW, K_A_PATH_LOW,  K_AS_PATH_LOW, K_B_PATH_LOW};

namespace myapp {

class MyApp : public cinder::app::App {
 public:
  /**
   * empty constructor for my app
   */
  MyApp();

  /**
   * Setup method called at the beginning to initialize the GUI and the files
   */
  void setup() override;

  /**
   * Called after every draw to update the drawing and what is needed to be
   * changed within the drawing itself and other parts of the program
   */
  void update() override;

  /**
   * Method called when drawing the GUI called every time to redraw the image
   */
  void draw() override;

  /**
   * Detects input and translates them to their respective functions.
   */
  void keyDown(cinder::app::KeyEvent) override;

  // the texture class for the background image
  cinder::gl::Texture2dRef mTex;

 private:
  // active state of the imgui window
  bool my_tool_active = true;

  // 0 for low pitch 1 for high pitch
  int current_pitch = 1;
  int declared_pitch = 1;

  // volume of the playback
  float volume = 10;

  /**
   * takes an array of string paths of length 12 to fill the VoiceRef's with
   * the note audio filss
   * @param note_paths vector containing all 12 note paths
   */
  void InitializeNotes(std::vector<std::string> note_paths);

  // All VoiceRefs for each key
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
