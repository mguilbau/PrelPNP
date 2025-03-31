#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT1_2()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 21:09:51 2025) by ROOT version 6.32.06
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
   pad1_Tauz__2->Range(-8.75,-0.07268256,8.75,6.674743);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_13667310__5 = new TH1D("frame_tau_13667310__5"," ",80,-10,10);
   frame_tau_13667310__5->SetBinContent(1,46962.32);
   frame_tau_13667310__5->SetMinimum(4);
   frame_tau_13667310__5->SetMaximum(1000000);
   frame_tau_13667310__5->SetEntries(2);
   frame_tau_13667310__5->SetDirectory(nullptr);
   frame_tau_13667310__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_13667310__5->SetLineColor(ci);
   frame_tau_13667310__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_13667310__5->GetXaxis()->SetRange(13,68);
   frame_tau_13667310__5->GetXaxis()->SetLabelFont(42);
   frame_tau_13667310__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_13667310__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_13667310__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_13667310__5->GetXaxis()->SetTitleFont(42);
   frame_tau_13667310__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_13667310__5->GetYaxis()->SetLabelFont(42);
   frame_tau_13667310__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_13667310__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_13667310__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_13667310__5->GetYaxis()->SetTitleFont(42);
   frame_tau_13667310__5->GetZaxis()->SetLabelFont(42);
   frame_tau_13667310__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_13667310__5->GetZaxis()->SetTitleFont(42);
   frame_tau_13667310__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 25.97272, 16.22462, 19.90082, 33.74214, 25.39383, 26.9472, 20.84848, 39.99469, 27.48446, 35.13245, 39.4499, 49.54125, 44.44099, 29.81355, 42.85186, 55.42139, 77.93201,
   58.46208, 74.49381, 86.76078, 93.73032, 104.971, 95.93137, 118.8092, 153.6608, 170.5179, 198.4803, 206.2511, 197.3364, 240.6274, 312.3294, 325.8562, 396.2954,
   523.8619, 604.6433, 777.5229, 1097.717, 1915.386, 4970.922, 22237.73, 31542.33, 10433.89, 4862.165, 2719.529, 1632.354, 1140.815, 842.6802, 588.2087, 512.226,
   447.9992, 349.3933, 275.8036, 261.6346, 226.459, 225.9661, 190.3227, 177.6349, 162.9379, 104.055, 99.4551, 102.1132, 84.92163, 95.7903, 72.06113, 62.38859,
   61.80481, 73.16529, 79.36684, 38.81755, 42.7799, 43.58046, 34.24359, 27.47092, 35.08083, 32.70375, 26.91011, 22.89564, 20.39622, 34.79384, 12.61101 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 5.89673, 4.709018, 5.441266, 6.660221, 5.897962, 6.114232, 5.482923, 7.352152, 6.113926, 6.784823, 7.369407, 8.236706, 7.783157, 6.512106, 7.736991, 8.640473, 10.1162,
   8.989355, 10.07991, 10.92234, 11.02149, 11.89696, 11.34045, 12.49491, 14.00055, 14.92949, 16.42071, 16.60466, 16.12311, 17.74415, 20.2876, 20.76099, 22.85485,
   26.22822, 28.1153, 32.0345, 38.22319, 50.76211, 82.92999, 182.7952, 213.9018, 119.1709, 81.0881, 60.47898, 47.19853, 39.05289, 33.64816, 28.25453, 26.30331,
   24.51938, 21.51272, 19.09924, 18.65856, 17.55332, 17.20784, 16.04567, 15.33144, 14.74053, 11.73996, 11.48283, 11.6181, 10.82656, 11.2986, 9.866584, 9.170272,
   9.144007, 10.04511, 10.28662, 7.253442, 7.558188, 7.564902, 6.73938, 6.23076, 6.863539, 6.666395, 6.198979, 5.656666, 5.295621, 6.83525, 4.326201 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 5.89673, 4.709018, 5.441266, 6.660221, 5.897962, 6.114232, 5.482923, 7.352152, 6.113926, 6.784823, 7.369407, 8.236706, 7.783157, 6.512106, 7.736991, 8.640473, 10.1162,
   8.989355, 10.07991, 10.92234, 11.02149, 11.89696, 11.34045, 12.49491, 14.00055, 14.92949, 16.42071, 16.60466, 16.12311, 17.74415, 20.2876, 20.76099, 22.85485,
   26.22822, 28.1153, 32.0345, 38.22319, 50.76211, 82.92999, 182.7952, 213.9018, 119.1709, 81.0881, 60.47898, 47.19853, 39.05289, 33.64816, 28.25453, 26.30331,
   24.51938, 21.51272, 19.09924, 18.65856, 17.55332, 17.20784, 16.04567, 15.33144, 14.74053, 11.73996, 11.48283, 11.6181, 10.82656, 11.2986, 9.866584, 9.170272,
   9.144007, 10.04511, 10.28662, 7.253442, 7.558188, 7.564902, 6.73938, 6.23076, 6.863539, 6.666395, 6.198979, 5.656666, 5.295621, 6.83525, 4.326201 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(7.456325);
   Graph_h_dataw_bkg3003->SetMaximum(34931.02);
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
   
   Double_t exp_DDS_fx7[95] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625, -0.03125, 0, 0.03125, 0.0625,
   0.09375, 0.125, 0.1875, 0.25, 0.5, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[95] = { 11.90606, 13.2912, 14.83748, 16.56366, 18.49066, 20.64184, 23.04329, 25.72413, 28.71685, 32.05774, 35.7873, 39.95076, 44.59859, 49.78715, 55.57933, 62.04538, 69.26368,
   77.32174, 86.31728, 96.35935, 107.5697, 120.0842, 134.0547, 149.6505, 167.0607, 186.4964, 208.1932, 232.4142, 259.453, 289.6375, 323.3337, 360.95, 402.9426,
   449.8205, 502.1522, 560.5721, 625.7884, 661.189, 698.592, 738.1108, 779.8595, 823.8947, 869.8355, 915.3772, 934.9019, 942.2546, 947.056, 948.7271, 947.0454,
   942.2347, 934.875, 915.3428, 892.9497, 801.5606, 758.6664, 718.0481, 679.6033, 643.2169, 576.1842, 516.1373, 462.3482, 414.1647, 371.0026, 332.3386, 297.7041,
   266.6789, 238.887, 213.9915, 191.6904, 171.7134, 153.8184, 137.7882, 123.4286, 110.5656, 99.04299, 88.72125, 79.47519, 71.1927, 63.77337, 57.12724, 51.17374,
   45.84068, 41.0634, 36.78399, 32.95056, 29.51662, 26.44055, 23.68506, 21.21673, 19.00563, 17.02496, 15.25071, 13.66136, 12.23765, 12.23765 };
   TGraph *graph = new TGraph(95,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",100,-12,12);
   Graph_exp_DDS7->SetMinimum(10.71545);
   Graph_exp_DDS7->SetMaximum(1042.409);
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
   -1.75, -1.5, -1.25, -1.125, -1, -0.875, -0.8125, -0.75, -0.6875, -0.625, -0.5625, -0.53125, -0.5, -0.46875, -0.4375, -0.40625,
   -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375,
   0.125, 0.15625, 0.1875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375, 0.625,
   0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75,
   3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75,
   7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[127] = { 7.994667e-18, 2.754404e-17, 9.489751e-17, 3.269505e-16, 1.126443e-15, 3.880936e-15, 1.337099e-14, 4.60671e-14, 1.587151e-13, 5.468212e-13, 1.883964e-12, 6.490823e-12, 2.236284e-11, 7.704673e-11, 2.654492e-10, 9.145525e-10, 3.150909e-09,
   1.085583e-08, 3.740161e-08, 1.288598e-07, 4.439609e-07, 1.529579e-06, 5.269861e-06, 1.815626e-05, 6.255378e-05, 0.0002155166, 0.0007425198, 0.002558204, 0.008813785, 0.03036615, 0.1046205, 0.3604492, 1.241856,
   4.278569, 14.74096, 50.78705, 94.2685, 174.9767, 324.7834, 442.4869, 602.8456, 821.3109, 1118.901, 1524.106, 1778.569, 2075.173, 2420.602, 2822.388, 3288.905,
   3829.3, 4453.369, 5171.357, 5993.699, 6930.604, 7991.17, 9181.136, 10497.61, 11919.07, 13391.52, 14817.45, 16059.79, 16970.41, 17436.98, 17424.38, 16984.62,
   16229.66, 15286.42, 14260.52, 12211.35, 11246.74, 10337.28, 9486.521, 8695.382, 7963.13, 7287.878, 6666.936, 6097.107, 5574.935, 5096.895, 4659.528, 4259.527,
   3559.403, 2974.281, 2485.331, 2076.759, 1735.353, 1450.072, 1211.689, 1012.495, 706.9625, 493.628, 344.6698, 168.039, 81.92509, 39.94144, 19.4729, 9.493742,
   4.628543, 2.256582, 1.100165, 0.5363704, 0.2615, 0.1274907, 0.06215632, 0.03030345, 0.01477403, 0.007202874, 0.003511661, 0.001712062, 0.0008346921, 0.0004069426, 0.0001983992, 9.67268e-05,
   4.715781e-05, 2.299114e-05, 1.120901e-05, 5.464799e-06, 2.664287e-06, 1.298936e-06, 6.332784e-07, 3.087461e-07, 1.505249e-07, 7.338634e-08, 3.577849e-08, 1.744331e-08, 8.504244e-09, 8.504244e-09 };
   graph = new TGraph(127,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",127,-12,12);
   Graph_model18->SetMinimum(7.1952e-18);
   Graph_model18->SetMaximum(19180.68);
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
   
   Double_t resolution_bkg_fx9[108] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.40625, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[108] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.315996e-300,
   2.10147e-275, 7.556359e-252, 2.471456e-229, 7.352655e-208, 1.989694e-187, 4.897557e-168, 1.096538e-149, 2.233154e-132, 4.1368e-116, 6.97046e-101, 1.068339e-86, 1.489388e-73, 1.888677e-61, 2.178503e-50, 2.28565e-40, 2.181284e-31,
   1.893502e-23, 1.495099e-16, 1.073805e-10, 7.015061e-06, 0.04168585, 22.53184, 74.70016, 213.2256, 340.7271, 525.2912, 784.068, 1143.357, 1659.186, 2461.979, 3814.941, 6121.521,
   9765.708, 14733.71, 20216.94, 24635.04, 26340.31, 24624.5, 20200.12, 14716.32, 9751.747, 6112.156, 3809.331, 2458.716, 1657.177, 1142.001, 783.0982, 524.5926,
   340.2362, 212.8934, 74.56597, 5.837317, 0.250958, 7.682715e-05, 2.139338e-09, 5.418697e-15, 1.248422e-21, 2.616247e-29, 4.987088e-38, 8.647017e-48, 1.363756e-58, 1.9564e-70, 2.552876e-83, 3.03007e-97,
   3.271347e-112, 3.212562e-128, 2.869639e-145, 2.3316e-163, 1.723184e-182, 1.158405e-202, 7.083369e-224, 3.939765e-246, 1.993204e-269, 9.172422e-294, 3.459942e-319, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(108,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",108,-12,12);
   Graph_resolution_bkg9->SetMinimum(28.97434);
   Graph_resolution_bkg9->SetMaximum(28974.34);
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
   Double_t model2_fy10[116] = { 11.90606, 13.2912, 14.83748, 16.56366, 18.49066, 20.64184, 23.04329, 25.72413, 28.71685, 32.05774, 35.7873, 39.95076, 44.59859, 49.78715, 55.57933, 62.04538, 69.26368,
   77.32174, 86.31728, 96.35935, 107.5697, 120.0842, 134.0547, 149.6505, 167.0608, 186.4966, 208.1939, 232.4167, 259.4618, 289.6679, 323.4383, 361.3104, 404.1844,
   454.0991, 516.8931, 611.3591, 800.7651, 985.973, 1301.479, 1858.32, 2288.656, 2877.564, 3698.684, 4230.167, 4866.42, 5629.335, 6543.342, 7636.004, 8943.796,
   10531.8, 12536.1, 15216.91, 18955.97, 24082.95, 30486.06, 37218.98, 42552.5, 44726.02, 42995.92, 38126.97, 31880.85, 25963.86, 21288.02, 17936.03, 15563.01,
   13785.33, 12349.08, 11127.82, 10066.63, 9138.568, 8324.63, 6973.234, 5899.206, 5024.031, 4298.785, 3692.58, 2756.368, 2093.289, 1621.274, 1283.147, 860.8071,
   630.3872, 496.0898, 410.944, 351.8115, 307.1978, 271.3074, 241.1436, 215.0916, 192.2268, 171.9749, 153.9458, 137.8504, 123.4589, 110.5803, 99.05019, 88.72476,
   79.4769, 71.19353, 63.77377, 57.12744, 51.17384, 45.84073, 41.06343, 36.784, 32.95056, 29.51662, 26.44056, 23.68506, 21.21673, 19.00563, 17.02496, 15.25071,
   13.66136, 12.23765, 12.23765 };
   graph = new TGraph(116,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",116,-12,12);
   Graph_model210->SetMinimum(10.71545);
   Graph_model210->SetMaximum(49197.43);
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
   
   TH1D *frame_tau_13667310__6 = new TH1D("frame_tau_13667310__6"," ",80,-10,10);
   frame_tau_13667310__6->SetBinContent(1,46962.32);
   frame_tau_13667310__6->SetMinimum(4);
   frame_tau_13667310__6->SetMaximum(1000000);
   frame_tau_13667310__6->SetEntries(2);
   frame_tau_13667310__6->SetDirectory(nullptr);
   frame_tau_13667310__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_13667310__6->SetLineColor(ci);
   frame_tau_13667310__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_13667310__6->GetXaxis()->SetRange(13,68);
   frame_tau_13667310__6->GetXaxis()->SetLabelFont(42);
   frame_tau_13667310__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_13667310__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_13667310__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_13667310__6->GetXaxis()->SetTitleFont(42);
   frame_tau_13667310__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_13667310__6->GetYaxis()->SetLabelFont(42);
   frame_tau_13667310__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_13667310__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_13667310__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_13667310__6->GetYaxis()->SetTitleFont(42);
   frame_tau_13667310__6->GetZaxis()->SetLabelFont(42);
   frame_tau_13667310__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_13667310__6->GetZaxis()->SetTitleFont(42);
   frame_tau_13667310__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"1 GeV/c < #it{p}_{T}^{#mu#mu} < 2 GeV/c");
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
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 257 / 80 ");
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
}
