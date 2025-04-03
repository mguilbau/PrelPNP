#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT4_5()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 19:56:42 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",200,1103,1000,800);
   cTauzFig_PP->Range(0,0,1,1);
   cTauzFig_PP->SetFillColor(0);
   cTauzFig_PP->SetBorderMode(0);
   cTauzFig_PP->SetBorderSize(2);
   cTauzFig_PP->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_TauzPP
   TPad *pad1_TauzPP__1 = new TPad("pad1_TauzPP", "",0,0,1,1);
   pad1_TauzPP__1->Draw();
   pad1_TauzPP__1->cd();
   pad1_TauzPP__1->Range(-5,0.07396996,5,6.32397);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_f022340__3 = new TH1D("frame_tau_f022340__3"," ",80,-10,10);
   frame_tau_f022340__3->SetBinContent(1,28139.08);
   frame_tau_f022340__3->SetMinimum(5);
   frame_tau_f022340__3->SetMaximum(500000);
   frame_tau_f022340__3->SetEntries(3);
   frame_tau_f022340__3->SetDirectory(nullptr);
   frame_tau_f022340__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_f022340__3->SetLineColor(ci);
   frame_tau_f022340__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f022340__3->GetXaxis()->SetRange(25,56);
   frame_tau_f022340__3->GetXaxis()->SetLabelFont(42);
   frame_tau_f022340__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f022340__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f022340__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_f022340__3->GetXaxis()->SetTitleFont(42);
   frame_tau_f022340__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f022340__3->GetYaxis()->SetLabelFont(42);
   frame_tau_f022340__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f022340__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f022340__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f022340__3->GetYaxis()->SetTitleFont(42);
   frame_tau_f022340__3->GetZaxis()->SetLabelFont(42);
   frame_tau_f022340__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_f022340__3->GetZaxis()->SetTitleFont(42);
   frame_tau_f022340__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 1.927451, 5.788708, 2.789464, -0.9704708, 0.2051663, 2.830275, 2.329722, 3.220459, 5.784263, 2.154809, 1.753231, -1.537841, 6.57815, 1.94087, 2.958526, 5.175217, 7.6723,
   5.272381, 2.801106, 5.51064, 0.5566604, 8.500356, 11.4032, 7.4038, 7.115716, 8.000941, 1.990229, 9.418739, 14.06788, 10.55553, 5.457812, 21.27654, 22.44821,
   37.25677, 32.19119, 38.9208, 72.03654, 108.0249, 428.713, 9851.245, 11811.71, 1250.263, 655.2768, 341.5109, 219.6621, 127.071, 70.61304, 61.17991, 41.24715,
   31.77853, 14.65222, 23.19362, 15.20117, 9.077065, 6.695427, 9.488543, 9.802529, 2.47027, 2.062359, 4.394333, 5.891617, 7.565946, 7.61867, 3.888557, -0.136958,
   3.099687, 0.9531902, 4.806929, 1.85072, 2.849113, -0.5672292, 2.440814, 2.321226, 2.170277, -0.6726688, 1.465235, 0.4148569, 1.219271, -0.4331481, 1.58288 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 1.688312, 2.591592, 1.752692, 1.195776, 1.363346, 2.072384, 1.648931, 1.767556, 2.590546, 1.525714, 1.327358, 1.268657, 2.914808, 2.021911, 1.855291, 2.427774, 2.922381,
   2.83763, 2.105438, 2.646467, 1.937661, 3.489056, 4.015597, 3.337798, 3.364256, 3.531867, 3.440382, 4.080939, 4.481832, 4.548387, 3.921256, 5.843706, 5.997394,
   7.483166, 7.753083, 8.396354, 11.13276, 13.87887, 25.28092, 111.927, 125.0381, 46.17485, 32.83698, 23.78902, 18.57841, 14.27348, 10.85254, 9.702365, 7.784351,
   7.305352, 5.250588, 5.896796, 5.026576, 4.056118, 3.380337, 4.154798, 3.837639, 3.168594, 1.585276, 3.251394, 2.619514, 3.112656, 3.080572, 2.097776, 2.163381,
   2.214214, 1.78245, 2.578772, 2.058248, 2.48603, 0.5672292, 1.664419, 1.791151, 1.527006, 0.5910061, 1.243383, 1.101861, 1.219271, 0.5931581, 1.330433 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 1.688312, 2.591592, 1.752692, 1.195776, 1.363346, 2.072384, 1.648931, 1.767556, 2.590546, 1.525714, 1.327358, 1.268657, 2.914808, 2.021911, 1.855291, 2.427774, 2.922381,
   2.83763, 2.105438, 2.646467, 1.937661, 3.489056, 4.015597, 3.337798, 3.364256, 3.531867, 3.440382, 4.080939, 4.481832, 4.548387, 3.921256, 5.843706, 5.997394,
   7.483166, 7.753083, 8.396354, 11.13276, 13.87887, 25.28092, 111.927, 125.0381, 46.17485, 32.83698, 23.78902, 18.57841, 14.27348, 10.85254, 9.702365, 7.784351,
   7.305352, 5.250588, 5.896796, 5.026576, 4.056118, 3.380337, 4.154798, 3.837639, 3.168594, 1.585276, 3.251394, 2.619514, 3.112656, 3.080572, 2.097776, 2.163381,
   2.214214, 1.78245, 2.578772, 2.058248, 2.48603, 0.5672292, 1.664419, 1.791151, 1.527006, 0.5910061, 1.243383, 1.101861, 1.219271, 0.5931581, 1.330433 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(13.13047);
   Graph_h_data_sig_cut3002->SetMaximum(13130.47);
   Graph_h_data_sig_cut3002->SetDirectory(nullptr);
   Graph_h_data_sig_cut3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data_sig_cut3002->SetLineColor(ci);
   Graph_h_data_sig_cut3002->GetXaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetXaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetYaxis()->SetTitleFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetLabelFont(42);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleOffset(1);
   Graph_h_data_sig_cut3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data_sig_cut3002);
   
   grae->Draw("p");
   
   Double_t gauss1_fx4[108] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4,
   4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8,
   8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[108] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7.997438e-297, 3.398881e-258, 3.15019e-222, 6.367271e-189, 2.806633e-158, 2.697949e-130,
   5.655844e-105, 2.585693e-82, 2.577936e-62, 5.605098e-45, 2.657724e-30, 2.748226e-18, 6.197415e-09, 0.03047786, 6.789728, 20.6471, 57.0534, 143.2583, 326.8693, 677.7107, 1276.822, 2185.91,
   3400.556, 4807.104, 6174.944, 7207.728, 7645.037, 7368.46, 6453.416, 5135.923, 3714.182, 2440.753, 1457.472, 790.8472, 389.9427, 174.7128, 71.13196, 26.31604,
   8.846923, 0.04337482, 1.052181e-08, 5.566198e-18, 6.421593e-30, 1.615633e-44, 8.864581e-62, 1.060693e-81, 2.767812e-104, 1.575068e-129, 1.95469e-157, 5.290202e-188, 3.122355e-221, 4.018908e-257, 1.128105e-295, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(108,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",108,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(8.409541);
   Graph_gauss14->SetMaximum(8409.541);
   Graph_gauss14->SetDirectory(nullptr);
   Graph_gauss14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gauss14->SetLineColor(ci);
   Graph_gauss14->GetXaxis()->SetLabelFont(42);
   Graph_gauss14->GetXaxis()->SetTitleOffset(1);
   Graph_gauss14->GetXaxis()->SetTitleFont(42);
   Graph_gauss14->GetYaxis()->SetLabelFont(42);
   Graph_gauss14->GetYaxis()->SetTitleFont(42);
   Graph_gauss14->GetZaxis()->SetLabelFont(42);
   Graph_gauss14->GetZaxis()->SetTitleOffset(1);
   Graph_gauss14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_gauss14);
   
   graph->Draw("l");
   
   Double_t DCB_fx5[106] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[106] = { 0, 1.710122, 1.710122, 1.777631, 1.849673, 1.926687, 2.009165, 2.097662, 2.192812, 2.295335, 2.406052, 2.525909, 2.655996, 2.797574, 2.952112, 3.12133, 3.30725,
   3.51227, 3.739246, 3.991606, 4.273499, 4.589986, 4.9473, 5.35319, 5.817405, 6.352354, 6.974054, 7.703501, 8.568691, 9.607703, 10.87352, 12.44179, 14.42398,
   16.99039, 20.41312, 25.15162, 32.03823, 42.72774, 60.96338, 97.01617, 190.0059, 311.7213, 431.3836, 523.1169, 652.3882, 844.7658, 1153.476, 1707.242, 2899.339,
   6078.037, 11068.91, 16028.61, 18455.94, 16897.63, 12301.7, 7121.207, 3379.989, 1899.426, 1251.765, 902.6729, 689.7931, 548.8934, 450.0199, 322.5248, 194.7246,
   98.55381, 61.67291, 43.12064, 32.28172, 25.31451, 20.5283, 17.07531, 14.48869, 12.49243, 10.91401, 9.640678, 8.595963, 7.726359, 6.993435, 6.368953, 5.831751,
   5.365688, 4.958266, 4.59967, 4.282101, 3.999287, 3.746139, 3.518484, 3.312874, 3.126439, 2.95677, 2.801834, 2.659905, 2.529506, 2.40937, 2.298403, 2.195657,
   2.100306, 2.011626, 1.928983, 1.851819, 1.779639, 1.712006, 1.712006, 1.712006, 0 };
   graph = new TGraph(106,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",106,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(20.30153);
   Graph_DCB5->SetMaximum(20301.53);
   Graph_DCB5->SetDirectory(nullptr);
   Graph_DCB5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_DCB5->SetLineColor(ci);
   Graph_DCB5->GetXaxis()->SetLabelFont(42);
   Graph_DCB5->GetXaxis()->SetTitleOffset(1);
   Graph_DCB5->GetXaxis()->SetTitleFont(42);
   Graph_DCB5->GetYaxis()->SetLabelFont(42);
   Graph_DCB5->GetYaxis()->SetTitleFont(42);
   Graph_DCB5->GetZaxis()->SetLabelFont(42);
   Graph_DCB5->GetZaxis()->SetTitleOffset(1);
   Graph_DCB5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_DCB5);
   
   graph->Draw("l");
   
   Double_t model_fx6[107] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25,
   4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25,
   8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[107] = { 0, 1.710122, 1.710122, 1.777631, 1.849673, 1.926687, 2.009165, 2.097662, 2.192812, 2.295335, 2.406052, 2.525909, 2.655996, 2.797574, 2.952112, 3.12133, 3.30725,
   3.51227, 3.739246, 3.991606, 4.273499, 4.589986, 4.9473, 5.35319, 5.817405, 6.352354, 6.974054, 7.703501, 8.568691, 9.607703, 10.87352, 12.44179, 14.42398,
   16.99039, 20.41312, 25.15162, 32.03823, 42.72774, 60.96338, 97.01617, 190.0366, 318.5591, 488.9072, 667.6639, 982.5126, 1530.141, 2447.414, 3930.063, 6377.126,
   11039.27, 17528.48, 23709.52, 26799.12, 25180.54, 19831.93, 13421.38, 8278.709, 5500.227, 3821.289, 2747.796, 2073.611, 1657.839, 1398.046, 1102.625, 790.6363,
   593.7193, 454.1675, 273.9028, 169.7792, 107.8714, 70.42634, 47.45098, 33.14274, 24.07772, 18.21514, 14.32932, 11.67893, 9.812391, 8.452321, 7.426689, 6.627519,
   5.986063, 5.457781, 5.013227, 4.632471, 4.301676, 4.01097, 3.753111, 3.522645, 3.315357, 3.127921, 2.957654, 2.802362, 2.66022, 2.529694, 2.409482, 2.29847,
   2.195697, 2.100329, 2.01164, 1.928992, 1.851824, 1.779642, 1.712007, 1.712007, 1.712007, 0 };
   graph = new TGraph(107,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",107,-12.3003,12.3003);
   Graph_model6->SetMinimum(29.47903);
   Graph_model6->SetMaximum(29479.03);
   Graph_model6->SetDirectory(nullptr);
   Graph_model6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model6->SetLineColor(ci);
   Graph_model6->GetXaxis()->SetLabelFont(42);
   Graph_model6->GetXaxis()->SetTitleOffset(1);
   Graph_model6->GetXaxis()->SetTitleFont(42);
   Graph_model6->GetYaxis()->SetLabelFont(42);
   Graph_model6->GetYaxis()->SetTitleFont(42);
   Graph_model6->GetZaxis()->SetLabelFont(42);
   Graph_model6->GetZaxis()->SetTitleOffset(1);
   Graph_model6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model6);
   
   graph->Draw("l");
   
   TH1D *frame_tau_f022340__4 = new TH1D("frame_tau_f022340__4"," ",80,-10,10);
   frame_tau_f022340__4->SetBinContent(1,28139.08);
   frame_tau_f022340__4->SetMinimum(5);
   frame_tau_f022340__4->SetMaximum(500000);
   frame_tau_f022340__4->SetEntries(3);
   frame_tau_f022340__4->SetDirectory(nullptr);
   frame_tau_f022340__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_f022340__4->SetLineColor(ci);
   frame_tau_f022340__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_f022340__4->GetXaxis()->SetRange(25,56);
   frame_tau_f022340__4->GetXaxis()->SetLabelFont(42);
   frame_tau_f022340__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_f022340__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_f022340__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_f022340__4->GetXaxis()->SetTitleFont(42);
   frame_tau_f022340__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_f022340__4->GetYaxis()->SetLabelFont(42);
   frame_tau_f022340__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_f022340__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_f022340__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_f022340__4->GetYaxis()->SetTitleFont(42);
   frame_tau_f022340__4->GetZaxis()->SetLabelFont(42);
   frame_tau_f022340__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_f022340__4->GetZaxis()->SetTitleFont(42);
   frame_tau_f022340__4->Draw("AXISSAME");
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
   
   TLegend *leg = new TLegend(0.72,0.71,0.89,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gauss1","Gauss","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DCB","DCB","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("model","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 64 / 68 ");
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
   pad1_TauzPP__1->Modified();
   cTauzFig_PP->cd();
   cTauzFig_PP->Modified();
   cTauzFig_PP->SetSelected(cTauzFig_PP);

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT4_5.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT4_5.png");
}
