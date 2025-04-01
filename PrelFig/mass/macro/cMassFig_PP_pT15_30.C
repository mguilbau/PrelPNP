#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT15_30()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Tue Apr  1 11:18:58 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",20,43,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,-25.625,3.625,280.625);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_cf4a630__1 = new TH1D("frame_mass_cf4a630__1"," ",40,2.5,3.5);
   frame_mass_cf4a630__1->SetBinContent(1,194.9056);
   frame_mass_cf4a630__1->SetMinimum(5);
   frame_mass_cf4a630__1->SetMaximum(250);
   frame_mass_cf4a630__1->SetEntries(1);
   frame_mass_cf4a630__1->SetDirectory(nullptr);
   frame_mass_cf4a630__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_cf4a630__1->SetLineColor(ci);
   frame_mass_cf4a630__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cf4a630__1->GetXaxis()->SetLabelFont(42);
   frame_mass_cf4a630__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_cf4a630__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_cf4a630__1->GetXaxis()->SetTitleFont(42);
   frame_mass_cf4a630__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cf4a630__1->GetYaxis()->SetLabelFont(42);
   frame_mass_cf4a630__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_cf4a630__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_cf4a630__1->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_cf4a630__1->GetYaxis()->SetTitleFont(42);
   frame_mass_cf4a630__1->GetZaxis()->SetLabelFont(42);
   frame_mass_cf4a630__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_cf4a630__1->GetZaxis()->SetTitleFont(42);
   frame_mass_cf4a630__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 24, 37, 26, 38, 24, 29, 20, 24, 26, 35, 23, 27, 36, 28, 36, 46, 43,
   66, 59, 79, 110, 102, 126, 164, 172, 162, 120, 92, 86, 47, 41, 34, 30,
   22, 16, 17, 12, 13, 14, 15 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 4.864612, 6.055143, 5.066015, 6.137163, 4.864612, 5.353932, 4.434448, 4.864612, 5.066015, 5.887675, 4.760717, 5.163771, 5.971996, 5.259711, 5.971996, 6.757581, 6.531834,
   8.103403, 7.659312, 8.869343, 10, 9.611874, 10.7361, 12.31601, 12.6244, 12.23774, 10.46586, 9.574201, 9.255555, 6.831172, 6.376898, 5.802128, 5.446522,
   4.654502, 3.957801, 4.082184, 3.415266, 3.558662, 3.6965, 3.82938 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 5.966932, 7.137555, 6.164324, 7.218484, 5.966932, 6.44702, 5.546519, 5.966932, 6.164324, 6.97241, 5.865235, 6.260244, 7.055545, 6.354446, 7.055545, 7.831489, 7.608278,
   9.165094, 8.724565, 9.925725, 11, 10.61187, 11.7361, 13.31601, 13.6244, 13.23774, 11.46586, 10.62644, 10.30959, 7.904289, 7.455185, 6.888101, 6.538046,
   5.761366, 5.083066, 5.203719, 4.559819, 4.697573, 4.830381, 4.958738 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(7.726261);
   Graph_h_dataWithSWeights3001->SetMaximum(203.3284);
   Graph_h_dataWithSWeights3001->SetDirectory(nullptr);
   Graph_h_dataWithSWeights3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataWithSWeights3001->SetLineColor(ci);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetXaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetYaxis()->SetTitleFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetLabelFont(42);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataWithSWeights3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataWithSWeights3001);
   
   grae->Draw("p");
   
   Double_t m_signal_fx1[81] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 3, 3.0125, 3.025, 3.0375, 3.04375, 3.05, 3.05625, 3.0625,
   3.06875, 3.075, 3.08125, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125,
   3.128125, 3.13125, 3.134375, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125,
   3.2375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.3125, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[81] = { 0.7111991, 0.88807, 1.109476, 1.386771, 1.734237, 2.16985, 2.71625, 3.401963, 4.26295, 5.344567, 6.704055, 8.413688, 10.56477, 13.2727, 16.68344, 20.98166, 23.53437,
   26.40115, 29.62105, 33.23807, 37.30173, 41.86778, 46.99903, 52.76623, 59.24907, 66.53735, 74.73223, 83.94776, 94.31248, 99.97036, 105.9713, 112.3362, 119.0875,
   126.2489, 133.8455, 141.3007, 147.6779, 150.403, 152.7923, 154.8282, 156.4957, 157.7824, 158.6787, 159.1777, 159.2758, 158.9722, 158.2691, 157.1719, 155.6888,
   153.8309, 151.6121, 149.0485, 146.1589, 139.4863, 131.7811, 96.2393, 88.36976, 81.15358, 74.53569, 68.46575, 62.8977, 57.78942, 53.10238, 48.80131, 44.85395,
   41.23077, 34.85116, 29.47255, 24.9357, 21.10707, 17.87456, 15.14408, 12.83658, 9.23539, 6.656469, 4.806257, 3.476451, 2.51897, 1.828351, 1.329345, 1.329345 };
   TGraph *graph = new TGraph(81,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(0.6400792);
   Graph_m_signal1->SetMaximum(175.1323);
   Graph_m_signal1->SetDirectory(nullptr);
   Graph_m_signal1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_signal1->SetLineColor(ci);
   Graph_m_signal1->GetXaxis()->SetLabelFont(42);
   Graph_m_signal1->GetXaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetXaxis()->SetTitleFont(42);
   Graph_m_signal1->GetYaxis()->SetLabelFont(42);
   Graph_m_signal1->GetYaxis()->SetTitleFont(42);
   Graph_m_signal1->GetZaxis()->SetLabelFont(42);
   Graph_m_signal1->GetZaxis()->SetTitleOffset(1);
   Graph_m_signal1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_signal1);
   
   graph->Draw("l");
   
   Double_t m_bkg_fx2[42] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.925, 2.95, 2.975, 3, 3.025, 3.05, 3.075, 3.1, 3.125, 3.15, 3.175, 3.2, 3.225, 3.25, 3.275, 3.3,
   3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_bkg_fy2[42] = { 28.46697, 27.71551, 26.98388, 26.27156, 25.57805, 24.90285, 24.24547, 23.60544, 22.98231, 22.37562, 21.78496, 21.20988, 20.64999, 20.10487, 19.57415, 19.05743, 18.55436,
   18.06456, 17.5877, 17.12342, 16.6714, 16.23131, 15.80284, 15.38568, 14.97953, 14.5841, 14.19911, 13.82429, 13.45936, 13.10406, 12.75814, 12.42135, 12.09346,
   11.77422, 11.4634, 11.16079, 10.86617, 10.57933, 10.30006, 10.02816, 9.763438, 9.763438 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(7.893085);
   Graph_m_bkg2->SetMaximum(30.33733);
   Graph_m_bkg2->SetDirectory(nullptr);
   Graph_m_bkg2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_m_bkg2->SetLineColor(ci);
   Graph_m_bkg2->GetXaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetXaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetXaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetYaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetYaxis()->SetTitleFont(42);
   Graph_m_bkg2->GetZaxis()->SetLabelFont(42);
   Graph_m_bkg2->GetZaxis()->SetTitleOffset(1);
   Graph_m_bkg2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_m_bkg2);
   
   graph->Draw("l");
   
   Double_t massModel_fx3[80] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 3, 3.0125, 3.025, 3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875,
   3.075, 3.08125, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.128125,
   3.13125, 3.134375, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375,
   3.25, 3.2625, 3.275, 3.2875, 3.3, 3.3125, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[80] = { 29.17817, 28.60358, 28.09336, 27.65833, 27.31229, 27.0727, 26.96172, 27.0074, 27.24526, 27.72019, 28.48901, 29.62357, 31.21475, 33.37757, 36.25759, 40.03909, 44.9555,
   47.92887, 51.30263, 55.12626, 59.45547, 64.35304, 69.88965, 76.14497, 83.20874, 91.18211, 100.1791, 110.3281, 115.8792, 121.7741, 128.0337, 134.6804, 141.7378,
   149.2311, 156.5839, 162.8591, 165.5336, 167.8723, 169.8579, 171.4753, 172.712, 173.5584, 174.0077, 174.0563, 173.7033, 172.951, 171.8048, 170.2729, 168.3664,
   166.099, 163.487, 160.5492, 153.7807, 145.9803, 110.0636, 102.1019, 94.79418, 88.08537, 81.92511, 76.26734, 71.06994, 66.29437, 61.90537, 57.87066, 54.16072,
   47.60931, 42.06117, 37.35706, 33.36338, 29.96802, 27.07685, 24.6108, 20.69879, 17.81726, 15.67243, 14.05578, 12.81903, 11.85651, 11.09278, 11.09278 };
   graph = new TGraph(80,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(9.983505);
   Graph_massModel3->SetMaximum(190.3526);
   Graph_massModel3->SetDirectory(nullptr);
   Graph_massModel3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_massModel3->SetLineColor(ci);
   Graph_massModel3->GetXaxis()->SetLabelFont(42);
   Graph_massModel3->GetXaxis()->SetTitleOffset(1);
   Graph_massModel3->GetXaxis()->SetTitleFont(42);
   Graph_massModel3->GetYaxis()->SetLabelFont(42);
   Graph_massModel3->GetYaxis()->SetTitleFont(42);
   Graph_massModel3->GetZaxis()->SetLabelFont(42);
   Graph_massModel3->GetZaxis()->SetTitleOffset(1);
   Graph_massModel3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_massModel3);
   
   graph->Draw("l");
   
   TH1D *frame_mass_cf4a630__2 = new TH1D("frame_mass_cf4a630__2"," ",40,2.5,3.5);
   frame_mass_cf4a630__2->SetBinContent(1,194.9056);
   frame_mass_cf4a630__2->SetMinimum(5);
   frame_mass_cf4a630__2->SetMaximum(250);
   frame_mass_cf4a630__2->SetEntries(1);
   frame_mass_cf4a630__2->SetDirectory(nullptr);
   frame_mass_cf4a630__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_cf4a630__2->SetLineColor(ci);
   frame_mass_cf4a630__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cf4a630__2->GetXaxis()->SetLabelFont(42);
   frame_mass_cf4a630__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_cf4a630__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_cf4a630__2->GetXaxis()->SetTitleFont(42);
   frame_mass_cf4a630__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cf4a630__2->GetYaxis()->SetLabelFont(42);
   frame_mass_cf4a630__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_cf4a630__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_cf4a630__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_cf4a630__2->GetYaxis()->SetTitleFont(42);
   frame_mass_cf4a630__2->GetZaxis()->SetLabelFont(42);
   frame_mass_cf4a630__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_cf4a630__2->GetZaxis()->SetTitleFont(42);
   frame_mass_cf4a630__2->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      /*tex = new TLatex(0.15,0.79,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"15 GeV/c < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 1421#pm47");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 699#pm38");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   tex = new TLatex(0.15,0.79,"MFT+MCH+MID");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.74,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.69,"15 GeV/c < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 26 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.68,0.75,0.88,0.88,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m_signal","Signal","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m_bkg","Background","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("massModel","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4724649,0.94,0.5275351,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
<<<<<<< HEAD
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 26 / 40 ");
=======
      /*tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 26 / 40 ");
>>>>>>> 229c328 (Adding MFT MCH MID)
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);
<<<<<<< HEAD
}
=======

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT15_30.pdf");
   cMassFig_PP->SaveAs("../png/cMassFig_PP_pT15_30.png");
}
>>>>>>> 229c328 (Adding MFT MCH MID)
