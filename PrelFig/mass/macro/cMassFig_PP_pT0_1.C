#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT0_1()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 21:15:35 2025) by ROOT version 6.32.06
   TCanvas *cMassFig_PP = new TCanvas("cMassFig_PP", "cMassFig",200,1103,1000,800);
   cMassFig_PP->Range(0,0,1,1);
   cMassFig_PP->SetFillColor(0);
   cMassFig_PP->SetBorderMode(0);
   cMassFig_PP->SetBorderSize(2);
   cMassFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_PP
   TPad *pad1_PP__0 = new TPad("pad1_PP", "",0,0,1,1);
   pad1_PP__0->Draw();
   pad1_PP__0->cd();
   pad1_PP__0->Range(2.375,-869.3751,3.625,7874.375);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_cfebbe0__1 = new TH1D("frame_mass_cfebbe0__1"," ",40,2.5,3.5);
   frame_mass_cfebbe0__1->SetBinContent(1,6693.585);
   frame_mass_cfebbe0__1->SetMinimum(5);
   frame_mass_cfebbe0__1->SetMaximum(7000);
   frame_mass_cfebbe0__1->SetEntries(1);
   frame_mass_cfebbe0__1->SetDirectory(nullptr);
   frame_mass_cfebbe0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_cfebbe0__1->SetLineColor(ci);
   frame_mass_cfebbe0__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cfebbe0__1->GetXaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__1->GetXaxis()->SetTitleSize(0.040);
   frame_mass_cfebbe0__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_cfebbe0__1->GetXaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cfebbe0__1->GetYaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__1->GetYaxis()->SetLabelSize(0.035);
   frame_mass_cfebbe0__1->GetYaxis()->SetTitleSize(0.040);
   frame_mass_cfebbe0__1->GetYaxis()->SetTitleOffset(1.25);
   frame_mass_cfebbe0__1->GetYaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__1->GetZaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_cfebbe0__1->GetZaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 3322, 3187, 3017, 2890, 2730, 2608, 2486, 2461, 2299, 2223, 2043, 2018, 1936, 2034, 1967, 1890, 2025,
   2232, 2308, 2683, 3244, 3940, 5087, 6295, 6062, 4708, 2878, 1720, 1084, 873, 810, 747, 695,
   703, 668, 629, 587, 564, 518, 537 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 57.13896, 55.95573, 54.4295, 53.26105, 51.75179, 50.57103, 49.36231, 49.11099, 47.4505, 46.65135, 44.70232, 44.42494, 43.50284, 44.60266, 43.85369, 42.97701, 44.50278,
   46.74669, 47.54425, 51.3001, 56.45832, 62.27141, 70.82496, 78.84261, 77.36045, 68.11669, 53.14932, 40.9759, 32.42795, 29.0508, 27.96489, 26.83587, 25.86759,
   26.01886, 25.35053, 24.58486, 23.73324, 23.25395, 22.2651, 22.67865 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 58.13896, 56.95573, 55.4295, 54.26105, 52.75179, 51.57103, 50.36231, 50.11099, 48.4505, 47.65135, 45.70232, 45.42494, 44.50284, 45.60266, 44.85369, 43.97701, 45.50278,
   47.74669, 48.54425, 52.3001, 57.45832, 63.27141, 71.82496, 79.84261, 78.36045, 69.11669, 54.14932, 41.9759, 33.42795, 30.0508, 28.96489, 27.83587, 26.86759,
   27.01886, 26.35053, 25.58486, 24.73324, 24.25395, 23.2651, 23.67865 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(446.1614);
   Graph_h_dataWithSWeights3001->SetMaximum(6962.753);
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
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.05625, 3.0625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625,
   3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.128125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175, 3.18125, 3.1875,
   3.19375, 3.2, 3.20625, 3.209375, 3.2125, 3.21875, 3.225, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45,
   3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[84] = { 27.87558, 32.44682, 37.92084, 44.50798, 52.47545, 62.16507, 74.01713, 88.60304, 106.6703, 129.205, 157.5198, 193.3787, 239.1768, 298.2022, 375.0219, 476.0614, 610.485,
   694.1504, 791.5609, 905.3676, 1038.812, 1195.876, 1381.478, 1601.719, 1727.138, 1864.212, 2014.2, 2178.513, 2358.743, 2556.682, 2774.352, 3014.041, 3278.34,
   3570.187, 3892.923, 4250.355, 4625.59, 4797.456, 4955.262, 5097.227, 5221.714, 5327.26, 5412.607, 5476.724, 5518.83, 5538.408, 5535.216, 5509.294, 5460.962,
   5390.81, 5299.693, 5188.707, 5059.171, 4912.599, 4750.671, 4575.204, 4388.112, 3987.011, 3132.766, 2709.185, 2304.605, 1928.419, 1587.279, 1285.145, 1023.524,
   801.8463, 617.9184, 468.4014, 412.7311, 383.8646, 352.208, 333.4386, 295.4642, 276.3981, 263.8907, 254.6856, 247.4549, 241.5307, 236.5315, 232.2194, 228.4369,
   225.0741, 222.0515, 222.0515 };
   TGraph *graph = new TGraph(84,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(25.08803);
   Graph_m_signal1->SetMaximum(6089.461);
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
   Double_t m_bkg_fy2[42] = { 3278.752, 3161.503, 3040.302, 2915.212, 2786.682, 2655.52, 2522.829, 2389.904, 2258.118, 2128.805, 2003.154, 1882.14, 1766.478, 1656.625, 1552.795, 1455.008, 1363.131,
   1276.938, 1196.144, 1120.442, 1049.525, 983.0954, 920.8698, 862.5829, 807.9852, 756.8433, 708.9385, 664.0658, 622.0334, 582.6614, 545.7815, 511.2359, 478.877,
   448.5662, 420.1739, 393.5788, 368.667, 345.332, 323.474, 302.9995, 283.821, 283.821 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(255.4389);
   Graph_m_bkg2->SetMaximum(3578.245);
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
   
   Double_t massModel_fx3[83] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.05625, 3.0625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625,
   3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175, 3.18125, 3.1875, 3.19375,
   3.2, 3.20625, 3.209375, 3.2125, 3.21875, 3.225, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475,
   3.5, 3.5 };
   Double_t massModel_fy3[83] = { 3306.628, 3193.95, 3078.223, 2959.72, 2839.157, 2717.685, 2596.846, 2478.507, 2364.788, 2258.01, 2160.674, 2075.518, 2005.655, 1954.827, 1927.817, 1931.069, 1973.616,
   2013.492, 2068.499, 2141.252, 2234.955, 2353.552, 2501.92, 2686.123, 2793.961, 2913.738, 3046.708, 3194.281, 3358.041, 3539.777, 3741.508, 3965.515, 4214.386,
   4491.056, 4798.862, 5141.605, 5502.39, 5667.118, 5817.845, 5952.788, 6070.31, 6168.949, 6247.445, 6304.767, 6340.132, 6353.024, 6343.201, 6310.702, 6255.846,
   6179.224, 6081.689, 5964.338, 5828.488, 5675.653, 5507.515, 5132.684, 4719.51, 3841.704, 3406.629, 2990.741, 2603.429, 2251.345, 1938.444, 1666.23, 1434.132,
   1239.952, 1080.349, 1019.698, 985.8902, 944.4723, 916.1, 841.2457, 787.634, 742.7677, 703.2518, 667.6288, 635.1095, 605.1984, 577.5514, 551.9109, 528.0736,
   505.8725, 505.8725 };
   graph = new TGraph(83,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(455.2853);
   Graph_massModel3->SetMaximum(6937.739);
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
   
   TH1D *frame_mass_cfebbe0__2 = new TH1D("frame_mass_cfebbe0__2"," ",40,2.5,3.5);
   frame_mass_cfebbe0__2->SetBinContent(1,6693.585);
   frame_mass_cfebbe0__2->SetMinimum(5);
   frame_mass_cfebbe0__2->SetMaximum(7000);
   frame_mass_cfebbe0__2->SetEntries(1);
   frame_mass_cfebbe0__2->SetDirectory(nullptr);
   frame_mass_cfebbe0__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_cfebbe0__2->SetLineColor(ci);
   frame_mass_cfebbe0__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cfebbe0__2->GetXaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_cfebbe0__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_cfebbe0__2->GetXaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cfebbe0__2->GetYaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_cfebbe0__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_cfebbe0__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_cfebbe0__2->GetYaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__2->GetZaxis()->SetLabelFont(42);
   frame_mass_cfebbe0__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_cfebbe0__2->GetZaxis()->SetTitleFont(42);
   frame_mass_cfebbe0__2->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
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
      tex = new TLatex(0.15,0.69,"0 < #it{p}_{T}^{#mu#mu} < 1 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 40 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      /*tex = new TLatex(0.2,0.54,"N_{J/#psi} = 37705#pm249");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 53001#pm278");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   
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
      /*tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 40 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT0_1.pdf");
   cMassFig_PP->SaveAs("../png/cMassFig_PP_pT0_1.png");
}
