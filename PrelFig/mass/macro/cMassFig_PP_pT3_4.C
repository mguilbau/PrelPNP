#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT3_4()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 20:42:17 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_mass_d617680__1 = new TH1D("frame_mass_d617680__1"," ",40,2.5,3.5);
   frame_mass_d617680__1->SetBinContent(1,6694.18);
   frame_mass_d617680__1->SetMinimum(5);
   frame_mass_d617680__1->SetMaximum(7000);
   frame_mass_d617680__1->SetEntries(2);
   frame_mass_d617680__1->SetDirectory(nullptr);
   frame_mass_d617680__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_d617680__1->SetLineColor(ci);
   frame_mass_d617680__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_d617680__1->GetXaxis()->SetLabelFont(42);
   frame_mass_d617680__1->GetXaxis()->SetTitleSize(0.04);
   frame_mass_d617680__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_d617680__1->GetXaxis()->SetTitleFont(42);
   frame_mass_d617680__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_d617680__1->GetYaxis()->SetLabelFont(42);
   frame_mass_d617680__1->GetYaxis()->SetLabelSize(0.035);
   frame_mass_d617680__1->GetYaxis()->SetTitleSize(0.04);
   frame_mass_d617680__1->GetYaxis()->SetTitleOffset(1.25);
   frame_mass_d617680__1->GetYaxis()->SetTitleFont(42);
   frame_mass_d617680__1->GetZaxis()->SetLabelFont(42);
   frame_mass_d617680__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_d617680__1->GetZaxis()->SetTitleFont(42);
   frame_mass_d617680__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 960, 888, 915, 848, 927, 872, 819, 913, 840, 886, 898, 848, 918, 969, 993, 1097, 1221,
   1394, 1717, 2189, 2925, 3986, 5446, 6287, 6096, 4680, 3080, 1883, 1060, 722, 653, 559, 561,
   526, 514, 532, 510, 475, 457, 463 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 30.4879, 29.30352, 29.7531, 28.62473, 29.95078, 29.03388, 28.12254, 29.72003, 28.48707, 29.26995, 29.47082, 28.62473, 29.80264, 30.63278, 31.01587, 32.62476, 34.44639,
   36.83966, 40.93972, 46.28942, 53.58558, 62.63676, 73.29871, 78.79218, 77.57849, 67.91235, 55, 42.89643, 32.06148, 26.37471, 25.05876, 23.14847, 23.19072,
   22.44014, 22.17708, 22.57054, 22.08871, 21.30023, 20.8834, 21.02324 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 31.4879, 30.30352, 30.7531, 29.62473, 30.95078, 30.03388, 29.12254, 30.72003, 29.48707, 30.26995, 30.47082, 29.62473, 30.80264, 31.63278, 32.01587, 33.62476, 35.44639,
   37.83966, 41.93972, 47.28942, 54.58558, 63.63676, 74.29871, 79.79218, 78.57849, 68.91235, 56, 43.89643, 33.06148, 27.37471, 26.05876, 24.14847, 24.19072,
   23.44014, 23.17708, 23.57054, 23.08871, 22.30023, 21.8834, 22.02324 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(392.5049);
   Graph_h_dataWithSWeights3001->SetMaximum(6959.86);
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
   
   Double_t m_signal_fx1[88] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.028125, 3.03125,
   3.034375, 3.0375, 3.05, 3.05625, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875,
   3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175,
   3.18125, 3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.3, 3.325, 3.35,
   3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t m_signal_fy1[88] = { 73.03678, 79.94775, 87.82713, 96.85849, 107.2701, 119.3484, 133.4565, 150.0599, 169.7625, 193.3579, 221.9054, 256.8415, 300.1509, 354.6336, 424.3345, 515.2586, 636.6082,
   712.9594, 803.022, 910.168, 1038.848, 1195.028, 1386.841, 1499.479, 1625.587, 1767.33, 1927.316, 2108.71, 2315.382, 2552.094, 2824.763, 2976.828, 3140.804,
   3317.929, 3509.604, 4311.123, 4686.113, 5027.892, 5182.677, 5324.883, 5453.228, 5566.535, 5663.749, 5743.951, 5806.376, 5850.423, 5875.667, 5881.861, 5868.945,
   5837.045, 5786.471, 5717.711, 5631.425, 5528.435, 5409.707, 5276.343, 5129.559, 4970.668, 4622.184, 4242.586, 3437.558, 3034.491, 2644.068, 2274.104, 1930.629,
   1617.85, 1338.222, 1092.62, 880.5646, 700.4932, 550.0441, 434.1663, 352.1042, 291.8011, 246.1167, 182.4906, 141.158, 112.7147, 77.03432, 56.24039, 43.01177,
   34.04888, 27.68076, 22.98513, 19.41792, 16.64078, 14.43402, 14.43402 };
   TGraph *graph = new TGraph(88,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(12.99062);
   Graph_m_signal1->SetMaximum(6468.604);
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
   Double_t m_bkg_fy2[42] = { 922.1714, 880.6101, 842.2241, 806.7928, 774.1133, 743.9988, 716.2775, 690.7916, 667.3956, 645.9562, 626.3502, 608.4646, 592.1946, 577.4437, 564.1222, 552.1461, 541.4369,
   531.9201, 523.5244, 516.1804, 509.8202, 504.3756, 499.7772, 495.9533, 492.8284, 490.3224, 488.3491, 486.8153, 485.6203, 484.6551, 483.8028, 482.939, 481.9334,
   480.6522, 478.9607, 476.7274, 473.829, 470.1548, 465.6122, 460.1315, 453.6695, 453.6695 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(406.8193);
   Graph_m_bkg2->SetMaximum(969.0216);
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
   
   Double_t massModel_fx3[88] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.028125, 3.03125,
   3.034375, 3.0375, 3.05, 3.05625, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875,
   3.1, 3.103125, 3.10625, 3.109375, 3.1125, 3.115625, 3.11875, 3.121875, 3.125, 3.13125, 3.1375, 3.15, 3.15625, 3.1625, 3.16875, 3.175,
   3.18125, 3.1875, 3.19375, 3.2, 3.20625, 3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.3, 3.325, 3.35,
   3.375, 3.4, 3.425, 3.45, 3.475, 3.5, 3.5 };
   Double_t massModel_fy3[88] = { 995.2082, 960.5579, 930.0512, 903.6513, 881.3834, 863.3472, 849.734, 840.8515, 837.1581, 839.3141, 848.2556, 865.306, 892.3455, 932.0774, 988.4567, 1067.405, 1178.045,
   1249.493, 1334.942, 1437.754, 1562.372, 1714.753, 1903.021, 2013.98, 2138.469, 2278.651, 2437.136, 2617.086, 2822.37, 3057.749, 3329.138, 3480.584, 3643.953,
   3820.485, 4011.579, 4810.9, 5184.865, 5525.666, 5679.978, 5821.723, 5949.619, 6062.488, 6159.275, 6239.06, 6301.08, 6344.732, 6369.59, 6375.409, 6362.129,
   6329.874, 6278.954, 6209.858, 6123.246, 6019.938, 5900.902, 5767.239, 5620.164, 5460.99, 5111.967, 4731.861, 3925.907, 3522.42, 3131.602, 2761.267, 2417.444,
   2104.339, 1824.405, 1578.514, 1366.185, 1185.855, 1035.16, 919.0474, 836.7594, 776.2373, 730.3392, 666.2933, 624.5383, 595.6536, 558.9678, 536.8926, 521.9724,
   510.7763, 501.5097, 493.1399, 485.0301, 476.7723, 468.1035, 468.1035 };
   graph = new TGraph(88,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(421.2931);
   Graph_massModel3->SetMaximum(6966.14);
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
   
   TH1D *frame_mass_d617680__2 = new TH1D("frame_mass_d617680__2"," ",40,2.5,3.5);
   frame_mass_d617680__2->SetBinContent(1,6694.18);
   frame_mass_d617680__2->SetMinimum(5);
   frame_mass_d617680__2->SetMaximum(7000);
   frame_mass_d617680__2->SetEntries(2);
   frame_mass_d617680__2->SetDirectory(nullptr);
   frame_mass_d617680__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_d617680__2->SetLineColor(ci);
   frame_mass_d617680__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_d617680__2->GetXaxis()->SetLabelFont(42);
   frame_mass_d617680__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_d617680__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_d617680__2->GetXaxis()->SetTitleFont(42);
   frame_mass_d617680__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_d617680__2->GetYaxis()->SetLabelFont(42);
   frame_mass_d617680__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_d617680__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_d617680__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_d617680__2->GetYaxis()->SetTitleFont(42);
   frame_mass_d617680__2->GetZaxis()->SetLabelFont(42);
   frame_mass_d617680__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_d617680__2->GetZaxis()->SetTitleFont(42);
   frame_mass_d617680__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"3 GeV/c < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 39747#pm241");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 22780#pm203");
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
      tex = new TLatex(0.15,0.69,"3 < #it{p}_{T}^{#mu#mu} < 4 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 41 / 40 ");
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
      /*tex = new TLatex(0.2,0.44,"#chi^{2}/ndof = 41 / 40 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();*/
   pad1_PP__0->Modified();
   cMassFig_PP->cd();
   cMassFig_PP->Modified();
   cMassFig_PP->SetSelected(cMassFig_PP);

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT3_4.pdf");
   cMassFig_PP->SaveAs("../png/cMassFig_PP_pT3_4.png");
}
