#include "app.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame("Station V => Penteract!");	

	mainFrame->SetSize(900,700);
	/*mainFrame->SetMinSize(wxSize(900,700));
	mainFrame->SetMaxSize(wxSize(900,700));*/
	mainFrame->SetVirtualSize(wxSize(3500,3200));
	
	
	mainFrame->Center();
	
	// Setting the title icon. ico => TYPE_ICO.
	wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_ICO);
	//wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_JPEG);
	mainFrame->SetIcon(icon);

	mainFrame->Show();
	
	return true;
}