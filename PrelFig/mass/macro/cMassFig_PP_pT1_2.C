#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT1_2()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 21:09:18 2025) by ROOT version 6.32.06
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
   pad1_PP__0->Range(2.375,-1744.375,3.625,15749.38);
   pad1_PP__0->SetFillColor(0);
   pad1_PP__0->SetBorderMode(0);
   pad1_PP__0->SetBorderSize(2);
   pad1_PP__0->SetFrameBorderMode(0);
   pad1_PP__0->SetFrameBorderMode(0);
   
   TH1D *frame_mass_dde8b20__1 = new TH1D("frame_mass_dde8b20__1"," ",40,2.5,3.5);
   frame_mass_dde8b20__1->SetBinContent(1,13198.09);
   frame_mass_dde8b20__1->SetMinimum(5);
   frame_mass_dde8b20__1->SetMaximum(14000);
   frame_mass_dde8b20__1->SetEntries(2);
   frame_mass_dde8b20__1->SetDirectory(nullptr);
   frame_mass_dde8b20__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_dde8b20__1->SetLineColor(ci);
   frame_mass_dde8b20__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_dde8b20__1->GetXaxis()->SetLabelFont(42);
   frame_mass_dde8b20__1->GetXaxis()->SetTitleSize(0.04);
   frame_mass_dde8b20__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_dde8b20__1->GetXaxis()->SetTitleFont(42);
   frame_mass_dde8b20__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_dde8b20__1->GetYaxis()->SetLabelFont(42);
   frame_mass_dde8b20__1->GetYaxis()->SetLabelSize(0.03);
   frame_mass_dde8b20__1->GetYaxis()->SetTitleSize(0.04);
   frame_mass_dde8b20__1->GetYaxis()->SetTitleOffset(1.25);
   frame_mass_dde8b20__1->GetYaxis()->SetTitleFont(42);
   frame_mass_dde8b20__1->GetZaxis()->SetLabelFont(42);
   frame_mass_dde8b20__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_dde8b20__1->GetZaxis()->SetTitleFont(42);
   frame_mass_dde8b20__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 4097, 3989, 3995, 3775, 3905, 3661, 3760, 3562, 3573, 3511, 3343, 3370, 3341, 3370, 3371, 3500, 3563,
   3894, 4432, 5114, 6089, 7885, 10213, 12138, 11722, 9011, 5479, 3161, 2176, 1651, 1512, 1406, 1339,
   1270, 1268, 1210, 1081, 1088, 1056, 1046 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 63.50976, 62.66051, 62.70799, 60.94306, 61.992, 60.00826, 60.82088, 59.18459, 59.27667, 58.7558, 57.32084, 57.55385, 57.30355, 57.55385, 57.56247, 58.66291, 59.19296,
   61.90393, 66.07515, 71.01398, 77.53365, 88.29893, 100.5606, 109.6737, 107.7693, 94.4276, 73.52196, 55.72499, 46.15029, 40.13558, 38.38766, 37, 36.09576,
   35.14057, 35.1125, 34.28865, 32.38237, 32.48863, 32, 31.84579 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 64.50976, 63.66051, 63.70799, 61.94306, 62.992, 61.00826, 61.82088, 60.18459, 60.27667, 59.7558, 58.32084, 58.55385, 58.30355, 58.55385, 58.56247, 59.66291, 60.19296,
   62.90393, 67.07515, 72.01398, 78.53365, 89.29893, 101.5606, 110.6737, 108.7693, 95.4276, 74.52196, 56.72499, 47.15029, 41.13558, 39.38766, 38, 37.09576,
   36.14057, 36.1125, 35.28865, 33.38237, 33.48863, 33, 32.84579 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(912.7388);
   Graph_h_dataWithSWeights3001->SetMaximum(13372.13);
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
   
   Double_t m_signal_fx1[82] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875,
   3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.171875, 3.175, 3.178125, 3.18125, 3.184375, 3.1875, 3.19375, 3.2,
   3.20625, 3.2125, 3.21875, 3.225, 3.2375, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5,
   3.5 };
   Double_t m_signal_fy1[82] = { 35.65814, 42.01746, 49.72866, 59.12815, 70.649, 84.85267, 102.4725, 124.474, 152.139, 187.1846, 231.933, 289.5566, 364.4369, 462.696, 592.996, 767.7596, 1005.064,
   1155.069, 1331.637, 1540.249, 1787.681, 2082.36, 2434.817, 2858.28, 3101.702, 3369.471, 3664.395, 3989.648, 4348.828, 4746.015, 5185.848, 5673.612, 6215.333,
   6817.903, 9663.613, 9942.339, 10182.21, 10380.06, 10533.24, 10639.67, 10697.91, 10707.16, 10667.28, 10578.83, 10443.02, 10261.68, 10037.27, 9772.752, 9471.583,
   9137.61, 8774.998, 7981.581, 7127.681, 5379.219, 4546.015, 3771.898, 3072.603, 2754.141, 2457.369, 2182.523, 1932.088, 1710.54, 1514.778, 1188.793, 933.8891,
   734.3662, 578.0359, 455.4265, 359.1697, 224.0283, 140.2614, 55.59067, 22.35074, 9.112094, 3.765298, 1.576384, 0.6684061, 0.2869301, 0.1246571, 0.05479208, 0.02435785,
   0.02435785 };
   TGraph *graph = new TGraph(82,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(0.02192206);
   Graph_m_signal1->SetMaximum(11777.87);
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
   Double_t m_bkg_fy2[42] = { 4029.019, 3987.293, 3935.456, 3872.954, 3799.736, 3716.289, 3623.61, 3523.124, 3416.552, 3305.758, 3192.592, 3078.752, 2965.684, 2854.53, 2746.114, 2640.97, 2539.392,
   2441.493, 2347.269, 2256.643, 2169.502, 2085.724, 2005.179, 1927.745, 1853.301, 1781.732, 1712.927, 1646.778, 1583.185, 1522.047, 1463.27, 1406.762, 1352.437,
   1300.21, 1250, 1201.728, 1155.321, 1110.706, 1067.814, 1026.578, 986.9345, 986.9345 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(682.7261);
   Graph_m_bkg2->SetMaximum(4333.228);
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
   
   Double_t massModel_fx3[81] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.03125, 3.0375, 3.04375,
   3.05, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875,
   3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175, 3.178125, 3.18125, 3.184375, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.2375, 3.25, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[81] = { 4064.677, 4029.31, 3985.185, 3932.082, 3870.385, 3801.141, 3726.083, 3647.598, 3568.691, 3492.942, 3424.525, 3368.308, 3330.121, 3317.226, 3339.11, 3408.73, 3544.456,
   3645.05, 3773.131, 3934.174, 4134.95, 4383.873, 4691.459, 5070.924, 5292.669, 5538.974, 5812.643, 6116.849, 6455.188, 6831.738, 7251.137, 7718.666, 8240.352,
   8823.082, 11591.36, 11860.62, 12091.07, 12279.54, 12423.39, 12520.55, 12569.55, 12569.61, 12520.58, 12423.03, 12278.16, 12087.81, 11854.43, 11580.99, 11270.94,
   10928.13, 10556.73, 9745.857, 8874.672, 7092.145, 6242.159, 5451.425, 4735.675, 4104.147, 3821.215, 3562.733, 3333.177, 3129.446, 2787.642, 2517.074, 2302.04,
   2130.351, 1992.533, 1881.216, 1716.397, 1603.531, 1462.353, 1374.788, 1309.322, 1253.765, 1203.305, 1155.99, 1110.993, 1067.939, 1026.633, 986.9589, 986.9589 };
   graph = new TGraph(81,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(888.263);
   Graph_massModel3->SetMaximum(13727.87);
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
   
   TH1D *frame_mass_dde8b20__2 = new TH1D("frame_mass_dde8b20__2"," ",40,2.5,3.5);
   frame_mass_dde8b20__2->SetBinContent(1,13198.09);
   frame_mass_dde8b20__2->SetMinimum(5);
   frame_mass_dde8b20__2->SetMaximum(14000);
   frame_mass_dde8b20__2->SetEntries(2);
   frame_mass_dde8b20__2->SetDirectory(nullptr);
   frame_mass_dde8b20__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_dde8b20__2->SetLineColor(ci);
   frame_mass_dde8b20__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_dde8b20__2->GetXaxis()->SetLabelFont(42);
   frame_mass_dde8b20__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_dde8b20__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_dde8b20__2->GetXaxis()->SetTitleFont(42);
   frame_mass_dde8b20__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_dde8b20__2->GetYaxis()->SetLabelFont(42);
   frame_mass_dde8b20__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_dde8b20__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_dde8b20__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_dde8b20__2->GetYaxis()->SetTitleFont(42);
   frame_mass_dde8b20__2->GetZaxis()->SetLabelFont(42);
   frame_mass_dde8b20__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_dde8b20__2->GetZaxis()->SetTitleFont(42);
   frame_mass_dde8b20__2->Draw("AXISSAME");
   /*TLatex *   tex = new TLatex(0.13,0.85,"ALICE performance, pp, #sqrt{s} = 13.6 TeV");
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
      tex = new TLatex(0.15,0.74,"1 GeV/c < #it{p}_{T}^{#mu#mu} < 2 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 63551#pm321");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 93373#pm364");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
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
      tex = new TLatex(0.15,0.69,"1 < #it{p}_{T}^{#mu#mu} < 2 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 36 / 40 ");
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
      /*tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 36 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT1_2.pdf");
   cMassFig_PP->SaveAs("../png/cMassFig_PP_pT1_2.png");
}
