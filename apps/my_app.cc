// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "my_app.h"

#include <CinderImGui.h>
#include <cinder/app/App.h>
#include <cinder/audio/audio.h>
#include <cinder/gl/Texture.h>
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

  auto img = loadImage(loadAsset(K_IMAGE_PATH));
  mTex = cinder::gl::Texture2d::create(img);
  InitializeNotes(K_HIGH_MUSIC);
}

void MyApp::update() {
  std::cout << "update" << std::endl;
  if (ImGui::Begin("Pitch Selector", &my_tool_active,
                   ImGuiWindowFlags_MenuBar)) {
    if (ui::Button("high change")) {
      change_pitch = true;
    }
    ImGui::End();
  }
}

void MyApp::InitializeNotes(std::vector<std::string> note_paths) {
  ci::audio::SourceFileRef c_File =
      ci::audio::load(ci::app::loadAsset(note_paths[0]));
  c_sound_ = ci::audio::Voice::create(c_File);

  ci::audio::SourceFileRef cs_File =
      ci::audio::load(ci::app::loadAsset(note_paths[1]));
  cs_sound_ = ci::audio::Voice::create(cs_File);

  ci::audio::SourceFileRef d_File =
      ci::audio::load(ci::app::loadAsset(note_paths[2]));
  d_sound_ = ci::audio::Voice::create(d_File);

  ci::audio::SourceFileRef ds_File =
      ci::audio::load(ci::app::loadAsset(note_paths[3]));
  ds_sound_ = ci::audio::Voice::create(ds_File);

  ci::audio::SourceFileRef e_File =
      ci::audio::load(ci::app::loadAsset(note_paths[4]));
  e_sound_ = ci::audio::Voice::create(e_File);

  ci::audio::SourceFileRef f_File =
      ci::audio::load(ci::app::loadAsset(note_paths[5]));
  f_sound_ = ci::audio::Voice::create(f_File);

  ci::audio::SourceFileRef fs_File =
      ci::audio::load(ci::app::loadAsset(note_paths[6]));
  fs_sound_ = ci::audio::Voice::create(fs_File);

  ci::audio::SourceFileRef g_File =
      ci::audio::load(ci::app::loadAsset(note_paths[7]));
  g_sound_ = ci::audio::Voice::create(g_File);

  ci::audio::SourceFileRef gs_File =
      ci::audio::load(ci::app::loadAsset(note_paths[8]));
  gs_sound_ = ci::audio::Voice::create(gs_File);

  ci::audio::SourceFileRef a_File =
      ci::audio::load(ci::app::loadAsset(note_paths[9]));
  a_sound_ = ci::audio::Voice::create(a_File);

  ci::audio::SourceFileRef as_File =
      ci::audio::load(ci::app::loadAsset(note_paths[10]));
  as_sound_ = ci::audio::Voice::create(as_File);

  ci::audio::SourceFileRef b_File =
      ci::audio::load(ci::app::loadAsset(note_paths[11]));
  b_sound_ = ci::audio::Voice::create(b_File);
}

void MyApp::draw() {
  std::cout << "draw" << std::endl;
  cinder::gl::clear();
  // cinder::gl::clear(Color(.20, .70, 1.00));
  cinder::gl::draw(mTex);

  auto img = loadImage(loadAsset(K_IMAGE_PATH));
  mTex = cinder::gl::Texture2d::create(img);
}

void MyApp::keyDown(KeyEvent event) {
  switch (event.getCode()) {
    case KeyEvent::KEY_a: {
      c_sound_->stop();
      c_sound_->start();

      auto img = loadImage(loadAsset("C.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play c
    case KeyEvent::KEY_w: {
      cs_sound_->stop();
      cs_sound_->start();

      auto img = loadImage(loadAsset("C#.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play c#
    case KeyEvent::KEY_s: {
      d_sound_->stop();
      d_sound_->start();

      auto img = loadImage(loadAsset("D.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play d

    case KeyEvent::KEY_e: {
      ds_sound_->stop();
      ds_sound_->start();

      auto img = loadImage(loadAsset("D#.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play d#
    case KeyEvent::KEY_d: {
      e_sound_->stop();
      e_sound_->start();

      auto img = loadImage(loadAsset("E.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play e
    case KeyEvent::KEY_f: {
      f_sound_->stop();
      f_sound_->start();

      auto img = loadImage(loadAsset("F.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play f
    case KeyEvent::KEY_t: {
      fs_sound_->stop();
      fs_sound_->start();

      auto img = loadImage(loadAsset("F#.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play f#
    case KeyEvent::KEY_g: {
      g_sound_->stop();
      g_sound_->start();

      auto img = loadImage(loadAsset("G.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play g
    case KeyEvent::KEY_y: {
      gs_sound_->stop();
      gs_sound_->start();

      auto img = loadImage(loadAsset("G#.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play g#
    case KeyEvent::KEY_h: {
      a_sound_->stop();
      a_sound_->start();

      auto img = loadImage(loadAsset("A.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play a
    case KeyEvent::KEY_u: {
      as_sound_->stop();
      as_sound_->start();

      auto img = loadImage(loadAsset("A#.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
      // play a#
    case KeyEvent::KEY_j: {
      b_sound_->stop();
      b_sound_->start();

      auto img = loadImage(loadAsset("B.jpg"));
      mTex = cinder::gl::Texture2d::create(img);

      break;
    }
  }
}

}  // namespace myapp
