#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT8_10()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 17:07:35 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",1667,743,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,-181.875,3.625,1686.875);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_d267590__1 = new TH1D("frame_mass_d267590__1"," ",40,2.5,3.5);
   frame_mass_d267590__1->SetBinContent(1,1268.14);
   frame_mass_d267590__1->SetMinimum(5);
   frame_mass_d267590__1->SetMaximum(1500);
   frame_mass_d267590__1->SetEntries(1);
   frame_mass_d267590__1->SetDirectory(nullptr);
   frame_mass_d267590__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_d267590__1->SetLineColor(ci);
   frame_mass_d267590__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_d267590__1->GetXaxis()->SetLabelFont(42);
   frame_mass_d267590__1->GetXaxis()->SetTitleSize(0.04);
   frame_mass_d267590__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_d267590__1->GetXaxis()->SetTitleFont(42);
   frame_mass_d267590__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_d267590__1->GetYaxis()->SetLabelFont(42);
   frame_mass_d267590__1->GetYaxis()->SetLabelSize(0.035);
   frame_mass_d267590__1->GetYaxis()->SetTitleSize(0.04);
   frame_mass_d267590__1->GetYaxis()->SetTitleOffset(1.25);
   frame_mass_d267590__1->GetYaxis()->SetTitleFont(42);
   frame_mass_d267590__1->GetZaxis()->SetLabelFont(42);
   frame_mass_d267590__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_d267590__1->GetZaxis()->SetTitleFont(42);
   frame_mass_d267590__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 141, 126, 123, 114, 122, 107, 113, 123, 104, 132, 114, 117, 125, 129, 143, 194, 199,
   249, 308, 389, 539, 754, 1004, 1158, 1173, 1028, 682, 462, 250, 154, 129, 91, 68,
   64, 63, 55, 50, 55, 32, 56 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 11.38486, 10.7361, 10.6018, 10.18878, 10.55667, 9.856158, 10.1419, 10.6018, 9.710289, 11, 10.18878, 10.3282, 10.69151, 10.86882, 11.46871, 13.43736, 13.61559,
   15.28765, 17.05705, 19.22942, 22.72176, 26.96361, 31.1899, 33.53307, 33.75274, 31.56634, 25.61992, 21, 15.31929, 11.91974, 10.86882, 9.521834, 8.225883,
   7.979042, 7.916129, 7.39358, 7.047337, 7.39358, 5.627135, 7.4609 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 12.38486, 11.7361, 11.6018, 11.18878, 11.55667, 10.85616, 11.1419, 11.6018, 10.71029, 12, 11.18878, 11.3282, 11.69151, 11.86882, 12.46871, 14.43736, 14.61559,
   16.28765, 18.05705, 20.22942, 23.72176, 27.96361, 32.1899, 34.53307, 34.75274, 32.56634, 26.61992, 22, 16.31929, 12.91974, 11.86882, 10.57436, 9.28666,
   9.041691, 8.979274, 8.461166, 8.118225, 8.461166, 6.715753, 8.527879 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(23.73558);
   Graph_h_dataWithSWeights3001->SetMaximum(1325.891);
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
   
   Double_t m_signal_fx1[87] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125,
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.1875, 3.19375, 3.2,
   3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.25625, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375,
   3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[87] = { 0.3523667, 0.4932901, 0.6914948, 0.9706419, 1.364324, 1.920298, 2.70656, 3.820052, 5.399186, 7.641872, 10.8315, 15.37446, 21.8544, 31.11076, 44.35275, 63.3248, 75.70829,
   90.54738, 108.3358, 129.6678, 155.2593, 185.9724, 222.8465, 267.1346, 292.5198, 320.3482, 350.8581, 384.3111, 420.9947, 461.2249, 505.349, 553.7485, 606.8431,
   665.094, 729.0083, 796.9904, 862.5109, 923.5741, 978.531, 1025.825, 1046.154, 1064.063, 1079.413, 1092.087, 1101.984, 1109.028, 1113.163, 1114.355, 1112.597,
   1107.9, 1100.303, 1089.866, 1076.67, 1060.819, 1042.434, 1021.657, 973.564, 917.9514, 856.3878, 790.5275, 516.2493, 451.9437, 391.4757, 335.5219, 284.533,
   238.7482, 198.2181, 162.8329, 132.3538, 106.4453, 84.70565, 66.69508, 51.96021, 40.0538, 30.55007, 17.21615, 9.299134, 4.814284, 1.136209, 0.2263159, 0.03804544,
   0.00539785, 0.0006463529, 6.678228e-05, 7.192439e-06, 8.389853e-07, 8.389853e-07 };
   TGraph *graph = new TGraph(87,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(7.550867e-07);
   Graph_m_signal1->SetMaximum(1225.791);
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
   Double_t m_bkg_fy2[42] = { 130.9054, 128.1123, 125.3711, 122.6808, 120.0406, 117.4496, 114.9069, 112.4117, 109.9632, 107.5605, 105.203, 102.8897, 100.62, 98.39316, 96.20838, 94.065, 91.96232,
   89.89966, 87.87638, 85.89182, 83.94537, 82.0364, 80.16432, 78.32856, 76.52854, 74.76373, 73.03357, 71.33757, 69.67521, 68.046, 66.44949, 64.88521, 63.35273,
   61.85163, 60.3815, 58.94196, 57.53265, 56.15321, 54.80332, 53.48265, 52.19094, 52.19094 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(44.31949);
   Graph_m_bkg2->SetMaximum(138.7768);
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
   
   Double_t massModel_fx3[87] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125,
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.175, 3.18125, 3.1875, 3.19375, 3.2,
   3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.25625, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35, 3.375,
   3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[87] = { 131.2578, 128.6056, 126.0626, 123.6515, 121.4049, 119.3699, 117.6135, 116.2318, 115.3624, 115.2024, 116.0345, 118.2642, 122.4744, 129.5039, 140.5611, 157.3898, 168.7169,
   182.5097, 199.2618, 219.5675, 244.1424, 273.8488, 309.7258, 353.0264, 377.9214, 405.2621, 435.2866, 468.2565, 504.4594, 544.2112, 587.8591, 635.7849, 688.408,
   746.1898, 809.6372, 877.1547, 942.2129, 1002.816, 1057.315, 1104.153, 1124.256, 1141.938, 1157.063, 1169.511, 1179.184, 1186.003, 1189.914, 1190.884, 1188.903,
   1183.984, 1176.166, 1165.508, 1152.092, 1136.02, 1117.417, 1096.421, 1047.892, 991.8457, 929.8507, 863.561, 587.5869, 522.8625, 461.9779, 405.6096, 354.2082,
   308.013, 267.0746, 231.2831, 200.3998, 174.0892, 151.9493, 133.5407, 118.4097, 106.1092, 96.21341, 82.10136, 73.41416, 68.16701, 62.98784, 60.60782, 58.98001,
   57.53805, 56.15386, 54.80338, 53.48266, 52.19094, 52.19094 };
   graph = new TGraph(87,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(46.97184);
   Graph_massModel3->SetMaximum(1304.753);
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
   
   TH1D *frame_mass_d267590__2 = new TH1D("frame_mass_d267590__2"," ",40,2.5,3.5);
   frame_mass_d267590__2->SetBinContent(1,1268.14);
   frame_mass_d267590__2->SetMinimum(5);
   frame_mass_d267590__2->SetMaximum(1500);
   frame_mass_d267590__2->SetEntries(1);
   frame_mass_d267590__2->SetDirectory(nullptr);
   frame_mass_d267590__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_d267590__2->SetLineColor(ci);
   frame_mass_d267590__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_d267590__2->GetXaxis()->SetLabelFont(42);
   frame_mass_d267590__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_d267590__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_d267590__2->GetXaxis()->SetTitleFont(42);
   frame_mass_d267590__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_d267590__2->GetYaxis()->SetLabelFont(42);
   frame_mass_d267590__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_d267590__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_d267590__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_d267590__2->GetYaxis()->SetTitleFont(42);
   frame_mass_d267590__2->GetZaxis()->SetLabelFont(42);
   frame_mass_d267590__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_d267590__2->GetZaxis()->SetTitleFont(42);
   frame_mass_d267590__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"8 GeV/c < #it{p}_{T}^{#mu#mu} < 10 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 7580#pm98");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 3459#pm74");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
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
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 41 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT8_10.pdf");
   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT8_10.png");
}
