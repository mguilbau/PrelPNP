#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT6_8()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 12:27:08 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_mass_cf81ed0__1 = new TH1D("frame_mass_cf81ed0__1"," ",40,2.5,3.5);
   frame_mass_cf81ed0__1->SetBinContent(1,2977.009);
   frame_mass_cf81ed0__1->SetMinimum(5);
   frame_mass_cf81ed0__1->SetMaximum(4000);
   frame_mass_cf81ed0__1->SetEntries(1);
   frame_mass_cf81ed0__1->SetDirectory(nullptr);
   frame_mass_cf81ed0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_cf81ed0__1->SetLineColor(ci);
   frame_mass_cf81ed0__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cf81ed0__1->GetXaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__1->GetXaxis()->SetLabelSize(0.04);
   frame_mass_cf81ed0__1->GetXaxis()->SetTitleSize(0.045);
   frame_mass_cf81ed0__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_cf81ed0__1->GetXaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cf81ed0__1->GetYaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__1->GetYaxis()->SetLabelSize(0.04);
   frame_mass_cf81ed0__1->GetYaxis()->SetTitleSize(0.045);
   frame_mass_cf81ed0__1->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_cf81ed0__1->GetYaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__1->GetZaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_cf81ed0__1->GetZaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 295, 304, 291, 291, 292, 270, 249, 284, 301, 268, 286, 292, 294, 331, 354, 369, 510,
   629, 719, 956, 1253, 1702, 2274, 2782, 2651, 2263, 1561, 990, 580, 337, 252, 186, 143,
   148, 141, 138, 113, 103, 127, 119 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 16.68284, 16.94276, 16.56605, 16.56605, 16.59532, 15.93928, 15.28765, 16.35972, 16.85655, 15.87834, 16.41892, 16.59532, 16.65372, 17.70027, 18.32153, 18.71588, 22.08871,
   24.58486, 26.31884, 30.42329, 34.90127, 40.75833, 47.1891, 52.24704, 50.99029, 47.07363, 39.01266, 30.96824, 23.58838, 17.86437, 15.38238, 13.14734, 11.46871,
   11.6758, 11.38486, 11.25798, 10.1419, 9.661201, 10.78051, 10.42016 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 17.68284, 17.94276, 17.56605, 17.56605, 17.59532, 16.93928, 16.28765, 17.35972, 17.85655, 16.87834, 17.41892, 17.59532, 17.65372, 18.70027, 19.32153, 19.71588, 23.08871,
   25.58486, 27.31884, 31.42329, 35.90127, 41.75833, 48.1891, 53.24704, 51.99029, 48.07363, 40.01266, 31.96824, 24.58838, 18.86437, 16.38238, 14.14734, 12.46871,
   12.6758, 12.38486, 12.25798, 11.1419, 10.6612, 11.78051, 11.42016 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(84.00492);
   Graph_h_dataWithSWeights3001->SetMaximum(3109.438);
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
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.1625, 3.16875, 3.175, 3.18125, 3.1875,
   3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.25625, 3.2625, 3.275, 3.2875, 3.3, 3.325,
   3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[89] = { 2.473435, 3.216874, 4.196404, 5.491118, 7.208018, 9.492383, 12.54217, 16.62812, 22.12193, 29.53589, 39.57884, 53.23568, 71.88057, 97.43903, 132.6211, 181.2585, 212.2431,
   248.7935, 291.9584, 342.9938, 403.4053, 475.0002, 559.9509, 660.8719, 718.282, 780.914, 849.2646, 923.8793, 1005.358, 1094.362, 1191.617, 1297.922, 1414.158,
   1541.294, 1680.401, 1832.634, 1987.042, 2130.897, 2260.174, 2371.076, 2418.558, 2460.217, 2495.723, 2524.79, 2547.184, 2562.721, 2571.274, 2572.774, 2567.206,
   2554.618, 2535.112, 2508.848, 2476.04, 2436.952, 2391.896, 2341.228, 2224.665, 2090.786, 1943.475, 1786.784, 1461.272, 1299.861, 1143.633, 995.178, 856.5227,
   729.1236, 613.8858, 511.2085, 421.0491, 342.998, 276.3596, 220.2326, 173.5853, 135.3219, 104.3393, 79.57037, 60.01767, 33.0375, 17.4033, 8.773093, 1.95382,
   0.3649241, 0.0652429, 0.01586406, 0.004859149, 0.001757033, 0.0007199798, 0.0003252921, 0.0003252921 };
   TGraph *graph = new TGraph(89,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(0.0002927629);
   Graph_m_signal1->SetMaximum(2830.051);
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
   Double_t m_bkg_fy2[42] = { 316.7925, 306.6569, 296.9575, 287.676, 278.7949, 270.2976, 262.1681, 254.3909, 246.9513, 239.8354, 233.0297, 226.5213, 220.298, 214.3481, 208.6603, 203.224, 198.029,
   193.0655, 188.3244, 183.7967, 179.4741, 175.3485, 171.4123, 167.6584, 164.0797, 160.6697, 157.4222, 154.3313, 151.3914, 148.5971, 145.9435, 143.4258, 141.0394,
   138.78, 136.6438, 134.6268, 132.7255, 130.9365, 129.2566, 127.683, 126.2127, 126.2127 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(107.1548);
   Graph_m_bkg2->SetMaximum(335.8504);
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
   
   Double_t massModel_fx3[88] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.8875,
   2.9, 2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125,
   3.0375, 3.04375, 3.05, 3.05625, 3.0625, 3.06875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125,
   3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.14375, 3.15, 3.1625, 3.175, 3.18125, 3.1875, 3.19375,
   3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.24375, 3.25, 3.25625, 3.2625, 3.275, 3.2875, 3.3, 3.325, 3.35,
   3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[88] = { 319.2659, 309.8738, 301.1539, 293.1671, 286.003, 279.79, 274.7102, 271.019, 269.0733, 269.3713, 272.6085, 279.757, 292.1786, 311.7871, 341.2814, 384.4824, 412.84,
   446.8224, 487.4773, 536.0593, 594.073, 663.3245, 745.9852, 844.6686, 900.9791, 962.5243, 1029.801, 1103.353, 1183.783, 1271.749, 1367.979, 1473.27, 1588.505,
   1714.652, 1852.78, 2004.046, 2157.499, 2300.41, 2428.754, 2538.735, 2585.759, 2626.964, 2662.019, 2690.638, 2712.585, 2727.679, 2735.792, 2736.853, 2730.85,
   2717.829, 2697.893, 2671.202, 2637.969, 2598.459, 2552.983, 2501.898, 2384.508, 2249.812, 2101.694, 1944.207, 1617.13, 1297.965, 1148.76, 1009.366, 881.2361,
   765.2771, 661.8879, 571.0255, 492.2803, 424.9567, 368.1534, 320.8383, 281.916, 250.2828, 224.8719, 204.6856, 176.4633, 159.6197, 149.8124, 140.7339, 137.0087,
   134.692, 132.7413, 130.9413, 129.2584, 127.6837, 126.2131, 126.2131 };
   graph = new TGraph(88,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(113.5918);
   Graph_massModel3->SetMaximum(2997.917);
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
   
   TH1D *frame_mass_cf81ed0__2 = new TH1D("frame_mass_cf81ed0__2"," ",40,2.5,3.5);
   frame_mass_cf81ed0__2->SetBinContent(1,2977.009);
   frame_mass_cf81ed0__2->SetMinimum(5);
   frame_mass_cf81ed0__2->SetMaximum(4000);
   frame_mass_cf81ed0__2->SetEntries(1);
   frame_mass_cf81ed0__2->SetDirectory(nullptr);
   frame_mass_cf81ed0__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_cf81ed0__2->SetLineColor(ci);
   frame_mass_cf81ed0__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_cf81ed0__2->GetXaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__2->GetXaxis()->SetLabelSize(0.04);
   frame_mass_cf81ed0__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_cf81ed0__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_cf81ed0__2->GetXaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_cf81ed0__2->GetYaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_cf81ed0__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_cf81ed0__2->GetYaxis()->SetTitleOffset(0.99);
   frame_mass_cf81ed0__2->GetYaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__2->GetZaxis()->SetLabelFont(42);
   frame_mass_cf81ed0__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_cf81ed0__2->GetZaxis()->SetTitleFont(42);
   frame_mass_cf81ed0__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"6 GeV/c < #it{p}_{T}^{#mu#mu} < 8 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 17722#pm150");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 7725#pm112");
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
      tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 50 / 40 ");
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
   
   TH1D *frame_mass_ec3ec10__3 = new TH1D("frame_mass_ec3ec10__3"," ",100,2.5,3.5);
   frame_mass_ec3ec10__3->SetBinContent(1,4.26842);
   frame_mass_ec3ec10__3->SetMinimum(-5.9);
   frame_mass_ec3ec10__3->SetMaximum(5.9);
   frame_mass_ec3ec10__3->SetEntries(1);
   frame_mass_ec3ec10__3->SetDirectory(nullptr);
   frame_mass_ec3ec10__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_ec3ec10__3->SetLineColor(ci);
   frame_mass_ec3ec10__3->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_ec3ec10__3->GetXaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__3->GetXaxis()->SetLabelSize(0.12);
   frame_mass_ec3ec10__3->GetXaxis()->SetTitleSize(0.14);
   frame_mass_ec3ec10__3->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_ec3ec10__3->GetXaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__3->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_ec3ec10__3->GetYaxis()->SetNdivisions(6);
   frame_mass_ec3ec10__3->GetYaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__3->GetYaxis()->SetLabelSize(0.12);
   frame_mass_ec3ec10__3->GetYaxis()->SetTitleSize(0.12);
   frame_mass_ec3ec10__3->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_ec3ec10__3->GetYaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__3->GetZaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__3->GetZaxis()->SetTitleOffset(1);
   frame_mass_ec3ec10__3->GetZaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__3->Draw("FUNC");
   
   Double_t pull_h_dataWithSWeights_massModel_fx3002[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t pull_h_dataWithSWeights_massModel_fy3002[40] = { -1.106713, -0.08436879, -0.3507031, 0.08541481, 0.5485587, -0.4280073, -1.465196, 0.8529418, 1.885185, -0.1771446, 0.5979225, 0.3634889, -0.4521902, 0.2522981, -0.4596906, -2.294913, 0.9299279,
   1.306396, -1.134415, -0.3446084, -0.6951183, -0.5184256, -0.3219258, 2.097653, -0.04462834, 0.4935542, -1.452234, -0.8679145, -0.003158817, 0.552393, 2.835956, 1.872714, -0.1823084,
   0.7818503, 0.4523233, 0.3804699, -1.691035, -2.541916, -0.1248724, -0.6959965 };
   Double_t pull_h_dataWithSWeights_massModel_felx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fely3002[40] = { 0.943448, 0.9442672, 0.943072, 1, 1, 0.9409656, 0.9386038, 1, 1, 0.9407525, 1, 1, 0.9433547, 1, 0.9482443, 0.9492795, 1,
   1, 0.9633952, 0.9681765, 0.9721458, 0.9760527, 0.9792484, 1, 0.9807656, 1, 0.9750079, 0.968719, 0.9593304, 1, 1, 1, 0.9197992,
   1, 1, 1, 0.9102487, 0.9062019, 0.9151141, 0.9124356 };
   Double_t pull_h_dataWithSWeights_massModel_fehx3002[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0 };
   Double_t pull_h_dataWithSWeights_massModel_fehy3002[40] = { 1, 1, 1, 1.060364, 1.060258, 1, 1, 1.061126, 1.059324, 1, 1.060905, 1.060258, 1, 1.056496, 1, 1, 1.045272,
   1.040675, 1, 1, 1, 1, 1, 1.01914, 1, 1.021243, 1, 1, 1, 1.055977, 1.065009, 1.076061, 1,
   1.085647, 1.087836, 1.088826, 1, 1, 1, 1 };
   grae = new TGraphAsymmErrors(40,pull_h_dataWithSWeights_massModel_fx3002,pull_h_dataWithSWeights_massModel_fy3002,pull_h_dataWithSWeights_massModel_felx3002,pull_h_dataWithSWeights_massModel_fehx3002,pull_h_dataWithSWeights_massModel_fely3002,pull_h_dataWithSWeights_massModel_fehy3002);
   grae->SetName("pull_h_dataWithSWeights_massModel");
   grae->SetTitle("Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_pull_h_dataWithSWeights_massModel3002 = new TH1F("Graph_pull_h_dataWithSWeights_massModel3002","Pull of Histogram of dataWithSWeights_plot__mass and Projection of massModel",100,2.415,3.585);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMinimum(-4.183026);
   Graph_pull_h_dataWithSWeights_massModel3002->SetMaximum(4.635874);
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
   
   TH1D *frame_mass_ec3ec10__4 = new TH1D("frame_mass_ec3ec10__4"," ",100,2.5,3.5);
   frame_mass_ec3ec10__4->SetBinContent(1,4.26842);
   frame_mass_ec3ec10__4->SetMinimum(-5.9);
   frame_mass_ec3ec10__4->SetMaximum(5.9);
   frame_mass_ec3ec10__4->SetEntries(1);
   frame_mass_ec3ec10__4->SetDirectory(nullptr);
   frame_mass_ec3ec10__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_ec3ec10__4->SetLineColor(ci);
   frame_mass_ec3ec10__4->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_ec3ec10__4->GetXaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__4->GetXaxis()->SetLabelSize(0.12);
   frame_mass_ec3ec10__4->GetXaxis()->SetTitleSize(0.14);
   frame_mass_ec3ec10__4->GetXaxis()->SetTitleOffset(0.95);
   frame_mass_ec3ec10__4->GetXaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__4->GetYaxis()->SetTitle("#frac{|hist - curve|}{#delta(hist)}");
   frame_mass_ec3ec10__4->GetYaxis()->SetNdivisions(6);
   frame_mass_ec3ec10__4->GetYaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__4->GetYaxis()->SetLabelSize(0.12);
   frame_mass_ec3ec10__4->GetYaxis()->SetTitleSize(0.12);
   frame_mass_ec3ec10__4->GetYaxis()->SetTitleOffset(0.35);
   frame_mass_ec3ec10__4->GetYaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__4->GetZaxis()->SetLabelFont(42);
   frame_mass_ec3ec10__4->GetZaxis()->SetTitleOffset(1);
   frame_mass_ec3ec10__4->GetZaxis()->SetTitleFont(42);
   frame_mass_ec3ec10__4->Draw("AXISSAME");
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
