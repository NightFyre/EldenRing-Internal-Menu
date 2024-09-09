#pragma once
#include "../../include/Tabs/Main.h"
#include "../../include/Game.hpp"
#include "../../include/Menu.hpp"
#include "../../include/D3DRenderer.hpp"
#include "../../include/Console.hpp"
using namespace ER::Tabs;

void Main::Reset() 
{

}

void Main::Draw() 
{
    ImGuiWindow* window = GImGui->CurrentWindow;
    ImVec2 ToolLocation;
    //  ImGui::TextCentered("[ABOUT]", TRUE, ImColor(0, 255, 255, 200));
    ImGui::Text("[ABOUT]");
    ImGui::Spacing();
    ImGui::Separator();

    //---------------------------------------------------------------------------------------------------


    ImGui::Text("ELDEN RING INTERNAL (PREVIEW)");
    ImGui::Text("BUILD VERSION: alpha-0.0.6");
    ImGui::Text("BUILD DATE: 11/6/2022");
    ImGui::Text("GAME VERSION: 1.0.7");


    //---------------------------------------------------------------------------------------------------

    ImGui::Spacing();
    ImGui::Separator();
    std::string footer = g_Menu->m_MenuFooter + g_Console->GetTimeString();
    ImGui::Text(footer.c_str());
}