#include "app.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame("Station V => Penteract!");

	mainFrame->SetSize(900,700);
	mainFrame->SetMinSize(wxSize(900,700));
	mainFrame->SetMaxSize(wxSize(900,700));
	mainFrame->SetVirtualSize(wxSize(1500,1200));
	mainFrame->SetScrollbar(wxVERTICAL, 0, 16, 500, false);
	mainFrame->Center();
	
	// Setting the title icon. ico => TYPE_ICO.
	wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_ICO);
	//wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_JPEG);
	mainFrame->SetIcon(icon);

	mainFrame->Show();
	
	return true;
}