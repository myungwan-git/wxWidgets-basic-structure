#include "main-frame.h"

MainFrame::MainFrame(const wxString &frameTitle) 
	: wxFrame(nullptr, wxID_ANY, frameTitle, wxDefaultPosition, wxDefaultSize)
{
	wxPanel *panel = new wxPanel(this);

	wxButton *button1 = new wxButton(panel, wxID_ANY, "Button1", wxPoint(50, 200), wxSize(200, 50));
	wxButton *button2 = new wxButton(panel, wxID_ANY, "Button2", wxPoint(50, 400), wxSize(200, 50));
	wxButton *button3 = new wxButton(panel, wxID_ANY, "Button3", wxPoint(50, 600), wxSize(200, 50));
	wxButton *button4 = new wxButton(panel, wxID_ANY, "Button4", wxPoint(50, 800), wxSize(200, 50));
}