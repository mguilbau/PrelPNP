#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT15_30()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 13:14:00 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",200,1103,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0.24,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,5,3.625,1666.111);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetBottomMargin(0);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_c7e3450__1 = new TH1D("frame_mass_c7e3450__1"," ",40,2.5,3.5);
   frame_mass_c7e3450__1->SetBinContent(1,195.0304);
   frame_mass_c7e3450__1->SetMinimum(5);
   frame_mass_c7e3450__1->SetMaximum(1500);
   frame_mass_c7e3450__1->SetEntries(2);
   frame_mass_c7e3450__1->SetDirectory(nullptr);
   frame_mass_c7e3450__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_c7e3450__1->SetLineColor(ci);
   frame_mass_c7e3450__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_c7e3450__1->GetXaxis()->SetLabelFont(42);
   frame_mass_c7e3450__1->GetXaxis()->SetLabelSize(0.04);
   frame_mass_c7e3450__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_c7e3450__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_c7e3450__1->GetXaxis()->SetTitleFont(42);
   frame_mass_c7e3450__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_c7e3450__1->GetYaxis()->SetLabelFont(42);
   frame_mass_c7e3450__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_c7e3450__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_c7e3450__1->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_c7e3450__1->GetYaxis()->SetTitleFont(42);
   frame_mass_c7e3450__1->GetZaxis()->SetLabelFont(42);
   frame_mass_c7e3450__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_c7e3450__1->GetZaxis()->SetTitleFont(42);
   frame_mass_c7e3450__1->Draw("FUNC");
   
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
   
   Double_t m_signal_fx1[84] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375, 3.05,
   3.05625, 3.0625, 3.06875, 3.075, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625,
   3.11875, 3.121875, 3.125, 3.128125, 3.13125, 3.1375, 3.14375, 3.15, 3.15625, 3.1625, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45,
   3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[84] = { 0.7426499, 0.8875751, 1.064477, 1.281263, 1.548012, 1.87764, 2.28678, 2.796965, 3.436231, 4.241284, 5.260483, 6.557935, 8.219191, 10.35922, 13.13362, 16.75468, 21.51423,
   24.44182, 27.81701, 31.716, 36.2293, 41.4647, 47.55092, 54.64203, 62.92294, 67.57744, 72.61623, 78.07439, 83.99052, 90.40712, 97.371, 104.9338, 113.1525,
   122.09, 131.6313, 140.6693, 148.8129, 155.8414, 158.8745, 161.5571, 163.8694, 165.7944, 167.3179, 168.4282, 169.1172, 169.3795, 169.2131, 168.6194, 167.6028,
   166.1711, 164.3348, 162.1078, 159.5066, 156.5502, 149.6595, 141.6301, 132.6808, 123.0442, 112.9576, 92.34784, 82.24012, 72.50062, 63.42129, 55.69893, 49.16985,
   43.61341, 38.85599, 34.75974, 31.21431, 28.13063, 23.07218, 19.14757, 16.05759, 13.59273, 11.60333, 8.644302, 6.604621, 5.154678, 4.096733, 3.307351, 2.70682,
   2.242138, 1.877143, 1.877143 };
   TGraph *graph = new TGraph(84,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(0.6683849);
   Graph_m_signal1->SetMaximum(186.2432);
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
   Double_t m_bkg_fy2[42] = { 31.23601, 30.41426, 29.61413, 28.83505, 28.07646, 27.33783, 26.61864, 25.91836, 25.2365, 24.57259, 23.92614, 23.2967, 22.68381, 22.08705, 21.50599, 20.94022, 20.38933,
   19.85293, 19.33064, 18.8221, 18.32693, 17.84479, 17.37533, 16.91823, 16.47315, 16.03977, 15.6178, 15.20693, 14.80687, 14.41734, 14.03805, 13.66874, 13.30915,
   12.95901, 12.61809, 12.28614, 11.96292, 11.6482, 11.34176, 11.04338, 10.75286, 10.75286 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(8.704543);
   Graph_m_bkg2->SetMaximum(33.28432);
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
   
   Double_t massModel_fx3[84] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375, 3.05,
   3.05625, 3.0625, 3.06875, 3.075, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625,
   3.11875, 3.121875, 3.125, 3.128125, 3.13125, 3.1375, 3.14375, 3.15, 3.15625, 3.1625, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45,
   3.475, 3.5, 3.5 };
   Double_t massModel_fy3[84] = { 31.97866, 31.30183, 30.67861, 30.11631, 29.62447, 29.21547, 28.90542, 28.71532, 28.67274, 28.81387, 29.18662, 29.85463, 30.903, 32.44627, 34.63962, 37.69489, 41.90356,
   44.56116, 47.66994, 51.30604, 55.55994, 60.53938, 66.37302, 73.21489, 81.24987, 85.78263, 90.70048, 96.03851, 101.8353, 108.1334, 114.9795, 122.4253, 130.5278,
   139.3499, 148.7765, 157.7007, 165.7312, 172.6472, 175.6245, 178.2513, 180.5081, 182.3778, 183.846, 184.9014, 185.5355, 185.7432, 185.5224, 184.8745, 183.8038,
   182.3181, 180.4281, 178.1476, 175.493, 172.4834, 165.4868, 157.3524, 148.2986, 138.5583, 128.3686, 107.5548, 97.34604, 87.50619, 78.32718, 70.5058, 63.87837,
   58.22422, 53.36974, 49.17708, 45.53587, 42.35706, 37.11023, 32.99973, 29.72633, 27.08047, 24.91247, 21.60332, 19.22271, 17.44082, 16.05965, 14.95555, 14.04858,
   13.28552, 12.63, 12.63 };
   graph = new TGraph(84,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(11.367);
   Graph_massModel3->SetMaximum(203.0545);
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
   
   TH1D *frame_mass_c7e3450__2 = new TH1D("frame_mass_c7e3450__2"," ",40,2.5,3.5);
   frame_mass_c7e3450__2->SetBinContent(1,195.0304);
   frame_mass_c7e3450__2->SetMinimum(5);
   frame_mass_c7e3450__2->SetMaximum(1500);
   frame_mass_c7e3450__2->SetEntries(2);
   frame_mass_c7e3450__2->SetDirectory(nullptr);
   frame_mass_c7e3450__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_c7e3450__2->SetLineColor(ci);
   frame_mass_c7e3450__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_c7e3450__2->GetXaxis()->SetLabelFont(42);
   frame_mass_c7e3450__2->GetXaxis()->SetLabelSize(0.04);
   frame_mass_c7e3450__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_c7e3450__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_c7e3450__2->GetXaxis()->SetTitleFont(42);
   frame_mass_c7e3450__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_c7e3450__2->GetYaxis()->SetLabelFont(42);
   frame_mass_c7e3450__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_c7e3450__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_c7e3450__2->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_c7e3450__2->GetYaxis()->SetTitleFont(42);
   frame_mass_c7e3450__2->GetZaxis()->SetLabelFont(42);
   frame_mass_c7e3450__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_c7e3450__2->GetZaxis()->SetTitleFont(42);
   frame_mass_c7e3450__2->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.79,"2.5 < |#it{y}^{#mu#mu}| < 3.6");
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
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 1352#pm46");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 768#pm39");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.73,0.77,0.89,0.88,NULL,"brNDC");
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
   
   TPaveText *pt = new TPaveText(0.4769739,0.94,0.5230261,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 43 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
  
// ------------>Primitives in pad: pad2_PP
   TPad *pad2_PP__1 = new TPad("pad2_PP", "",0,0,1,0.238);
   pad2_PP__1->Draw();
   pad2_PP__1->cd();
   pad2_PP__1->Range(2.375,-13.76667,3.625,5.9);
   pad2_PP__1->SetFillColor(0);
   pad2_PP__1->SetBorderMode(0);
   pad2_PP__1->SetBorderSize(2);
   pad2_PP__1->SetTopMargin(0);
   pad2_PP__1->SetBottomMargin(0.4);
   pad2_PP__1->SetFrameBorderMode(0);
   pad2_PP__1->SetFrameBorderMode(0);
   
   TH1D *frame_mass_df85d70__3 = new TH1D("frame_mass_df85d70__3"," ",100,2.5,3.5);
   frame_mass_df85d70__3->SetBinContent(1,4.393615);
   frame_mass_df85d70__3->SetMinimum(-5.9);
   frame_mass_df85d70__3->SetMaximum(5.9);
   frame_mass_df85d70__3->SetEntries(1);
   frame_mass_df85d70__3->SetDirectory(nullptr);
   frame_mass_df85d70__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_df85d70__3->SetLineColor(ci);
   frame_mass_df85d70__3->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_df85d70__3->GetXaxis()->SetLabelFont(42);
   frame_mass_df85d70__3->GetXaxis()->SetLabelSize(0.12);
   frame_mass_df85d70__3->GetXaxis()->SetTitleSize(0.14);
   frame_mass_df85d70__3->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_df85d70__3->GetXaxis()->SetTitleFont(42);
   frame_mass_df85d70__3->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_df85d70__3->GetYaxis()->SetNdivisions(6);
   frame_mass_df85d70__3->GetYaxis()->SetLabelFont(42);
   frame_mass_df85d70__3->GetYaxis()->SetLabelSize(0.12);
   frame_mass_df85d70__3->GetYaxis()->SetTitleSize(0.12);
   frame_mass_df85d70__3->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_df85d70__3->GetYaxis()->SetTitleFont(42);
   frame_mass_df85d70__3->GetZaxis()->SetLabelFont(42);
   frame_mass_df85d70__3->GetZaxis()->SetTitleOffset(1);
   frame_mass_df85d70__3->GetZaxis()->SetTitleFont(42);
   frame_mass_df85d70__3->Draw("FUNC");
   
   Double_t pull_h_dataWithSWeights_massModel_fx3002[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t pull_h_dataWithSWeights_massModel_fy3002[40] = { -1.280431, 0.9925084, -0.7133723, 1.324652, -0.908335, -0.009375495, -1.58845, -0.7866739, -0.4450292, 1.019036, -1.111742, -0.5397262, 0.7242745, -0.8722935, -0.0237053, 0.917603, -0.2200171,
   1.794247, -0.2009188, 0.6186289, 1.898395, -1.265558, -1.916237, -0.9927927, -0.8601305, -0.2008362, -0.7154999, 0.4123138, 2.935703, 0.6305569, 1.221753, 1.171994, 1.237873,
   0.3409573, -0.4587317, 0.06118482, -0.7692409, -0.3197534, 0.09007115, 0.5333079 };
   Double_t pull_h_dataWithSWeights_massModel_felx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fely3002[40] = { 0.8152619, 1, 0.8218281, 1, 0.8152619, 0.8304506, 0.7995011, 0.8152619, 0.8218281, 1, 0.8116839, 0.8248515, 1, 0.8277214, 0.8464258, 1, 0.8585167,
   1, 0.8779019, 1, 1, 0.9057659, 0.9147928, 0.9249024, 0.9266023, 0.9244584, 0.9127845, 1, 1, 1, 1, 1, 1,
   1, 0.7786248, 1, 0.7489916, 0.7575533, 1, 1 };
   Double_t pull_h_dataWithSWeights_massModel_fehx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fehy3002[40] = { 1, 1.178759, 1, 1.176192, 1, 1, 1, 1, 1, 1.184238, 1, 1, 1.181438, 1, 1, 1.158919, 1,
   1.131018, 1, 1.119105, 1.1, 1, 1, 1, 1, 1, 1, 1.109904, 1.113881, 1.157091, 1.169093, 1.187168, 1.200407,
   1.237805, 1, 1.274739, 1, 1, 1.306744, 1.294919 };
   grae = new TGraphAsymmErrors(40,pull_h_dataWithSWeights_massModel_fx3002,pull_h_dataWithSWeights_massModel_fy3002,pull_h_dataWithSWeights_massModel_felx3002,pull_h_dataWithSWeights_massModel_fehx3002,pull_h_dataWithSWeights_massModel_fely3002,pull_h_dataWithSWeights_massModel_fehy3002);
   grae->SetName("pull_h_dataWithSWeights_massModel");
   grae->SetTitle("Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_pull_h_dataWithSWeights_massModel3002 = new TH1F("Graph_pull_h_dataWithSWeights_massModel3002","Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel",100,2.415,3.585);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMinimum(-3.519091);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMaximum(4.737646);
   Graph_pull_h_dataWithSWeights_massModel3002->SetDirectory(nullptr);
   Graph_pull_h_dataWithSWeights_massModel3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_pull_h_dataWithSWeights_massModel3002->SetLineColor(ci);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetRange(8,93);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetXaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitle("(Data - curve) / #sigma_{data}");
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetYaxis()->SetTitleFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetLabelFont(42);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleOffset(1);
   Graph_pull_h_dataWithSWeights_massModel3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_pull_h_dataWithSWeights_massModel3002);
   
   grae->Draw("px");
   
   TH1D *frame_mass_df85d70__4 = new TH1D("frame_mass_df85d70__4"," ",100,2.5,3.5);
   frame_mass_df85d70__4->SetBinContent(1,4.393615);
   frame_mass_df85d70__4->SetMinimum(-5.9);
   frame_mass_df85d70__4->SetMaximum(5.9);
   frame_mass_df85d70__4->SetEntries(1);
   frame_mass_df85d70__4->SetDirectory(nullptr);
   frame_mass_df85d70__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_df85d70__4->SetLineColor(ci);
   frame_mass_df85d70__4->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_df85d70__4->GetXaxis()->SetLabelFont(42);
   frame_mass_df85d70__4->GetXaxis()->SetLabelSize(0.12);
   frame_mass_df85d70__4->GetXaxis()->SetTitleSize(0.14);
   frame_mass_df85d70__4->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_df85d70__4->GetXaxis()->SetTitleFont(42);
   frame_mass_df85d70__4->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_df85d70__4->GetYaxis()->SetNdivisions(6);
   frame_mass_df85d70__4->GetYaxis()->SetLabelFont(42);
   frame_mass_df85d70__4->GetYaxis()->SetLabelSize(0.12);
   frame_mass_df85d70__4->GetYaxis()->SetTitleSize(0.12);
   frame_mass_df85d70__4->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_df85d70__4->GetYaxis()->SetTitleFont(42);
   frame_mass_df85d70__4->GetZaxis()->SetLabelFont(42);
   frame_mass_df85d70__4->GetZaxis()->SetTitleOffset(1);
   frame_mass_df85d70__4->GetZaxis()->SetTitleFont(42);
   frame_mass_df85d70__4->Draw("AXISSAME");
   TLine *line = new TLine(2.5,0,3.5,0);
   line->Draw();
   line = new TLine(2.5,2,3.5,2);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(2.5,-2,3.5,-2);
   line->SetLineStyle(2);
   line->Draw();
   
   pt = new TPaveText(0.485992,0.94,0.514008,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad2_PP__1->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);
}
