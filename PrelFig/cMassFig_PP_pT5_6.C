#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT5_6()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 12:16:57 2025) by ROOT version 6.32.06
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
   pad1_PP__0->Range(2.375,5,3.625,4443.889);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetBottomMargin(0);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_e2b5020__1 = new TH1D("frame_mass_e2b5020__1"," ",40,2.5,3.5);
   frame_mass_e2b5020__1->SetBinContent(1,2684.391);
   frame_mass_e2b5020__1->SetMinimum(5);
   frame_mass_e2b5020__1->SetMaximum(4000);
   frame_mass_e2b5020__1->SetEntries(1);
   frame_mass_e2b5020__1->SetDirectory(nullptr);
   frame_mass_e2b5020__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_e2b5020__1->SetLineColor(ci);
   frame_mass_e2b5020__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_e2b5020__1->GetXaxis()->SetLabelFont(42);
   frame_mass_e2b5020__1->GetXaxis()->SetLabelSize(0.04);
   frame_mass_e2b5020__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_e2b5020__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_e2b5020__1->GetXaxis()->SetTitleFont(42);
   frame_mass_e2b5020__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_e2b5020__1->GetYaxis()->SetLabelFont(42);
   frame_mass_e2b5020__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_e2b5020__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_e2b5020__1->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_e2b5020__1->GetYaxis()->SetTitleFont(42);
   frame_mass_e2b5020__1->GetZaxis()->SetLabelFont(42);
   frame_mass_e2b5020__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_e2b5020__1->GetZaxis()->SetTitleFont(42);
   frame_mass_e2b5020__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 284, 291, 280, 287, 273, 280, 288, 288, 297, 276, 279, 295, 315, 325, 326, 357, 438,
   548, 703, 929, 1184, 1639, 2135, 2506, 2478, 1928, 1391, 841, 478, 296, 199, 147, 133,
   134, 140, 136, 105, 131, 125, 131 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 16.35972, 16.56605, 16.24067, 16.44845, 16.03028, 16.24067, 16.47793, 16.47793, 16.74094, 16.12077, 16.21077, 16.68284, 17.25528, 17.53469, 17.56239, 18.40106, 20.43442,
   22.91474, 26.01886, 29.9836, 33.91293, 39.98765, 45.70877, 49.56246, 49.28202, 43.41184, 36.79946, 28.50431, 21.36893, 16.71191, 13.61559, 11.63466, 11.0434,
   11.08663, 11.34272, 11.17262, 9.759142, 10.95644, 10.69151, 10.95644 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 17.35972, 17.56605, 17.24067, 17.44845, 17.03028, 17.24067, 17.47793, 17.47793, 17.74094, 17.12077, 17.21077, 17.68284, 18.25528, 18.53469, 18.56239, 19.40106, 21.43442,
   23.91474, 27.01886, 30.9836, 34.91293, 40.98765, 46.70877, 50.56246, 50.28202, 44.41184, 37.79946, 29.50431, 22.36893, 17.71191, 14.61559, 12.63466, 12.0434,
   12.08663, 12.34272, 12.17262, 10.75914, 11.95644, 11.69151, 11.95644 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(85.71677);
   Graph_h_dataWithSWeights3001->SetMaximum(2802.695);
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
   
   Double_t m_signal_fx1[89] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125,
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1,
   3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.1625, 3.16875, 3.175, 3.18125,
   3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325,
   3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[89] = { 1.671737, 2.220332, 2.956753, 3.948036, 5.286135, 7.097565, 9.556919, 12.90589, 17.48013, 23.74724, 32.36088, 44.23776, 60.66798, 83.47351, 115.2365, 159.6301, 188.1236,
   221.8986, 261.9707, 309.558, 366.1227, 433.4221, 513.5698, 609.1112, 663.59, 723.1142, 788.1673, 859.2805, 937.0379, 1022.082, 1115.118, 1216.924, 1328.355,
   1450.352, 1583.952, 1729.105, 1870.784, 2001.022, 2115.952, 2166.543, 2212.002, 2251.957, 2286.079, 2314.082, 2335.73, 2350.84, 2359.283, 2360.986, 2355.935,
   2344.172, 2325.8, 2300.973, 2269.902, 2232.849, 2190.12, 2142.067, 2089.078, 1970.004, 1836.561, 1692.659, 1542.267, 1237.135, 1089.143, 947.9342, 815.6381,
   693.8133, 583.4634, 485.0768, 398.688, 323.9528, 260.2293, 206.66, 162.2492, 125.9315, 96.63007, 73.30202, 40.75687, 21.64657, 10.98199, 5.322014, 1.089373,
   0.1856481, 0.02634016, 0.003456787, 0.0005084097, 8.311378e-05, 1.493648e-05, 2.923167e-06, 2.923167e-06 };
   TGraph *graph = new TGraph(89,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(2.63085e-06);
   Graph_m_signal1->SetMaximum(2597.085);
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
   Double_t m_bkg_fy2[42] = { 320.1976, 309.9888, 300.1669, 290.7201, 281.6368, 272.9057, 264.5162, 256.4578, 248.7204, 241.2942, 234.1699, 227.3384, 220.7911, 214.5196, 208.5158, 202.7721, 197.281,
   192.0357, 187.0294, 182.2557, 177.7085, 173.3823, 169.2717, 165.3716, 161.6773, 158.1845, 154.8894, 151.7881, 148.8776, 146.1549, 143.6176, 141.2635, 139.091,
   137.0987, 135.286, 133.6523, 132.1977, 130.9227, 129.8283, 128.9161, 128.1878, 128.1878 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(108.9868);
   Graph_m_bkg2->SetMaximum(339.3985);
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
   
   Double_t massModel_fx3[89] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125,
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1,
   3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.1625, 3.16875, 3.175, 3.18125,
   3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.2625, 3.275, 3.2875, 3.3, 3.325,
   3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[89] = { 321.8693, 312.2091, 303.1237, 294.6681, 286.9229, 280.0033, 274.0732, 269.3637, 266.2005, 265.0414, 266.5308, 271.5762, 281.4591, 297.9931, 323.7523, 362.4022, 388.119,
   419.1797, 456.5988, 501.5937, 555.6258, 620.4514, 698.1837, 791.3669, 844.6878, 903.0683, 966.9917, 1036.989, 1113.644, 1197.6, 1289.561, 1390.306, 1500.69,
   1621.653, 1754.232, 1898.377, 2039.061, 2168.317, 2282.279, 2332.391, 2377.374, 2416.856, 2450.508, 2478.044, 2499.229, 2513.879, 2521.865, 2523.114, 2517.612,
   2505.402, 2486.585, 2461.317, 2429.808, 2392.32, 2349.159, 2300.677, 2247.262, 2127.346, 1993.074, 1848.354, 1697.156, 1390.45, 1241.688, 1099.722, 966.6808,
   844.1226, 733.051, 633.9544, 546.8675, 471.4458, 407.0474, 352.8149, 307.7525, 270.7948, 240.8647, 216.9196, 183.1746, 162.9101, 151.1366, 144.413, 138.1881,
   135.4716, 133.6786, 132.2011, 130.9232, 129.8284, 128.9161, 128.1878, 128.1878 };
   graph = new TGraph(89,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(115.369);
   Graph_massModel3->SetMaximum(2762.606);
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
   
   TH1D *frame_mass_e2b5020__2 = new TH1D("frame_mass_e2b5020__2"," ",40,2.5,3.5);
   frame_mass_e2b5020__2->SetBinContent(1,2684.391);
   frame_mass_e2b5020__2->SetMinimum(5);
   frame_mass_e2b5020__2->SetMaximum(4000);
   frame_mass_e2b5020__2->SetEntries(1);
   frame_mass_e2b5020__2->SetDirectory(nullptr);
   frame_mass_e2b5020__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_e2b5020__2->SetLineColor(ci);
   frame_mass_e2b5020__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_e2b5020__2->GetXaxis()->SetLabelFont(42);
   frame_mass_e2b5020__2->GetXaxis()->SetLabelSize(0.04);
   frame_mass_e2b5020__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_e2b5020__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_e2b5020__2->GetXaxis()->SetTitleFont(42);
   frame_mass_e2b5020__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_e2b5020__2->GetYaxis()->SetLabelFont(42);
   frame_mass_e2b5020__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_e2b5020__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_e2b5020__2->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_e2b5020__2->GetYaxis()->SetTitleFont(42);
   frame_mass_e2b5020__2->GetZaxis()->SetLabelFont(42);
   frame_mass_e2b5020__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_e2b5020__2->GetZaxis()->SetTitleFont(42);
   frame_mass_e2b5020__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"5 GeV/c < #it{p}_{T}^{#mu#mu} < 6 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 15900#pm142");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 7716#pm110");
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
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 36 / 40 ");
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
   
   TH1D *frame_mass_fbf0ef0__3 = new TH1D("frame_mass_fbf0ef0__3"," ",100,2.5,3.5);
   frame_mass_fbf0ef0__3->SetBinContent(1,3.249622);
   frame_mass_fbf0ef0__3->SetMinimum(-5.9);
   frame_mass_fbf0ef0__3->SetMaximum(5.9);
   frame_mass_fbf0ef0__3->SetEntries(1);
   frame_mass_fbf0ef0__3->SetDirectory(nullptr);
   frame_mass_fbf0ef0__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_fbf0ef0__3->SetLineColor(ci);
   frame_mass_fbf0ef0__3->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_fbf0ef0__3->GetXaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__3->GetXaxis()->SetLabelSize(0.12);
   frame_mass_fbf0ef0__3->GetXaxis()->SetTitleSize(0.14);
   frame_mass_fbf0ef0__3->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_fbf0ef0__3->GetXaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__3->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_fbf0ef0__3->GetYaxis()->SetNdivisions(6);
   frame_mass_fbf0ef0__3->GetYaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__3->GetYaxis()->SetLabelSize(0.12);
   frame_mass_fbf0ef0__3->GetYaxis()->SetTitleSize(0.12);
   frame_mass_fbf0ef0__3->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_fbf0ef0__3->GetYaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__3->GetZaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__3->GetZaxis()->SetTitleOffset(1);
   frame_mass_fbf0ef0__3->GetZaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__3->Draw("FUNC");
   
   Double_t pull_h_dataWithSWeights_massModel_fx3002[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t pull_h_dataWithSWeights_massModel_fy3002[40] = { -1.903212, -0.9487851, -1.096008, -0.2175279, -0.6143826, 0.1823674, 0.9880839, 1.226969, 1.874389, 0.6335857, 0.6135741, 1.107866, 1.464706, 0.8056772, -0.9199926, -1.672846, -0.9560667,
   -0.431707, 0.03665006, 0.7260152, -0.561776, 0.2193446, -0.4753661, 0.496881, 1.309539, -1.288975, -0.06865603, -0.3956432, -0.07538638, 1.192574, 0.9147803, -0.4273215, -0.6892197,
   -0.2341322, 0.4782701, 0.2738958, -2.468799, 0.05697014, -0.3739672, 0.2234357 };
   Double_t pull_h_dataWithSWeights_massModel_felx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fely3002[40] = { 0.9423954, 0.943072, 0.9419976, 0.9426883, 0.941281, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.9461276, 0.9484564, 0.9533461,
   0.9581848, 1, 1, 0.9713573, 1, 0.9785907, 1, 1, 0.9774835, 0.9735446, 0.9661066, 0.9552951, 1, 1, 0.9208526, 0.9169669,
   0.917264, 1, 1, 0.9070558, 1, 0.9144679, 1 };
   Double_t pull_h_dataWithSWeights_massModel_fehx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fehy3002[40] = { 1, 1, 1, 1, 1, 1.061574, 1.060687, 1.060687, 1.059734, 1.062032, 1.061687, 1.059942, 1.057953, 1.05703, 1, 1, 1,
   1, 1.038434, 1.033352, 1, 1.025008, 1, 1.020177, 1.020291, 1, 1, 1, 1, 1.059838, 1.073445, 1, 1,
   1, 1.088162, 1.089505, 1, 1.091271, 1, 1.091271 };
   grae = new TGraphAsymmErrors(40,pull_h_dataWithSWeights_massModel_fx3002,pull_h_dataWithSWeights_massModel_fy3002,pull_h_dataWithSWeights_massModel_felx3002,pull_h_dataWithSWeights_massModel_fehx3002,pull_h_dataWithSWeights_massModel_fely3002,pull_h_dataWithSWeights_massModel_fehy3002);
   grae->SetName("pull_h_dataWithSWeights_massModel");
   grae->SetTitle("Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_pull_h_dataWithSWeights_massModel3002 = new TH1F("Graph_pull_h_dataWithSWeights_massModel3002","Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel",100,2.415,3.585);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMinimum(-4.006853);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMaximum(3.56512);
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
   
   TH1D *frame_mass_fbf0ef0__4 = new TH1D("frame_mass_fbf0ef0__4"," ",100,2.5,3.5);
   frame_mass_fbf0ef0__4->SetBinContent(1,3.249622);
   frame_mass_fbf0ef0__4->SetMinimum(-5.9);
   frame_mass_fbf0ef0__4->SetMaximum(5.9);
   frame_mass_fbf0ef0__4->SetEntries(1);
   frame_mass_fbf0ef0__4->SetDirectory(nullptr);
   frame_mass_fbf0ef0__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_fbf0ef0__4->SetLineColor(ci);
   frame_mass_fbf0ef0__4->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_fbf0ef0__4->GetXaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__4->GetXaxis()->SetLabelSize(0.12);
   frame_mass_fbf0ef0__4->GetXaxis()->SetTitleSize(0.14);
   frame_mass_fbf0ef0__4->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_fbf0ef0__4->GetXaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__4->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_fbf0ef0__4->GetYaxis()->SetNdivisions(6);
   frame_mass_fbf0ef0__4->GetYaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__4->GetYaxis()->SetLabelSize(0.12);
   frame_mass_fbf0ef0__4->GetYaxis()->SetTitleSize(0.12);
   frame_mass_fbf0ef0__4->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_fbf0ef0__4->GetYaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__4->GetZaxis()->SetLabelFont(42);
   frame_mass_fbf0ef0__4->GetZaxis()->SetTitleOffset(1);
   frame_mass_fbf0ef0__4->GetZaxis()->SetTitleFont(42);
   frame_mass_fbf0ef0__4->Draw("AXISSAME");
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
