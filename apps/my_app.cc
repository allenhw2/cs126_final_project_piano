// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "my_app.h"

#include <CinderImGui.h>
#include <cinder/app/App.h>
#include <cinder/gl/draw.h>
#include <cinder/gl/wrapper.h>
#include <imgui.h>

namespace myapp {

using cinder::app::KeyEvent;
using cinder::Color;
using cinder::ColorA;
using cinder::Rectf;



MyApp::MyApp() { }

void MyApp::setup() {
  ImGui::initialize();
  cinder::gl::enableDepthWrite();
  cinder::gl::enableDepthRead();
  std::cout << "setup" << std::endl;
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
}

void MyApp::keyDown(KeyEvent event) { }

}  // namespace myapp
