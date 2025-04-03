#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT10_15()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 17:01:06 2025) by ROOT version 6.32.06
   TCanvas *cTauz_PP = new TCanvas("cTauz_PP", "cTauz",1667,743,1000,800);
   cTauz_PP->Range(0,0,1,1);
   cTauz_PP->SetFillColor(0);
   cTauz_PP->SetBorderMode(0);
   cTauz_PP->SetBorderSize(2);
   cTauz_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_Tauz
   TPad *pad1_Tauz__2 = new TPad("pad1_Tauz", "",0,0,1,1);
   pad1_Tauz__2->Draw();
   pad1_Tauz__2->cd();
   pad1_Tauz__2->Range(-5,0.1773175,5,4.424743);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_fcea3c0__5 = new TH1D("frame_tau_fcea3c0__5"," ",80,-10,10);
   frame_tau_fcea3c0__5->SetBinContent(1,1746.534);
   frame_tau_fcea3c0__5->SetMinimum(4);
   frame_tau_fcea3c0__5->SetMaximum(10000);
   frame_tau_fcea3c0__5->SetEntries(2);
   frame_tau_fcea3c0__5->SetDirectory(nullptr);
   frame_tau_fcea3c0__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_fcea3c0__5->SetLineColor(ci);
   frame_tau_fcea3c0__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fcea3c0__5->GetXaxis()->SetRange(25,56);
   frame_tau_fcea3c0__5->GetXaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fcea3c0__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fcea3c0__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_fcea3c0__5->GetXaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fcea3c0__5->GetYaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fcea3c0__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fcea3c0__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_fcea3c0__5->GetYaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__5->GetZaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_fcea3c0__5->GetZaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.7887424, 0, 0, 0, 0, -0.2621766,
   1.851673, -0.2250483, -0.2518349, 0, 1.00481, 0, 0.8829025, 0, 2.345223, 1.358515, 1.472422, 1.408168, 5.429824, 0.9724981, 6.097561, 1.154338,
   5.557375, 11.12251, 9.465786, 27.05586, 29.97968, 60.67457, 474.3871, 993.3292, 443.3157, 234.0603, 121.0087, 69.61462, 54.30816, 22.2362, 24.31679, 13.94504,
   8.207622, 5.455203, 5.165842, -0.04821438, 0.2996354, 2.1396, 0, 0.6916792, 1.711697, 0, 1.610566, 0, -0.1141628, 0, 0, 0,
   -0.1975798, 1.081943, -0.006160885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.7887424, 0, 0, 0, 0, 0.2621766,
   1.851673, 0.2250483, 0.2518349, 0, 0.9993601, 0, 1.034321, 0, 1.978694, 1.53484, 1.859827, 1.667867, 2.694735, 0.9633308, 3.133427, 1.832018,
   2.604714, 3.932309, 3.958977, 6.411248, 6.201556, 9.774302, 33.18467, 45.49241, 28.08591, 20.39267, 14.46076, 10.89029, 9.332562, 6.048489, 6.009671, 4.639817,
   3.628583, 2.95423, 2.90746, 0.2860345, 0.7968076, 1.810056, 0, 0.6916793, 1.711697, 0, 1.724588, 0, 0.1141628, 0, 0, 0,
   0.1975798, 1.081943, 0.1851978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.7887424, 0, 0, 0, 0, 0.2621766,
   1.851673, 0.2250483, 0.2518349, 0, 0.9993601, 0, 1.034321, 0, 1.978694, 1.53484, 1.859827, 1.667867, 2.694735, 0.9633308, 3.133427, 1.832018,
   2.604714, 3.932309, 3.958977, 6.411248, 6.201556, 9.774302, 33.18467, 45.49241, 28.08591, 20.39267, 14.46076, 10.89029, 9.332562, 6.048489, 6.009671, 4.639817,
   3.628583, 2.95423, 2.90746, 0.2860345, 0.7968076, 1.810056, 0, 0.6916793, 1.711697, 0, 1.724588, 0, 0.1141628, 0, 0, 0,
   0.1975798, 1.081943, 0.1851978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(1.14273);
   Graph_h_dataw_bkg3003->SetMaximum(1142.73);
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
   
   Double_t exp_DDS_fx7[110] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.875, -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.375, -0.3125,
   -0.25, -0.1875, -0.125, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.25, 0.3125, 0.375, 0.4375, 0.5, 0.5625,
   0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3,
   3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7,
   7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[110] = { 0.002466205, 0.003138913, 0.003995118, 0.00508487, 0.006471874, 0.008237213, 0.01048408, 0.01334384, 0.01698365, 0.02161629, 0.02751259, 0.03501722, 0.0445689, 0.056726, 0.07219921, 0.09189305, 0.1169588,
   0.1488618, 0.1894669, 0.241148, 0.3069261, 0.3906466, 0.4972037, 0.6328264, 0.805443, 1.025144, 1.304774, 1.660678, 2.113663, 2.690209, 3.424019, 4.357992, 5.546726,
   6.257658, 7.059711, 7.964565, 8.985395, 10.13707, 11.43635, 12.90216, 14.55585, 16.4215, 18.52626, 20.9008, 22.19988, 23.57969, 25.04527, 26.60193, 28.25535,
   30.01143, 31.87498, 33.83888, 35.8368, 36.74496, 37.37393, 37.46493, 36.97026, 36.11734, 35.13735, 31.20367, 29.37838, 27.65928, 26.04074, 24.51691, 23.08225,
   21.73155, 19.26263, 17.0742, 15.1344, 13.41498, 11.89091, 10.53998, 9.342536, 8.281131, 7.340313, 6.50638, 5.767191, 4.531209, 3.560114, 2.797136, 2.197675,
   1.726685, 1.356635, 1.065891, 0.8374568, 0.6579792, 0.516966, 0.4061736, 0.3191255, 0.2507329, 0.1969976, 0.1547785, 0.1216075, 0.09554551, 0.0750689, 0.05898069, 0.04634038,
   0.03640905, 0.02860613, 0.02247547, 0.0176587, 0.01387421, 0.01090079, 0.008564617, 0.006729111, 0.005286977, 0.004153911, 0.003263676, 0.002564229, 0.002564229 };
   TGraph *graph = new TGraph(110,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",110,-12,12);
   Graph_exp_DDS7->SetMinimum(0.002219584);
   Graph_exp_DDS7->SetMaximum(41.21118);
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
   
   Double_t model1_fx8[123] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1,
   1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75,
   4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75,
   8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[123] = { 5.007955e-31, 3.371588e-30, 2.26991e-29, 1.528209e-28, 1.028861e-27, 6.92677e-27, 4.663424e-26, 3.139633e-25, 2.113747e-24, 1.423073e-23, 9.580786e-23, 6.45023e-22, 4.342594e-21, 2.923636e-20, 1.968328e-19, 1.32517e-18, 8.921658e-18,
   6.006474e-17, 4.043837e-16, 2.722499e-15, 1.832913e-14, 1.234002e-13, 8.307875e-13, 5.593247e-12, 3.765634e-11, 2.5352e-10, 1.706814e-09, 1.149107e-08, 7.736319e-08, 5.208449e-07, 3.50657e-06, 2.360786e-05, 0.0001589391,
   0.001070052, 0.007204084, 0.04850124, 0.3265329, 2.198371, 5.704112, 9.188224, 14.80046, 23.84068, 30.25801, 38.40274, 48.73986, 61.85966, 78.5117, 99.64838, 126.4792,
   160.5312, 203.6943, 258.2035, 326.5865, 412.0869, 519.0454, 642.9194, 748.7377, 792.9284, 777.6331, 735.3281, 638.0166, 591.3607, 547.4654, 506.5806, 468.6693,
   433.5733, 401.1004, 371.0585, 343.2666, 317.5562, 293.7715, 271.7683, 251.4131, 232.5824, 215.1622, 184.1383, 157.5877, 134.8654, 115.4194, 98.77723, 84.5347,
   72.34577, 61.91435, 52.98702, 45.34691, 33.21268, 24.32542, 17.81626, 13.04887, 6.9998, 3.754899, 2.014239, 1.080497, 0.5796105, 0.3109202, 0.1667867, 0.08946933,
   0.04799399, 0.02574539, 0.01381059, 0.007408407, 0.003974088, 0.002131818, 0.00114357, 0.0006134447, 0.0003290698, 0.0001765228, 9.469202e-05, 5.07956e-05, 2.724826e-05, 1.461677e-05, 7.840866e-06, 4.206072e-06,
   2.256261e-06, 1.210325e-06, 6.49254e-07, 3.48279e-07, 1.868271e-07, 1.002196e-07, 5.376074e-08, 2.883885e-08, 1.547001e-08, 1.547001e-08 };
   graph = new TGraph(123,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",123,-12,12);
   Graph_model18->SetMinimum(4.50716e-31);
   Graph_model18->SetMaximum(872.2212);
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
   
   Double_t resolution_bkg_fx9[97] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[97] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.241074e-270, 9.503513e-224, 2.697228e-181, 2.837253e-143,
   1.106179e-109, 1.598452e-80, 8.560923e-56, 1.699373e-35, 1.250269e-19, 3.409301e-08, 0.3445673, 1.262676, 3.945405, 10.52196, 24.29172, 53.7686, 143.9833, 409.832, 801.7736, 877.1628,
   526.0271, 198.5043, 69.83677, 30.50118, 13.62222, 5.344303, 1.791981, 0.004601915, 9.221078e-07, 1.758644e-17, 1.243144e-32, 3.256953e-52, 3.162631e-76, 1.138237e-104, 1.518321e-137, 7.506565e-175,
   1.375517e-216, 9.341952e-263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(97,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(0.9648791);
   Graph_resolution_bkg9->SetMaximum(964.8791);
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
   Double_t model2_fy10[112] = { 0.002466205, 0.003138913, 0.003995118, 0.00508487, 0.006471874, 0.008237213, 0.01048408, 0.01334384, 0.01698365, 0.02161629, 0.02751259, 0.03501722, 0.0445689, 0.056726, 0.07219921, 0.09189305, 0.1169588,
   0.1488618, 0.1894669, 0.241148, 0.3069261, 0.3906466, 0.4972037, 0.6328264, 0.805443, 1.025144, 1.304774, 1.660678, 2.113663, 2.690209, 3.424023, 4.358016, 5.546885,
   7.060781, 8.992599, 11.48485, 14.88238, 20.72464, 26.60492, 38.38015, 48.88595, 65.00506, 90.13091, 107.7121, 130.0044, 158.6715, 196.3516, 247.0623, 316.3341,
   415.1987, 591.907, 965.6224, 1482.067, 1663.365, 1355.926, 1012.255, 840.3022, 751.2806, 684.7737, 628.8617, 580.461, 537.3705, 498.1726, 428.7643, 369.3074,
   318.2884, 274.4953, 236.8938, 204.5982, 176.8503, 153.0008, 132.4936, 99.6691, 75.32934, 57.23781, 43.75267, 33.66795, 20.38918, 12.76699, 8.286108, 5.574352,
   3.877633, 2.777285, 2.037605, 1.523421, 1.15536, 0.8854508, 0.6837246, 0.5307766, 0.413582, 0.3230996, 0.2528647, 0.1981412, 0.155392, 0.1219366, 0.09572204, 0.07516359,
   0.05903148, 0.04636763, 0.03642367, 0.02861397, 0.02247968, 0.01766095, 0.01387542, 0.01090144, 0.008564965, 0.006729298, 0.005287078, 0.004153965, 0.003263704, 0.002564244, 0.002564244 };
   graph = new TGraph(112,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",112,-12,12);
   Graph_model210->SetMinimum(0.002219584);
   Graph_model210->SetMaximum(1829.702);
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
   
   TH1D *frame_tau_fcea3c0__6 = new TH1D("frame_tau_fcea3c0__6"," ",80,-10,10);
   frame_tau_fcea3c0__6->SetBinContent(1,1746.534);
   frame_tau_fcea3c0__6->SetMinimum(4);
   frame_tau_fcea3c0__6->SetMaximum(10000);
   frame_tau_fcea3c0__6->SetEntries(2);
   frame_tau_fcea3c0__6->SetDirectory(nullptr);
   frame_tau_fcea3c0__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_fcea3c0__6->SetLineColor(ci);
   frame_tau_fcea3c0__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_fcea3c0__6->GetXaxis()->SetRange(25,56);
   frame_tau_fcea3c0__6->GetXaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_fcea3c0__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_fcea3c0__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_fcea3c0__6->GetXaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_fcea3c0__6->GetYaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_fcea3c0__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_fcea3c0__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_fcea3c0__6->GetYaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__6->GetZaxis()->SetLabelFont(42);
   frame_tau_fcea3c0__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_fcea3c0__6->GetZaxis()->SetTitleFont(42);
   frame_tau_fcea3c0__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"10 < #it{p}_{T}^{#mu#mu} < 15 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 24 / 32 ");
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

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT10_15.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT10_15.png");
}
