#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cMassFig_PP_pT4_5()
{
//=========Macro generated from canvas: cMassFig_PP/cMassFig
//=========  (Mon Mar 31 19:56:13 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_mass_c9bedb0__1 = new TH1D("frame_mass_c9bedb0__1"," ",40,2.5,3.5);
   frame_mass_c9bedb0__1->SetBinContent(1,4164.275);
   frame_mass_c9bedb0__1->SetMinimum(5);
   frame_mass_c9bedb0__1->SetMaximum(7000);
   frame_mass_c9bedb0__1->SetEntries(1);
   frame_mass_c9bedb0__1->SetDirectory(nullptr);
   frame_mass_c9bedb0__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_mass_c9bedb0__1->SetLineColor(ci);
   frame_mass_c9bedb0__1->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_c9bedb0__1->GetXaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__1->GetXaxis()->SetTitleSize(0.04);
   frame_mass_c9bedb0__1->GetXaxis()->SetTitleOffset(1);
   frame_mass_c9bedb0__1->GetXaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__1->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_c9bedb0__1->GetYaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__1->GetYaxis()->SetLabelSize(0.035);
   frame_mass_c9bedb0__1->GetYaxis()->SetTitleSize(0.04);
   frame_mass_c9bedb0__1->GetYaxis()->SetTitleOffset(1.25);
   frame_mass_c9bedb0__1->GetYaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__1->GetZaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__1->GetZaxis()->SetTitleOffset(1);
   frame_mass_c9bedb0__1->GetZaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__1->Draw("FUNC");
   
   Double_t h_dataWithSWeights_fx3001[40] = { 2.5125, 2.5375, 2.5625, 2.5875, 2.6125, 2.6375, 2.6625, 2.6875, 2.7125, 2.7375, 2.7625, 2.7875, 2.8125, 2.8375, 2.8625, 2.8875, 2.9125,
   2.9375, 2.9625, 2.9875, 3.0125, 3.0375, 3.0625, 3.0875, 3.1125, 3.1375, 3.1625, 3.1875, 3.2125, 3.2375, 3.2625, 3.2875, 3.3125,
   3.3375, 3.3625, 3.3875, 3.4125, 3.4375, 3.4625, 3.4875 };
   Double_t h_dataWithSWeights_fy3001[40] = { 492, 510, 507, 470, 455, 496, 451, 447, 430, 442, 469, 484, 518, 491, 604, 630, 690,
   859, 1052, 1378, 1893, 2623, 3414, 3903, 3733, 2944, 2040, 1276, 709, 433, 321, 280, 287,
   271, 240, 233, 252, 223, 192, 281 };
   Double_t h_dataWithSWeights_felx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fely3001[40] = { 21.68671, 22.08871, 22.02221, 21.18525, 20.83659, 21.77667, 20.74265, 20.64829, 20.24247, 20.52974, 21.16218, 21.50568, 22.2651, 21.66416, 24.0815, 24.60478, 25.77261,
   28.81297, 31.9384, 36.62479, 43.01149, 50.71767, 57.93158, 61.976, 60.60033, 53.76094, 44.66913, 35.22464, 26.13175, 20.31466, 17.42345, 16.24067, 16.44845,
   15.96967, 15, 14.77252, 15.38238, 14.44155, 13.36542, 16.27051 };
   Double_t h_dataWithSWeights_fehx3001[40] = { 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125,
   0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125, 0.0125 };
   Double_t h_dataWithSWeights_fehy3001[40] = { 22.68671, 23.08871, 23.02221, 22.18525, 21.83659, 22.77667, 21.74265, 21.64829, 21.24247, 21.52974, 22.16218, 22.50568, 23.2651, 22.66416, 25.0815, 25.60478, 26.77261,
   29.81297, 32.9384, 37.62479, 44.01149, 51.71767, 58.93158, 62.976, 61.60033, 54.76094, 45.66913, 36.22464, 27.13175, 21.31466, 18.42345, 17.24067, 17.44845,
   16.96967, 16, 15.77252, 16.38238, 15.44155, 14.36542, 17.27051 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40,h_dataWithSWeights_fx3001,h_dataWithSWeights_fy3001,h_dataWithSWeights_felx3001,h_dataWithSWeights_fehx3001,h_dataWithSWeights_fely3001,h_dataWithSWeights_fehy3001);
   grae->SetName("h_dataWithSWeights");
   grae->SetTitle("Histogram of dataWithSWeights_plot__mass");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataWithSWeights3001 = new TH1F("Graph_h_dataWithSWeights3001","Histogram of dataWithSWeights_plot__mass",100,2.4,3.6);
   Graph_h_dataWithSWeights3001->SetMinimum(160.7711);
   Graph_h_dataWithSWeights3001->SetMaximum(4344.71);
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
   
   Double_t m_signal_fx1[83] = { 2.5, 2.525, 2.55, 2.575, 2.6, 2.625, 2.65, 2.675, 2.7, 2.725, 2.75, 2.775, 2.8, 2.825, 2.85, 2.875, 2.9,
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.96875, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.05,
   3.05625, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625,
   3.109375, 3.1125, 3.115625, 3.11875, 3.125, 3.13125, 3.1375, 3.15, 3.1625, 3.16875, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475,
   3.5, 3.5 };
   Double_t m_signal_fy1[83] = { 27.03296, 30.34233, 34.20126, 38.72694, 44.06752, 50.41203, 58.00404, 67.16083, 78.30048, 91.98103, 108.9578, 130.2692, 157.3669, 192.3204, 238.1427, 299.3281, 382.7674,
   436.0155, 499.365, 575.29, 667.021, 778.8257, 843.9696, 916.4163, 997.2032, 1087.548, 1188.887, 1302.918, 1431.664, 1577.541, 1743.452, 1932.906, 2842.643,
   3050.515, 3236.935, 3320.326, 3396.29, 3464.227, 3523.591, 3573.897, 3614.732, 3645.757, 3666.711, 3677.42, 3677.793, 3667.826, 3647.604, 3617.297, 3577.158,
   3527.521, 3468.794, 3401.457, 3326.051, 3153.473, 2956.374, 2740.561, 2276.825, 1808.254, 1584.49, 1372.869, 1176.194, 996.4113, 834.6575, 691.334, 566.2099,
   458.5397, 367.1862, 292.1757, 236.3667, 194.4588, 137.131, 100.9971, 76.94302, 48.19925, 32.53862, 23.1885, 17.21702, 13.20093, 10.38697, 8.348627, 6.830854,
   5.674171, 5.674171 };
   TGraph *graph = new TGraph(83,m_signal_fx1,m_signal_fy1);
   graph->SetName("m_signal");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_signal1 = new TH1F("Graph_m_signal1","Projection of massModel",100,2.4,3.6);
   Graph_m_signal1->SetMinimum(5.106754);
   Graph_m_signal1->SetMaximum(4045.005);
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
   Double_t m_bkg_fy2[42] = { 501.555, 481.3398, 462.3149, 444.4155, 427.5807, 411.7531, 396.8787, 382.9068, 369.7897, 357.4828, 345.9442, 335.1346, 325.0174, 315.5583, 306.7252, 298.4883, 290.8197,
   283.6936, 277.0858, 270.9741, 265.3377, 260.1574, 255.4155, 251.0957, 247.1826, 243.6624, 240.5219, 237.7493, 235.3332, 233.2631, 231.5291, 230.1215, 229.0311,
   228.2487, 227.7649, 227.5701, 227.654, 228.0054, 228.6123, 229.4608, 230.5356, 230.5356 };
   graph = new TGraph(42,m_bkg_fx2,m_bkg_fy2);
   graph->SetName("m_bkg");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_m_bkg2 = new TH1F("Graph_m_bkg2","Projection of massModel",100,2.4,3.6);
   Graph_m_bkg2->SetMinimum(200.1716);
   Graph_m_bkg2->SetMaximum(528.9535);
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
   2.9125, 2.925, 2.9375, 2.95, 2.9625, 2.96875, 2.975, 2.98125, 2.9875, 2.99375, 3, 3.00625, 3.0125, 3.01875, 3.025, 3.05,
   3.05625, 3.0625, 3.065625, 3.06875, 3.071875, 3.075, 3.078125, 3.08125, 3.084375, 3.0875, 3.090625, 3.09375, 3.096875, 3.1, 3.103125, 3.10625,
   3.109375, 3.1125, 3.115625, 3.11875, 3.125, 3.13125, 3.1375, 3.15, 3.1625, 3.16875, 3.175, 3.18125, 3.1875, 3.19375, 3.2, 3.20625,
   3.2125, 3.21875, 3.225, 3.23125, 3.2375, 3.25, 3.2625, 3.275, 3.3, 3.325, 3.35, 3.375, 3.4, 3.425, 3.45, 3.475,
   3.5, 3.5 };
   Double_t massModel_fy3[83] = { 528.588, 511.6822, 496.5162, 483.1425, 471.6483, 462.1652, 454.8827, 450.0676, 448.0902, 449.4638, 454.902, 465.4038, 482.3844, 507.8788, 544.8679, 597.8164, 673.5871,
   723.2059, 783.0586, 855.6163, 944.1068, 1052.795, 1116.426, 1187.39, 1266.724, 1355.646, 1455.59, 1568.256, 1695.665, 1840.233, 2004.863, 2193.063, 3098.059,
   3304.812, 3490.139, 3572.993, 3648.427, 3715.841, 3774.687, 3824.482, 3864.812, 3895.338, 3915.801, 3926.023, 3925.916, 3915.476, 3894.787, 3864.019, 3823.425,
   3773.338, 3714.168, 3646.394, 3570.557, 3397.135, 3199.216, 2982.606, 2517.347, 2047.345, 1822.898, 1610.619, 1413.306, 1232.909, 1070.562, 926.6672, 800.9935,
   692.7952, 600.935, 525.4388, 469.1652, 426.8134, 368.6601, 331.7821, 307.0645, 277.2304, 260.7873, 250.9534, 244.7871, 240.8549, 238.3924, 236.9609, 236.2917,
   236.2098, 236.2098 };
   graph = new TGraph(83,massModel_fx3,massModel_fy3);
   graph->SetName("massModel");
   graph->SetTitle("Projection of massModel");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_massModel3 = new TH1F("Graph_massModel3","Projection of massModel",100,2.4,3.6);
   Graph_massModel3->SetMinimum(212.5888);
   Graph_massModel3->SetMaximum(4295.005);
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
   
   TH1D *frame_mass_c9bedb0__2 = new TH1D("frame_mass_c9bedb0__2"," ",40,2.5,3.5);
   frame_mass_c9bedb0__2->SetBinContent(1,4164.275);
   frame_mass_c9bedb0__2->SetMinimum(5);
   frame_mass_c9bedb0__2->SetMaximum(7000);
   frame_mass_c9bedb0__2->SetEntries(1);
   frame_mass_c9bedb0__2->SetDirectory(nullptr);
   frame_mass_c9bedb0__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_mass_c9bedb0__2->SetLineColor(ci);
   frame_mass_c9bedb0__2->GetXaxis()->SetTitle("M_{#mu#mu} (GeV/c^{2})");
   frame_mass_c9bedb0__2->GetXaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__2->GetXaxis()->SetTitleSize(0.045);
   frame_mass_c9bedb0__2->GetXaxis()->SetTitleOffset(1);
   frame_mass_c9bedb0__2->GetXaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__2->GetYaxis()->SetTitle("Events / ( 0.025 GeV/c^{2} )");
   frame_mass_c9bedb0__2->GetYaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__2->GetYaxis()->SetLabelSize(0.04);
   frame_mass_c9bedb0__2->GetYaxis()->SetTitleSize(0.045);
   frame_mass_c9bedb0__2->GetYaxis()->SetTitleOffset(1.12);
   frame_mass_c9bedb0__2->GetYaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__2->GetZaxis()->SetLabelFont(42);
   frame_mass_c9bedb0__2->GetZaxis()->SetTitleOffset(1);
   frame_mass_c9bedb0__2->GetZaxis()->SetTitleFont(42);
   frame_mass_c9bedb0__2->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"4 GeV/c < #it{p}_{T}^{#mu#mu} < 5 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.54,"N_{J/#psi} = 25516#pm186");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.49,"N_{bkg} = 11906#pm145");
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
      tex = new TLatex(0.15,0.69,"4 < #it{p}_{T}^{#mu#mu} < 5 GeV/c");
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

   cMassFig_PP->SaveAs("../pdf/cMassFig_PP_pT4_5.pdf");
   cMassFig_PP->SaveAs("../png/cMassFig_PP_pT4_5.png");
}
