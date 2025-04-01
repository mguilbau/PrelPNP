#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT2_3()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 20:50:47 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",200,1103,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__2 = new TPad("pad1_Tauz", "",0,0,1,1);
   pad1_Tauz__2->Draw();
   pad1_Tauz__2->cd();
   pad1_Tauz__2->Range(-7.5,0.05231745,7.5,5.549743);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_11dbe250__5 = new TH1D("frame_tau_11dbe250__5"," ",80,-10,10);
   frame_tau_11dbe250__5->SetBinContent(1,31202.01);
   frame_tau_11dbe250__5->SetMinimum(4);
   frame_tau_11dbe250__5->SetMaximum(100000);
   frame_tau_11dbe250__5->SetEntries(2);
   frame_tau_11dbe250__5->SetDirectory(nullptr);
   frame_tau_11dbe250__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_11dbe250__5->SetLineColor(ci);
   frame_tau_11dbe250__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_11dbe250__5->GetXaxis()->SetRange(17,64);
   frame_tau_11dbe250__5->GetXaxis()->SetLabelFont(42);
   frame_tau_11dbe250__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_11dbe250__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_11dbe250__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_11dbe250__5->GetXaxis()->SetTitleFont(42);
   frame_tau_11dbe250__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_11dbe250__5->GetYaxis()->SetLabelFont(42);
   frame_tau_11dbe250__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_11dbe250__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_11dbe250__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_11dbe250__5->GetYaxis()->SetTitleFont(42);
   frame_tau_11dbe250__5->GetZaxis()->SetLabelFont(42);
   frame_tau_11dbe250__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_11dbe250__5->GetZaxis()->SetTitleFont(42);
   frame_tau_11dbe250__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 4.233103, 8.974043, 11.68865, 15.84682, 2.409962, 18.03196, 20.20308, 15.83243, 17.35926, 20.71062, 8.127375, 19.84636, 13.72167, 20.60329, 13.22132, 43.85131, 38.30564,
   29.76268, 36.88967, 36.55775, 53.93064, 53.56608, 39.5034, 67.85831, 62.67303, 57.68652, 91.33542, 93.52067, 108.2001, 128.4256, 160.9104, 179.233, 210.5377,
   242.0667, 309.3853, 451.1552, 640.2152, 970.1428, 2573.056, 13884.54, 20482.19, 6744.409, 3041.681, 1613.38, 1047.961, 673.1701, 458.8337, 327.2765, 294.6088,
   217.4341, 186.0161, 178.4673, 128.0335, 112.7181, 93.29135, 76.06739, 76.58965, 61.65128, 55.78972, 60.93098, 49.38198, 59.42249, 50.06809, 41.18827, 30.60148,
   17.84713, 29.24664, 25.92442, 30.39884, 12.81095, 8.371481, 12.78629, 19.57376, 16.17266, 18.79799, 6.423342, 14.99357, 15.19894, 8.267375, 13.66953 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 2.37864, 3.197749, 4.075476, 4.72678, 2.263258, 5.011792, 5.404113, 4.808168, 5.050887, 5.559645, 3.673647, 5.257337, 4.445033, 5.383766, 4.337828, 7.569334, 7.417433,
   6.389415, 7.401452, 7.314346, 8.698161, 8.402283, 7.593125, 9.60582, 9.423771, 8.794685, 11.25959, 11.2222, 12.49593, 13.33871, 14.88199, 15.63309, 17.10424,
   18.19406, 20.60017, 25.08845, 29.95741, 37.12267, 61.16744, 149.4332, 178.4616, 98.39738, 66.398, 48.18814, 38.82962, 31.18179, 25.72687, 21.39769, 20.34481,
   17.42283, 16.00746, 15.72669, 13.46302, 12.64602, 11.35112, 10.23606, 10.41315, 9.321962, 8.615266, 9.234911, 8.283458, 9.074771, 8.278055, 7.779274, 6.629477,
   5.188306, 6.335712, 6.099754, 6.547305, 4.531874, 3.787166, 4.206519, 5.375508, 4.731175, 4.859638, 2.945891, 4.647716, 4.546798, 3.508955, 4.463114 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 2.37864, 3.197749, 4.075476, 4.72678, 2.263258, 5.011792, 5.404113, 4.808168, 5.050887, 5.559645, 3.673647, 5.257337, 4.445033, 5.383766, 4.337828, 7.569334, 7.417433,
   6.389415, 7.401452, 7.314346, 8.698161, 8.402283, 7.593125, 9.60582, 9.423771, 8.794685, 11.25959, 11.2222, 12.49593, 13.33871, 14.88199, 15.63309, 17.10424,
   18.19406, 20.60017, 25.08845, 29.95741, 37.12267, 61.16744, 149.4332, 178.4616, 98.39738, 66.398, 48.18814, 38.82962, 31.18179, 25.72687, 21.39769, 20.34481,
   17.42283, 16.00746, 15.72669, 13.46302, 12.64602, 11.35112, 10.23606, 10.41315, 9.321962, 8.615266, 9.234911, 8.283458, 9.074771, 8.278055, 7.779274, 6.629477,
   5.188306, 6.335712, 6.099754, 6.547305, 4.531874, 3.787166, 4.206519, 5.375508, 4.731175, 4.859638, 2.945891, 4.647716, 4.546798, 3.508955, 4.463114 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(0.1320335);
   Graph_h_dataw_bkg3003->SetMaximum(22726.7);
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
   
   Double_t exp_DDS_fx7[98] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.1875, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10 };
   Double_t exp_DDS_fy7[98] = { 4.876239, 5.489274, 6.179378, 6.956241, 7.830771, 8.815245, 9.923486, 11.17105, 12.57546, 14.15644, 15.93616, 17.93964, 20.19499, 22.73387, 25.59195, 28.80933, 32.4312,
   36.50841, 41.0982, 46.26502, 52.08139, 58.629, 65.99976, 74.29717, 83.63771, 94.15253, 105.9893, 119.3141, 134.3141, 151.1999, 170.2086, 191.607, 215.6955,
   242.8125, 273.3386, 307.7023, 326.4719, 346.3863, 367.5155, 389.9335, 413.719, 438.9546, 465.7098, 493.8541, 522.0005, 533.9399, 538.2482, 540.8025, 541.2511,
   539.5272, 535.8791, 530.7621, 518.0034, 503.9284, 475.4826, 448.1974, 422.4323, 398.1459, 375.2557, 353.6815, 333.3477, 314.1828, 279.0953, 247.9264, 220.2383,
   195.6424, 173.7933, 154.3843, 137.1429, 121.827, 108.2215, 96.13547, 85.3992, 75.86193, 67.38978, 59.86378, 53.17828, 47.2394, 41.96377, 37.27731, 33.11424,
   29.41608, 26.13094, 23.21267, 20.62031, 18.31746, 16.27179, 14.45458, 12.84032, 11.40633, 10.13248, 9.000902, 7.995694, 7.102746, 6.309521, 5.604883, 4.978937,
   4.978937 };
   TGraph *graph = new TGraph(98,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",100,-12,12);
   Graph_exp_DDS7->SetMinimum(4.388615);
   Graph_exp_DDS7->SetMaximum(594.8886);
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
   
   Double_t model1_fx8[127] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.8125, -0.75, -0.6875, -0.625, -0.5625, -0.53125, -0.5, -0.46875, -0.4375, -0.40625, -0.375,
   -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125,
   0.15625, 0.1875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.65625,
   0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[127] = { 2.433968e-18, 8.500698e-18, 2.968891e-17, 1.036893e-16, 3.621376e-16, 1.264775e-15, 4.41726e-15, 1.54274e-14, 5.388058e-14, 1.881793e-13, 6.572213e-13, 2.295363e-12, 8.016614e-12, 2.799823e-11, 9.778457e-11, 3.415152e-10, 1.192751e-09,
   4.165713e-09, 1.454886e-08, 5.081228e-08, 1.774632e-07, 6.197949e-07, 2.16465e-06, 7.560097e-06, 2.640384e-05, 9.221609e-05, 0.0003220671, 0.001124828, 0.003928491, 0.01372036, 0.04791871, 0.1673573, 0.5844999,
   2.041381, 7.129577, 24.90023, 86.96472, 162.5223, 222.1764, 303.7266, 415.21, 567.6136, 775.9557, 907.25, 1060.749, 1240.187, 1449.902, 1694.897, 1980.89,
   2314.32, 2702.296, 3152.456, 3672.768, 4271.294, 4955.961, 5733.958, 6609.266, 7575.508, 8602.361, 9620.555, 10519.87, 11174.18, 11488.56, 11439.74, 11080.89,
   10509.56, 9825.057, 8383.65, 7693.951, 7043.025, 6435.376, 5872.452, 5353.903, 4878.204, 4443.08, 4045.844, 3683.643, 3353.629, 3053.07, 2779.397, 2530.234,
   2303.399, 1908.906, 1581.975, 1311.035, 1086.498, 900.4173, 746.2057, 618.4055, 424.7202, 291.6973, 200.3374, 94.49767, 44.57385, 21.02516, 9.917412, 4.67797,
   2.206564, 1.04082, 0.4909471, 0.2315761, 0.1092328, 0.05152429, 0.02430363, 0.01146384, 0.00540741, 0.002550635, 0.001203116, 0.0005675009, 0.000267686, 0.0001262655, 5.955851e-05, 2.809331e-05,
   1.325141e-05, 6.250591e-06, 2.948358e-06, 1.390719e-06, 6.559917e-07, 3.094265e-07, 1.459542e-07, 6.884551e-08, 3.247392e-08, 1.531771e-08, 7.22525e-09, 3.408097e-09, 1.607574e-09, 1.607574e-09 };
   graph = new TGraph(127,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",127,-12,12);
   Graph_model18->SetMinimum(2.190571e-18);
   Graph_model18->SetMaximum(12637.41);
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
   
   Double_t resolution_bkg_fx9[106] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.4375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4,
   4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8,
   8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[106] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 4.383336e-292, 8.932969e-265, 8.584704e-239, 3.890391e-214, 8.313799e-191, 8.378075e-169, 3.981323e-148, 8.921728e-129, 9.42777e-111, 4.697939e-94, 1.103937e-78, 1.223262e-64, 6.391946e-52, 1.575017e-40,
   1.830103e-30, 1.002777e-21, 2.591027e-14, 3.157022e-08, 0.001813935, 4.914783, 22.00223, 81.38967, 145.7771, 249.2558, 408.1199, 645.2865, 1003.103, 1576.138, 2560.691, 4268.572,
   6995.722, 10690.73, 14620.43, 17460.14, 18000.77, 15992.28, 12332.57, 8410.548, 5248.735, 3150.254, 1912.605, 1202.606, 773.0315, 493.7066, 306.3042, 182.4423,
   56.36802, 14.40188, 0.009098996, 2.710857e-07, 3.808536e-13, 2.523178e-20, 7.882724e-29, 1.161296e-38, 8.067672e-50, 2.642967e-62, 4.082948e-76, 2.974365e-91, 1.02177e-107, 1.655199e-125, 1.264404e-144, 4.554703e-165,
   7.737e-187, 6.1976e-210, 2.341062e-234, 4.170044e-260, 3.502731e-287, 1.387394e-315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(106,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",106,-12,12);
   Graph_resolution_bkg9->SetMinimum(19.80085);
   Graph_resolution_bkg9->SetMaximum(19800.85);
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
   
   Double_t model2_fx10[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25,
   -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t model2_fy10[116] = { 4.876239, 5.489274, 6.179378, 6.956241, 7.830771, 8.815245, 9.923486, 11.17105, 12.57546, 14.15644, 15.93616, 17.93964, 20.19499, 22.73387, 25.59195, 28.80933, 32.4312,
   36.50841, 41.0982, 46.26502, 52.08139, 58.629, 65.99976, 74.29717, 83.63773, 94.15262, 105.9896, 119.3152, 134.318, 151.2136, 170.2565, 191.7743, 216.28,
   244.8539, 280.4682, 332.6026, 433.351, 530.0378, 693.6619, 981.4709, 1203.013, 1504.618, 1924.045, 2197.112, 2527.989, 2932.73, 3431.192, 4047.297, 4811.908,
   5775.408, 7040.246, 8809.835, 11399.84, 15099.6, 19827.03, 24779.23, 28520.81, 29716.2, 28020.36, 24308.19, 20022.2, 16282.96, 13493.31, 11525.24, 10090.18,
   8963.756, 8026.358, 7224.201, 6530.377, 5926.255, 5396.226, 4508.444, 3791.795, 3202.359, 2713.585, 2307.061, 1686.291, 1254.099, 951.7532, 738.903, 479.4327,
   342.424, 264.8121, 216.6675, 183.7107, 159.0623, 139.3495, 122.8678, 108.7124, 96.36705, 85.50843, 75.91346, 67.41408, 59.87524, 53.18368, 47.24195, 41.96497,
   37.27788, 33.1145, 29.41621, 26.131, 23.2127, 20.62032, 18.31747, 16.2718, 14.45458, 12.84032, 11.40633, 10.13248, 9.000903, 7.995694, 7.102746, 6.309521,
   5.604883, 4.978937, 4.978937 };
   graph = new TGraph(116,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",116,-12,12);
   Graph_model210->SetMinimum(4.388615);
   Graph_model210->SetMaximum(32687.33);
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
   
   TH1D *frame_tau_11dbe250__6 = new TH1D("frame_tau_11dbe250__6"," ",80,-10,10);
   frame_tau_11dbe250__6->SetBinContent(1,31202.01);
   frame_tau_11dbe250__6->SetMinimum(4);
   frame_tau_11dbe250__6->SetMaximum(100000);
   frame_tau_11dbe250__6->SetEntries(2);
   frame_tau_11dbe250__6->SetDirectory(nullptr);
   frame_tau_11dbe250__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_11dbe250__6->SetLineColor(ci);
   frame_tau_11dbe250__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_11dbe250__6->GetXaxis()->SetRange(17,64);
   frame_tau_11dbe250__6->GetXaxis()->SetLabelFont(42);
   frame_tau_11dbe250__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_11dbe250__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_11dbe250__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_11dbe250__6->GetXaxis()->SetTitleFont(42);
   frame_tau_11dbe250__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_11dbe250__6->GetYaxis()->SetLabelFont(42);
   frame_tau_11dbe250__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_11dbe250__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_11dbe250__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_11dbe250__6->GetYaxis()->SetTitleFont(42);
   frame_tau_11dbe250__6->GetZaxis()->SetLabelFont(42);
   frame_tau_11dbe250__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_11dbe250__6->GetZaxis()->SetTitleFont(42);
   frame_tau_11dbe250__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"2 GeV/c < #it{p}_{T}^{#mu#mu} < 3 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 246 / 80 ");
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

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT2_3.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT2_3.png");
}
