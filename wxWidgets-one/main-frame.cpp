#include "main-frame.h"
#include <iostream>
#include <wx/vscroll.h>


MainFrame::MainFrame(const wxString &frameTitle) 
	: wxFrame(nullptr, wxID_ANY, frameTitle, wxDefaultPosition, wxDefaultSize)
{
	wxScrolledWindow *sw = new wxScrolledWindow(this);
	sw->SetVirtualSize(wxSize(3000,3000));

	wxBoxSizer* vSizer = new wxBoxSizer(wxVERTICAL);
	wxPanel *panel = new wxPanel(sw);
	
	wxButton *button1 = new wxButton(sw, wxID_ANY, "roll", wxPoint(50, 200), wxSize(200, 50));
	/*
	button1->SetBackgroundColour(wxColor(30,33,36));
	button1->SetForegroundColour(wxColor(30, 33, 33));
	*/
	button1->SetBackgroundStyle(wxBG_STYLE_ERASE);

	wxButton *button2 = new wxButton(sw, wxID_ANY, "pitch", wxPoint(50, 400), wxSize(200, 50));
	wxButton *button3 = new wxButton(sw, wxID_ANY, "yaw", wxPoint(50, 600), wxSize(200, 50));
	wxButton *button4 = new wxButton(sw, wxID_ANY, "sway", wxPoint(50, 800), wxSize(200, 50));
	wxButton *button5 = new wxButton(sw, wxID_ANY, "surge", wxPoint(50, 1000), wxSize(200, 50));
	wxButton *button6 = new wxButton(sw, wxID_ANY, "heave", wxPoint(50, 1200), wxSize(200, 50));
	//wxButton *button66 = new wxButton(sw, wxID_ANY, "6DOF", wxPoint(50, 1200), wxSize(200, 50));

	wxButton *button7 = new wxButton(sw, wxID_ANY, "Setting the 6DOF", wxPoint(50, 900), wxSize(300, 50));
	wxTextCtrl *text = new wxTextCtrl(sw, wxID_ANY, "Basic Text", wxPoint(500,500), wxSize(300,-1));

	vSizer->Add(button1, 0, wxALL, 50);
	vSizer->Add(button2, 0, wxALL, 50);
	vSizer->Add(button3, 0, wxALL, 50);
	vSizer->Add(button4, 0, wxALL, 50);
	vSizer->Add(button5, 0, wxALL, 50);
	vSizer->Add(button6, 0, wxALL, 50);
	//vSizer->Add(button66, 0, wxALL, 250);

	/*vSizer->Add(new wxButton(sw, wxID_ANY, "Button1", wxPoint(50, 200), wxSize(200, 50)));
	vSizer->AddSpacer(100);
	vSizer->AddStretchSpacer(500);
	vSizer->Add(new wxButton(sw, wxID_ANY, "Button2", wxPoint(100, 400), wxSize(200, 50)));
	vSizer->AddSpacer(100);
	vSizer->Add(new wxButton(sw, wxID_ANY, "Button3", wxPoint(150, 600), wxSize(200, 50)));
	vSizer->AddSpacer(100);
	vSizer->Add(new wxButton(sw, wxID_ANY, "Button4", wxPoint(200, 800), wxSize(200, 50)));
	*/
	sw->SetSizer(vSizer);
	sw->SetScrollRate(5, 5);
	

	//wxButton *button1 = new wxButton(sw, wxID_ANY, "Button1", wxPoint(50, 200), wxSize(200, 50));
	//wxButton *button2 = new wxButton(sw, wxID_ANY, "Button2", wxPoint(50, 400), wxSize(200, 50));
	//wxButton *button3 = new wxButton(sw, wxID_ANY, "Button3", wxPoint(50, 600), wxSize(200, 50));
	//wxButton *button4 = new wxButton(sw, wxID_ANY, "Button4", wxPoint(50, 800), wxSize(200, 50));
}