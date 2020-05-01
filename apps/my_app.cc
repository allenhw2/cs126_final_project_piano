// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "my_app.h"

#include <CinderImGui.h>
#include <cinder/app/App.h>
#include <cinder/audio/audio.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>
#include <imgui.h>

namespace myapp {

using cinder::app::KeyEvent;
using cinder::Color;
using cinder::ColorA;
using cinder::Rectf;

MyApp::MyApp() {}

void MyApp::setup() {
  ImGui::initialize();
  cinder::gl::enableDepthWrite();
  cinder::gl::enableDepthRead();
  std::cout << "setup" << std::endl;

  ci::audio::SourceFileRef c_File =
      ci::audio::load(ci::app::loadAsset(K_C_PATH));
  c_sound_ = ci::audio::Voice::create(c_File);

  ci::audio::SourceFileRef cs_File =
      ci::audio::load(ci::app::loadAsset(K_CS_PATH));
  cs_sound_ = ci::audio::Voice::create(cs_File);

  ci::audio::SourceFileRef d_File =
      ci::audio::load(ci::app::loadAsset(K_D_PATH));
  d_sound_ = ci::audio::Voice::create(d_File);

  ci::audio::SourceFileRef ds_File =
      ci::audio::load(ci::app::loadAsset(K_DS_PATH));
  ds_sound_ = ci::audio::Voice::create(ds_File);

  ci::audio::SourceFileRef e_File =
      ci::audio::load(ci::app::loadAsset(K_E_PATH));
  e_sound_ = ci::audio::Voice::create(e_File);

  ci::audio::SourceFileRef f_File =
      ci::audio::load(ci::app::loadAsset(K_F_PATH));
  f_sound_ = ci::audio::Voice::create(f_File);

  ci::audio::SourceFileRef fs_File =
      ci::audio::load(ci::app::loadAsset(K_FS_PATH));
  fs_sound_ = ci::audio::Voice::create(fs_File);

  ci::audio::SourceFileRef g_File =
      ci::audio::load(ci::app::loadAsset(K_G_PATH));
  g_sound_ = ci::audio::Voice::create(g_File);

  ci::audio::SourceFileRef gs_File =
      ci::audio::load(ci::app::loadAsset(K_GS_PATH));
  gs_sound_ = ci::audio::Voice::create(gs_File);

  ci::audio::SourceFileRef a_File =
      ci::audio::load(ci::app::loadAsset(K_A_PATH));
  a_sound_ = ci::audio::Voice::create(a_File);

  ci::audio::SourceFileRef as_File =
      ci::audio::load(ci::app::loadAsset(K_AS_PATH));
  as_sound_ = ci::audio::Voice::create(as_File);

  ci::audio::SourceFileRef b_File =
      ci::audio::load(ci::app::loadAsset(K_B_PATH));
  b_sound_ = ci::audio::Voice::create(b_File);
}

void MyApp::update() {
  std::cout << "update" << std::endl;
  if (ImGui::Begin("My First Tool", &my_tool_active, ImGuiWindowFlags_MenuBar)) {
    if (ImGui::BeginMenuBar())
    {
      if (ImGui::BeginMenu("File"))
      {
        if (ImGui::MenuItem("Open..", "Ctrl+O")) { /* Do stuff */ }
        if (ImGui::MenuItem("Save", "Ctrl+S"))   { /* Do stuff */ }
        if (ImGui::MenuItem("Close", "Ctrl+W"))  { my_tool_active = false; }
        ImGui::EndMenu();
      }
      ImGui::EndMenuBar();
    }

    float* my_color;
// Edit a color (stored as ~4 floats)
    ImGui::ColorEdit4("Color", my_color);

// Plot some values
    const float my_values[] = { 0.2f, 0.1f, 1.0f, 0.5f, 0.9f, 2.2f };
    ImGui::PlotLines("Frame Times", my_values, IM_ARRAYSIZE(my_values));

// Display contents in a scrolling region
    ImGui::TextColored(ImVec4(1,1,0,1), "Important Stuff");
    ImGui::BeginChild("Scrolling");
    for (int n = 0; n < 50; n++)
      ImGui::Text("%04d: Some text", n);
    ImGui::EndChild();
    ImGui::End();
  }

}

void MyApp::draw() {
  std::cout << "draw" << std::endl;
  cinder::gl::clear();
  cinder::gl::clear(Color(.20, .70, 1.00));
}

void MyApp::keyDown(KeyEvent event) {
  switch (event.getCode()) {
    case KeyEvent::KEY_a: {
      c_sound_->stop();
      c_sound_->start();
      break;
    }
      // play c
    case KeyEvent::KEY_w: {
      cs_sound_->stop();
      cs_sound_->start();
      break;
    }
      // play c#
    case KeyEvent::KEY_s: {
      d_sound_->stop();
      d_sound_->start();
      break;
    }
      // play d

    case KeyEvent::KEY_e: {
      ds_sound_->stop();
      ds_sound_->start();
      break;
    }
      // play d#
    case KeyEvent::KEY_d: {
      e_sound_->stop();
      e_sound_->start();
      break;
    }
      // play e
    case KeyEvent::KEY_f: {
      f_sound_->stop();
      f_sound_->start();
      break;
    }
      // play f
    case KeyEvent::KEY_t: {
      fs_sound_->stop();
      fs_sound_->start();
      break;
    }
      // play f#
    case KeyEvent::KEY_g: {
      g_sound_->stop();
      g_sound_->start();
      break;
    }
      // play g
    case KeyEvent::KEY_y: {
      gs_sound_->stop();
      gs_sound_->start();
      break;
    }
      // play g#
    case KeyEvent::KEY_h: {
      a_sound_->stop();
      a_sound_->start();
      break;
    }
      // play a
    case KeyEvent::KEY_u: {
      as_sound_->stop();
      as_sound_->start();
      break;
    }
      // play a#
    case KeyEvent::KEY_j: {
      b_sound_->stop();
      b_sound_->start();
      break;
    }
      // play b

      /*case KeyEvent::KEY_p: {
        paused_ = !paused_;

        if (paused_) {
          last_pause_time_ = system_clock::now();
        } else {
          last_intact_time_ += system_clock::now() - last_pause_time_;
        }
        break;
      }
      case KeyEvent::KEY_r: {
        ResetGame();
        break;
      }*/
  }
}

}  // namespace myapp
