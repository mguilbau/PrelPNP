#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT15_30()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Tue Apr  1 11:19:50 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",60,83,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__2 = new TPad("pad1_Tauz", "",0,0,1,1);
   pad1_Tauz__2->Draw();
   pad1_Tauz__2->cd();
   pad1_Tauz__2->Range(-5,0.32397,5,4.07397);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_eba7450__5 = new TH1D("frame_tau_eba7450__5"," ",80,-10,10);
   frame_tau_eba7450__5->SetBinContent(1,459.3657);
   frame_tau_eba7450__5->SetMinimum(5);
   frame_tau_eba7450__5->SetMaximum(5000);
   frame_tau_eba7450__5->SetEntries(2);
   frame_tau_eba7450__5->SetDirectory(nullptr);
   frame_tau_eba7450__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_eba7450__5->SetLineColor(ci);
   frame_tau_eba7450__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_eba7450__5->GetXaxis()->SetRange(25,56);
   frame_tau_eba7450__5->GetXaxis()->SetLabelFont(42);
   frame_tau_eba7450__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_eba7450__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_eba7450__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_eba7450__5->GetXaxis()->SetTitleFont(42);
   frame_tau_eba7450__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_eba7450__5->GetYaxis()->SetLabelFont(42);
   frame_tau_eba7450__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_eba7450__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_eba7450__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_eba7450__5->GetYaxis()->SetTitleFont(42);
   frame_tau_eba7450__5->GetZaxis()->SetLabelFont(42);
   frame_tau_eba7450__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_eba7450__5->GetZaxis()->SetTitleFont(42);
   frame_tau_eba7450__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.3723351,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.830454,
   1.928013, 0.4248402, 1.319557, 3.658201, 8.551677, 10.15819, 134.7738, 238.8158, 149.4338, 60.4543, 35.80022, 19.23117, 4.17988, 4.776297, 7.376167, 3.97559,
   2.699732, 3.080683, 1.678535, 1.160274, 0, 0, 0, 0.7560564, 0, 0, 0, 0, 0.390031, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.3723351,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.449803,
   1.71678, 0.3447237, 1.773845, 2.556181, 3.938804, 4.046283, 17.03172, 23.76337, 16.97272, 10.69058, 8.06725, 6.015269, 3.418841, 3.024978, 3.476487, 2.81711,
   2.185002, 2.081214, 1.734915, 1.732317, 0, 0, 0, 0.7560564, 0, 0, 0, 0, 0.390031, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.3723351,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.449803,
   1.71678, 0.3447237, 1.773845, 2.556181, 3.938804, 4.046283, 17.03172, 23.76337, 16.97272, 10.69058, 8.06725, 6.015269, 3.418841, 3.024978, 3.476487, 2.81711,
   2.185002, 2.081214, 1.734915, 1.732317, 0, 0, 0, 0.7560564, 0, 0, 0, 0, 0.390031, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(0.2888371);
   Graph_h_dataw_bkg3003->SetMaximum(288.8371);
   Graph_h_dataw_bkg3003->SetDirectory(nullptr);
   Graph_h_dataw_bkg3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_dataw_bkg3003->SetLineColor(ci);
   Graph_h_dataw_bkg3003->GetXaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetXaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetYaxis()->SetTitleFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetLabelFont(42);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleOffset(1);
   Graph_h_dataw_bkg3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_dataw_bkg3003);
   
   grae->Draw("p");
   
   Double_t exp_DDS_fx7[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.875, -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.4375, -0.375,
   -0.3125, -0.25, -0.1875, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.125, 0.1875, 0.25, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[113] = { 0.0003015838, 0.0003890098, 0.0005017796, 0.0006472403, 0.0008348684, 0.001076888, 0.001389067, 0.001791742, 0.00231115, 0.002981128, 0.003845326, 0.004960045, 0.00639791, 0.008252597, 0.01064494, 0.01373079, 0.01771121,
   0.0228455, 0.02946817, 0.03801069, 0.04902958, 0.06324275, 0.08157616, 0.1052242, 0.1357276, 0.1750736, 0.2258257, 0.2912901, 0.3757321, 0.4846529, 0.6251487, 0.8063727, 1.040132,
   1.181312, 1.341655, 1.523762, 1.730587, 1.965484, 2.232266, 2.535258, 2.879376, 3.270202, 3.714077, 3.958121, 4.2182, 4.495368, 4.790749, 5.105538, 5.441012,
   5.798526, 6.179465, 6.584413, 7.007746, 7.217422, 7.403948, 7.51752, 7.503533, 7.369867, 7.175688, 6.751692, 6.33798, 5.947413, 5.580726, 5.236638, 4.913766,
   4.6108, 4.326515, 4.059757, 3.809447, 3.57457, 3.147368, 2.771222, 2.440029, 2.148418, 1.891658, 1.665583, 1.466527, 1.29126, 1.13694, 1.001063, 0.776084,
   0.601667, 0.4664485, 0.361619, 0.2803488, 0.2173433, 0.1684976, 0.1306295, 0.1012718, 0.07851202, 0.06086724, 0.04718795, 0.03658294, 0.0283613, 0.02198739, 0.01704594, 0.01321504,
   0.0102451, 0.007942616, 0.006157594, 0.004773737, 0.003700889, 0.002869152, 0.002224339, 0.001724442, 0.001336891, 0.001036438, 0.0008035094, 0.0006229288, 0.0004829319, 0.0003743979, 0.0002902558, 0.0002902558 };
   TGraph *graph = new TGraph(113,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",113,-12,12);
   Graph_exp_DDS7->SetMinimum(0.0002612302);
   Graph_exp_DDS7->SetMaximum(8.269243);
   Graph_exp_DDS7->SetDirectory(nullptr);
   Graph_exp_DDS7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_DDS7->SetLineColor(ci);
   Graph_exp_DDS7->GetXaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetXaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetXaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetYaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetYaxis()->SetTitleFont(42);
   Graph_exp_DDS7->GetZaxis()->SetLabelFont(42);
   Graph_exp_DDS7->GetZaxis()->SetTitleOffset(1);
   Graph_exp_DDS7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_DDS7);
   
   graph->Draw("l");
   
   Double_t model1_fx8[120] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125,
   1.25, 1.375, 1.5, 1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[120] = { 3.583736e-32, 2.473947e-31, 1.70783e-30, 1.178959e-29, 8.138663e-29, 5.618331e-28, 3.87848e-27, 2.677416e-26, 1.84829e-25, 1.275923e-24, 8.808026e-24, 6.08041e-23, 4.197465e-22, 2.89762e-21, 2.000302e-20, 1.380861e-19, 9.532441e-19,
   6.580492e-18, 4.542685e-17, 3.135934e-16, 2.164817e-15, 1.494429e-14, 1.031644e-13, 7.121704e-13, 4.916298e-12, 3.393848e-11, 2.342862e-10, 1.617339e-09, 1.116491e-08, 7.707427e-08, 5.320638e-07, 3.672975e-06, 2.53555e-05,
   0.0001750356, 0.001208317, 0.008341323, 0.05758233, 0.3975058, 1.044409, 2.744086, 4.447965, 7.209856, 9.17946, 11.68804, 14.8866, 18.9782, 24.25142, 31.13537, 40.26182,
   52.59978, 70.63801, 101.8253, 152.9311, 206.572, 233.2877, 232.694, 221.0325, 206.8503, 192.417, 178.4689, 165.3243, 153.0796, 141.7231, 131.2049, 121.4666,
   112.4509, 104.1044, 96.37745, 89.22398, 82.60147, 76.4705, 70.79459, 60.67537, 52.00256, 44.56943, 38.19877, 32.73872, 28.05912, 24.04841, 20.61098, 17.66489,
   12.97585, 9.53148, 7.001402, 5.142919, 3.777759, 2.038373, 1.099849, 0.5934474, 0.3202075, 0.172775, 0.09322452, 0.05030133, 0.02714118, 0.01464462, 0.007901824, 0.004263602,
   0.00230052, 0.001241296, 0.0006697683, 0.0003613882, 0.0001949949, 0.0001052138, 5.677039e-05, 3.06317e-05, 1.652801e-05, 8.918047e-06, 4.811927e-06, 2.596381e-06, 1.400934e-06, 7.559046e-07, 4.078649e-07, 2.200724e-07,
   1.187449e-07, 6.40714e-08, 3.457113e-08, 1.865361e-08, 1.006496e-08, 5.430771e-09, 5.430771e-09 };
   graph = new TGraph(120,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",120,-12,12);
   Graph_model18->SetMinimum(3.225363e-32);
   Graph_model18->SetMaximum(256.6165);
   Graph_model18->SetDirectory(nullptr);
   Graph_model18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model18->SetLineColor(ci);
   Graph_model18->GetXaxis()->SetLabelFont(42);
   Graph_model18->GetXaxis()->SetTitleOffset(1);
   Graph_model18->GetXaxis()->SetTitleFont(42);
   Graph_model18->GetYaxis()->SetLabelFont(42);
   Graph_model18->GetYaxis()->SetTitleFont(42);
   Graph_model18->GetZaxis()->SetLabelFont(42);
   Graph_model18->GetZaxis()->SetTitleOffset(1);
   Graph_model18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model18);
   
   graph->Draw("l");
   
   Double_t resolution_bkg_fx9[95] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.306098e-298, 7.189126e-246, 1.174386e-198, 1.877103e-156,
   2.935674e-119, 4.492314e-87, 6.72628e-60, 9.854221e-38, 1.412577e-20, 1.981275e-08, 0.2719067, 0.9427423, 2.732561, 6.733107, 15.94717, 46.39296, 133.4184, 239.1484, 223.4156, 110.615,
   36.74155, 13.24584, 5.663097, 2.232794, 0.7430217, 0.04797304, 6.167368e-10, 7.757915e-23, 9.548446e-41, 1.149908e-63, 1.354989e-91, 1.562252e-124, 1.762417e-162, 1.945401e-205, 2.101126e-253, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(95,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(0.2630632);
   Graph_resolution_bkg9->SetMaximum(263.0632);
   Graph_resolution_bkg9->SetDirectory(nullptr);
   Graph_resolution_bkg9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_resolution_bkg9->SetLineColor(ci);
   Graph_resolution_bkg9->GetXaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetXaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetXaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetYaxis()->SetTitleFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetLabelFont(42);
   Graph_resolution_bkg9->GetZaxis()->SetTitleOffset(1);
   Graph_resolution_bkg9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_resolution_bkg9);
   
   graph->Draw("l");
   
   Double_t model2_fx10[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.4375,
   0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy10[112] = { 0.0003015838, 0.0003890098, 0.0005017796, 0.0006472403, 0.0008348684, 0.001076888, 0.001389067, 0.001791742, 0.00231115, 0.002981128, 0.003845326, 0.004960045, 0.00639791, 0.008252597, 0.01064494, 0.01373079, 0.01771121,
   0.0228455, 0.02946817, 0.03801069, 0.04902958, 0.06324275, 0.08157616, 0.1052242, 0.1357276, 0.1750736, 0.2258257, 0.2912901, 0.3757321, 0.484653, 0.6251492, 0.8063764, 1.040157,
   1.34183, 1.731795, 2.240607, 2.936958, 4.111583, 5.262609, 7.534835, 9.553506, 12.65118, 17.49973, 20.93808, 25.42957, 31.57317, 40.45234, 53.78968, 75.55469,
   124.2484, 242.6476, 399.5971, 437.4912, 351.2726, 276.6113, 241.2428, 219.2651, 201.1921, 185.5499, 171.6706, 159.075, 147.4936, 136.7872, 117.6876, 101.2912,
   87.21227, 75.12111, 64.73512, 55.81201, 48.144, 41.55295, 35.88609, 26.81963, 20.10492, 15.12426, 11.42314, 8.666985, 5.06902, 3.039435, 1.875933, 1.195114,
   0.786656, 0.5343939, 0.3735733, 0.2676446, 0.1956388, 0.1452741, 0.1091737, 0.08277562, 0.06316776, 0.04842925, 0.03725271, 0.02872269, 0.02218238, 0.01715116, 0.01327181, 0.01027573,
   0.007959144, 0.006166512, 0.004778549, 0.003703485, 0.002870553, 0.002225095, 0.001724849, 0.001337111, 0.001036557, 0.0008035734, 0.0006229634, 0.0004829506, 0.000374408, 0.0002902612, 0.0002902612 };
   graph = new TGraph(112,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",112,-12,12);
   Graph_model210->SetMinimum(0.0002612351);
   Graph_model210->SetMaximum(481.2403);
   Graph_model210->SetDirectory(nullptr);
   Graph_model210->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model210->SetLineColor(ci);
   Graph_model210->GetXaxis()->SetLabelFont(42);
   Graph_model210->GetXaxis()->SetTitleOffset(1);
   Graph_model210->GetXaxis()->SetTitleFont(42);
   Graph_model210->GetYaxis()->SetLabelFont(42);
   Graph_model210->GetYaxis()->SetTitleFont(42);
   Graph_model210->GetZaxis()->SetLabelFont(42);
   Graph_model210->GetZaxis()->SetTitleOffset(1);
   Graph_model210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model210);
   
   graph->Draw("l");
   
   TH1D *frame_tau_eba7450__6 = new TH1D("frame_tau_eba7450__6"," ",80,-10,10);
   frame_tau_eba7450__6->SetBinContent(1,459.3657);
   frame_tau_eba7450__6->SetMinimum(5);
   frame_tau_eba7450__6->SetMaximum(5000);
   frame_tau_eba7450__6->SetEntries(2);
   frame_tau_eba7450__6->SetDirectory(nullptr);
   frame_tau_eba7450__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_eba7450__6->SetLineColor(ci);
   frame_tau_eba7450__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_eba7450__6->GetXaxis()->SetRange(25,56);
   frame_tau_eba7450__6->GetXaxis()->SetLabelFont(42);
   frame_tau_eba7450__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_eba7450__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_eba7450__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_eba7450__6->GetXaxis()->SetTitleFont(42);
   frame_tau_eba7450__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_eba7450__6->GetYaxis()->SetLabelFont(42);
   frame_tau_eba7450__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_eba7450__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_eba7450__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_eba7450__6->GetYaxis()->SetTitleFont(42);
   frame_tau_eba7450__6->GetZaxis()->SetLabelFont(42);
   frame_tau_eba7450__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_eba7450__6->GetZaxis()->SetTitleFont(42);
   frame_tau_eba7450__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"15 < #it{p}_{T}^{#mu#mu} < 30 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.68,0.69,0.86,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","exp_{DSS} + exp_{DF}","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_DDS","exp_{DDS}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resolution_bkg","delta","l");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Total fit","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      //tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 16 / 20 ");
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 16 / 20 ");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.4724649,0.94,0.5275351,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText(" ");
   pt->Draw();
   pad1_Tauz__2->Modified();
   cTauz_PP->cd();
   cTauz_PP->Modified();
   cTauz_PP->SetSelected(cTauz_PP);

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT15_30.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT15_30.png");
}