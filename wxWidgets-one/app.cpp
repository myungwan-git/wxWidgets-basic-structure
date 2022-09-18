#include "app.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame("Station V => Penteract!");	

	mainFrame->SetSize(900,700);
	/*mainFrame->SetMinSize(wxSize(900,700));
	mainFrame->SetMaxSize(wxSize(900,700));*/
	mainFrame->SetVirtualSize(wxSize(3500,3200));


	//----------------------------------
	/*
	wxPaintDC dc(mainFrame);

	int hh, ww;
	mainFrame->GetClientSize(&ww, &hh);

	int h;
	h = (hh + 255) / 256;

	for (int r = 0; r <= hh; r++) {
		if ((r % h) == 0) {
			wxPen p(wxColour(r / h, 0, 128));
			dc.SetPen(p);
		}
		dc.DrawLine(0, r, ww, r);
	}

	dc.DrawText(_T("Gradient wxFrame Sample"), 25, 25);
	*/
	//----------------------------------

	wxColour *color = new wxColour(14,17,23);
	mainFrame->SetBackgroundColour(*color);
	
	
	mainFrame->Center();
	
	// Setting the title icon. ico => TYPE_ICO.
	wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_ICO);
	//wxIcon icon(wxT("../rect.ico"), wxBITMAP_TYPE_JPEG);
	mainFrame->SetIcon(icon);

	mainFrame->Show();
	
	return true;
}