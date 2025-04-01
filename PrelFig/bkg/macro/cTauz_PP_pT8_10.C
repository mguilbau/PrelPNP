#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT8_10()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 17:07:57 2025) by ROOT version 6.32.06
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
   pad1_Tauz__2->Range(-5,0.0899462,5,5.211084);
   pad1_Tauz__2->SetFillColor(0);
   pad1_Tauz__2->SetBorderMode(0);
   pad1_Tauz__2->SetBorderSize(2);
   pad1_Tauz__2->SetLogy();
   pad1_Tauz__2->SetFrameBorderMode(0);
   pad1_Tauz__2->SetFrameBorderMode(0);
   
   TH1D *frame_tau_ed74c90__5 = new TH1D("frame_tau_ed74c90__5"," ",80,-10,10);
   frame_tau_ed74c90__5->SetBinContent(1,2115.264);
   frame_tau_ed74c90__5->SetMinimum(4);
   frame_tau_ed74c90__5->SetMaximum(50000);
   frame_tau_ed74c90__5->SetEntries(2);
   frame_tau_ed74c90__5->SetDirectory(nullptr);
   frame_tau_ed74c90__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_ed74c90__5->SetLineColor(ci);
   frame_tau_ed74c90__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ed74c90__5->GetXaxis()->SetRange(25,56);
   frame_tau_ed74c90__5->GetXaxis()->SetLabelFont(42);
   frame_tau_ed74c90__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ed74c90__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ed74c90__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_ed74c90__5->GetXaxis()->SetTitleFont(42);
   frame_tau_ed74c90__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ed74c90__5->GetYaxis()->SetLabelFont(42);
   frame_tau_ed74c90__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ed74c90__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ed74c90__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_ed74c90__5->GetYaxis()->SetTitleFont(42);
   frame_tau_ed74c90__5->GetZaxis()->SetLabelFont(42);
   frame_tau_ed74c90__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_ed74c90__5->GetZaxis()->SetTitleFont(42);
   frame_tau_ed74c90__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 0, 0, 1.574905, 1.162916, 0, 0, 0, 0, 0, 0, 0, 1.375696, 0, -0.1429746, 0, 0, 1.757795,
   -0.2138665, 0.1431015, 0, 1.136934, 0, 4.001644, 6.328934, 5.745969, 4.260724, 0.9880998, 3.356098, 3.858829, 1.013623, 6.834497, 2.267004, 6.311785,
   9.726195, 13.98021, 16.8648, 32.96178, 35.48307, 70.72318, 737.1823, 1290.639, 544.0222, 258.6017, 133.6894, 96.15659, 45.7534, 36.97709, 19.26459, 25.12548,
   14.53659, 4.639086, 2.167377, 5.908979, 0.852981, 1.996956, 1.387231, -0.01967139, 1.555156, 0, 1.374451, 1.574669, 0, 0, 2.449919, -0.075572,
   0.3581542, 1.061198, 0, 0.1947008, 0, 0, 0, -0.1474711, 0, 0, 0, 0, -0.1305765, 0, 0 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 0, 0, 1.574905, 1.162916, 0, 0, 0, 0, 0, 0, 0, 1.375696, 0, 0.1429746, 0, 0, 1.45908,
   0.1596557, 0.1431015, 0, 1.291528, 0, 2.273544, 3.03267, 2.690272, 2.556727, 0.8616497, 2.107063, 2.225868, 0.8841608, 3.024226, 1.666379, 2.967833,
   3.636247, 4.544834, 4.726071, 6.642662, 7.16427, 10.23229, 35.45487, 45.95284, 28.37249, 19.75663, 14.18487, 11.99369, 8.166821, 7.310744, 5.484461, 5.902131,
   4.720255, 2.314418, 1.396814, 3.033151, 1.455524, 1.665676, 1.589324, 0.01967139, 1.47229, 0, 1.496188, 1.574669, 0, 0, 1.799925, 0.075572,
   0.3611855, 1.061198, 0, 0.3202407, 0, 0, 0, 0.1474711, 0, 0, 0, 0, 0.1198982, 0, 0 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 0, 0, 1.574905, 1.162916, 0, 0, 0, 0, 0, 0, 0, 1.375696, 0, 0.1429746, 0, 0, 1.45908,
   0.1596557, 0.1431015, 0, 1.291528, 0, 2.273544, 3.03267, 2.690272, 2.556727, 0.8616497, 2.107063, 2.225868, 0.8841608, 3.024226, 1.666379, 2.967833,
   3.636247, 4.544834, 4.726071, 6.642662, 7.16427, 10.23229, 35.45487, 45.95284, 28.37249, 19.75663, 14.18487, 11.99369, 8.166821, 7.310744, 5.484461, 5.902131,
   4.720255, 2.314418, 1.396814, 3.033151, 1.455524, 1.665676, 1.589324, 0.01967139, 1.47229, 0, 1.496188, 1.574669, 0, 0, 1.799925, 0.075572,
   0.3611855, 1.061198, 0, 0.3202407, 0, 0, 0, 0.1474711, 0, 0, 0, 0, 0.1198982, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(1.470272);
   Graph_h_dataw_bkg3003->SetMaximum(1470.272);
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
   
   Double_t exp_DDS_fx7[105] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.875, -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.3125, -0.25, -0.125,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125,
   1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25,
   4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25,
   8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[105] = { 0.01598609, 0.01956718, 0.02395047, 0.02931568, 0.03588277, 0.04392096, 0.05375982, 0.0658027, 0.08054334, 0.09858607, 0.1206706, 0.1477023, 0.1807895, 0.2212887, 0.2708601, 0.3315363, 0.4058046,
   0.49671, 0.6079793, 0.7441743, 0.9108788, 1.114927, 1.364685, 1.670392, 2.044581, 2.502593, 3.063205, 3.749402, 4.589316, 5.617381, 6.875745, 8.415999, 10.30129,
   11.39684, 12.60891, 13.94988, 15.43346, 17.07483, 18.89076, 20.89981, 23.12253, 25.58163, 28.30226, 31.31224, 34.64233, 38.32658, 40.31313, 42.40262, 46.89199,
   49.14591, 50.06453, 50.55941, 50.42192, 49.71639, 48.69854, 47.56624, 43.03115, 40.91074, 38.89474, 35.15587, 31.77642, 28.72182, 25.96086, 23.4653, 21.20963,
   19.1708, 17.32795, 15.66225, 14.15668, 12.79583, 11.56579, 10.454, 8.54076, 6.977672, 5.700654, 4.657349, 3.804984, 3.108615, 2.539692, 2.07489, 1.695154,
   1.384915, 1.131455, 0.9243819, 0.7552061, 0.6169921, 0.5040733, 0.4118203, 0.336451, 0.2748754, 0.2245691, 0.1834696, 0.1498919, 0.1224594, 0.1000475, 0.08173733, 0.06677817,
   0.05455676, 0.04457206, 0.0364147, 0.02975027, 0.02430552, 0.01985725, 0.01622307, 0.01622307 };
   TGraph *graph = new TGraph(105,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",105,-12,12);
   Graph_exp_DDS7->SetMinimum(0.01438748);
   Graph_exp_DDS7->SetMaximum(55.61375);
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
   
   Double_t model1_fx8[118] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.125, 1.25,
   1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[118] = { 9.473516e-50, 1.925871e-48, 3.915101e-47, 7.959007e-46, 1.617986e-44, 3.289203e-43, 6.68662e-42, 1.359323e-40, 2.763366e-39, 5.617646e-38, 1.142011e-36, 2.321594e-35, 4.719566e-34, 9.594404e-33, 1.950446e-31, 3.965061e-30, 8.06057e-29,
   1.638633e-27, 3.331176e-26, 6.771946e-25, 1.376668e-23, 2.798629e-22, 5.689331e-21, 1.156584e-19, 2.351219e-18, 4.779791e-17, 9.716835e-16, 1.975335e-14, 4.015657e-13, 8.163428e-12, 1.659543e-10, 3.373684e-09, 6.85836e-08,
   1.394236e-06, 2.834341e-05, 0.000576193, 0.01171343, 0.2381222, 1.073638, 4.840784, 10.27885, 21.82598, 31.80445, 46.34476, 67.53094, 98.38985, 143.2748, 208.2714, 301.3489,
   431.6988, 607.2312, 825.8818, 1052.621, 1210.112, 1246.528, 1194.721, 1111.459, 1023.258, 937.9538, 858.3368, 785.125, 718.1015, 656.7962, 600.7256, 549.4421,
   502.5367, 459.6355, 420.3968, 384.5079, 351.6828, 321.66, 294.2001, 246.113, 205.8857, 172.2336, 144.082, 120.5317, 100.8308, 84.34994, 59.02938, 41.30966,
   28.90913, 20.23105, 9.907983, 4.852349, 2.376396, 1.16382, 0.5699707, 0.2791382, 0.1367055, 0.06695037, 0.03278837, 0.01605782, 0.007864179, 0.003851414, 0.001886197, 0.0009237488,
   0.000452398, 0.000221558, 0.0001085061, 5.313995e-05, 2.602483e-05, 1.274544e-05, 6.241969e-06, 3.056951e-06, 1.497115e-06, 7.331993e-07, 3.590781e-07, 1.758554e-07, 8.612366e-08, 4.217832e-08, 2.065647e-08, 1.011633e-08,
   4.954385e-09, 2.426368e-09, 1.188293e-09, 5.819561e-10, 5.819561e-10 };
   graph = new TGraph(118,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",118,-12,12);
   Graph_model18->SetMinimum(8.526164e-50);
   Graph_model18->SetMaximum(1371.181);
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
   
   Double_t resolution_bkg_fx9[96] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t resolution_bkg_fy9[96] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.878868e-250, 2.381279e-197,
   6.631293e-151, 1.269572e-110, 1.671045e-76, 1.512134e-48, 9.407273e-27, 4.023542e-11, 0.1183109, 0.6656758, 3.001057, 10.86438, 32.17809, 84.52154, 218.9957, 496.1358, 753.8658, 672.9114,
   365.0455, 147.4553, 56.80056, 20.88811, 6.517345, 1.643786, 0.3324085, 3.176156e-10, 2.086429e-25, 9.422732e-47, 2.925643e-74, 6.245071e-108, 9.164836e-148, 9.246628e-194, 6.413772e-246, 3.058546e-304,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   graph = new TGraph(96,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(0.8292524);
   Graph_resolution_bkg9->SetMaximum(829.2524);
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
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375,
   0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy10[112] = { 0.01598609, 0.01956718, 0.02395047, 0.02931568, 0.03588277, 0.04392096, 0.05375982, 0.0658027, 0.08054334, 0.09858607, 0.1206706, 0.1477023, 0.1807895, 0.2212887, 0.2708601, 0.3315363, 0.4058046,
   0.49671, 0.6079793, 0.7441743, 0.9108788, 1.114927, 1.364685, 1.670392, 2.044581, 2.502593, 3.063205, 3.749402, 4.589316, 5.617381, 6.875745, 8.415999, 10.30129,
   12.60891, 15.43349, 18.89133, 23.13424, 28.54039, 39.48311, 46.71677, 60.15257, 71.11194, 86.65981, 108.8925, 140.9108, 187.428, 255.8718, 357.9499, 510.7689,
   739.7982, 1094.023, 1598.821, 2014.538, 1969.861, 1609.483, 1307.613, 1127.625, 1005.25, 910.113, 830.9005, 761.465, 698.8076, 641.6433, 589.3328, 541.4315,
   457.3749, 386.8387, 327.6236, 277.8894, 236.0963, 200.9555, 171.3884, 146.4926, 107.8152, 80.23901, 60.48045, 35.8933, 22.70381, 15.30635, 10.91716, 8.141492,
   6.270624, 4.936487, 3.94169, 3.175565, 2.57248, 2.090948, 1.703018, 1.388767, 1.133341, 0.9253056, 0.7556585, 0.6172136, 0.5041818, 0.4118734, 0.336477, 0.2748882,
   0.2245753, 0.1834726, 0.1498934, 0.1224602, 0.1000479, 0.0817375, 0.06677826, 0.05455681, 0.04457208, 0.03641471, 0.02975027, 0.02430552, 0.01985725, 0.01622307, 0.01622307 };
   graph = new TGraph(112,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",112,-12,12);
   Graph_model210->SetMinimum(0.01438748);
   Graph_model210->SetMaximum(2215.99);
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
   
   TH1D *frame_tau_ed74c90__6 = new TH1D("frame_tau_ed74c90__6"," ",80,-10,10);
   frame_tau_ed74c90__6->SetBinContent(1,2115.264);
   frame_tau_ed74c90__6->SetMinimum(4);
   frame_tau_ed74c90__6->SetMaximum(50000);
   frame_tau_ed74c90__6->SetEntries(2);
   frame_tau_ed74c90__6->SetDirectory(nullptr);
   frame_tau_ed74c90__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_ed74c90__6->SetLineColor(ci);
   frame_tau_ed74c90__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_ed74c90__6->GetXaxis()->SetRange(25,56);
   frame_tau_ed74c90__6->GetXaxis()->SetLabelFont(42);
   frame_tau_ed74c90__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_ed74c90__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_ed74c90__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_ed74c90__6->GetXaxis()->SetTitleFont(42);
   frame_tau_ed74c90__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_ed74c90__6->GetYaxis()->SetLabelFont(42);
   frame_tau_ed74c90__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_ed74c90__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_ed74c90__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_ed74c90__6->GetYaxis()->SetTitleFont(42);
   frame_tau_ed74c90__6->GetZaxis()->SetLabelFont(42);
   frame_tau_ed74c90__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_ed74c90__6->GetZaxis()->SetTitleFont(42);
   frame_tau_ed74c90__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"8 GeV/c < #it{p}_{T}^{#mu#mu} < 10 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 91 / 42 ");
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

   cTauz_PP->SaveAs("../pdf/cTauz_PP_pT8_10.pdf");
   cTauz_PP->SaveAs("../png/cTauz_PP_pT8_10.png");
}
