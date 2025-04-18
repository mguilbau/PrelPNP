#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT6_8()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 17:21:39 2025) by ROOT version 6.32.06
   TCanvas *cTauzFig_PP = new TCanvas("cTauzFig_PP", "cTauzFig",1667,743,1000,800);
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
   
   TH1D *frame_tau_108c2900__3 = new TH1D("frame_tau_108c2900__3"," ",80,-10,10);
   frame_tau_108c2900__3->SetBinContent(1,25217.96);
   frame_tau_108c2900__3->SetMinimum(5);
   frame_tau_108c2900__3->SetMaximum(500000);
   frame_tau_108c2900__3->SetEntries(3);
   frame_tau_108c2900__3->SetDirectory(nullptr);
   frame_tau_108c2900__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_108c2900__3->SetLineColor(ci);
   frame_tau_108c2900__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_108c2900__3->GetXaxis()->SetRange(25,56);
   frame_tau_108c2900__3->GetXaxis()->SetLabelFont(42);
   frame_tau_108c2900__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_108c2900__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_108c2900__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_108c2900__3->GetXaxis()->SetTitleFont(42);
   frame_tau_108c2900__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_108c2900__3->GetYaxis()->SetLabelFont(42);
   frame_tau_108c2900__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_108c2900__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_108c2900__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_108c2900__3->GetYaxis()->SetTitleFont(42);
   frame_tau_108c2900__3->GetZaxis()->SetLabelFont(42);
   frame_tau_108c2900__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_108c2900__3->GetZaxis()->SetTitleFont(42);
   frame_tau_108c2900__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 0, 1.099109, 1.110699, 1.150687, 0, 0, 0, 1.152674, 0, -0.3447759, 1.27827, 1.633264, 4.257446, 2.558201, 0.9268299, 2.479929, 2.533596,
   2.012377, 4.733902, 4.092479, 2.842103, 1.383659, 8.867209, 5.329254, 1.859897, 4.999798, 3.407397, 8.926408, 9.919722, 14.73532, 6.093134, 15.78754, 4.757493,
   10.9256, 17.85854, 32.53477, 38.55922, 42.35003, 144.5784, 6908.655, 8132.319, 1054.346, 512.8872, 264.8862, 168.8886, 86.72077, 45.79401, 36.26093, 15.0613,
   15.69209, 17.03504, 10.08255, 4.799773, 2.850361, 3.047063, 3.346346, 11.48982, 3.862713, 2.147789, 0.8263097, 1.733074, 0.543291, -0.517963, 0.4314726, 1.972027,
   1.676429, 2.979105, 0, 0.970031, 0, 1.144167, 0, 3.608514, 0, 0, 0.5399815, 0, 0.01452728, 0, 0 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 0, 1.099109, 1.110699, 1.150687, 0, 0, 0, 1.152674, 0, 0.3447759, 1.759094, 1.247504, 2.264704, 2.053617, 1.306867, 1.551986, 2.223851,
   1.54413, 2.466476, 2.052792, 2.198323, 1.692304, 3.079118, 2.412275, 1.468421, 2.615788, 2.084602, 3.544876, 3.749776, 4.494354, 3.656797, 4.84116, 3.75245,
   4.152778, 5.597659, 7.005115, 7.455246, 8.977022, 15.47958, 90.34972, 100.824, 39.86265, 27.5095, 20.47318, 15.72518, 11.75776, 8.973119, 7.210598, 5.39286,
   5.440415, 5.115283, 4.28904, 3.663369, 2.693898, 2.423126, 2.505717, 3.47924, 2.427696, 2.086436, 2.044236, 1.870493, 1.303801, 0.8306602, 1.2333, 1.552684,
   1.476322, 1.750165, 0, 0.970031, 0, 1.144167, 0, 1.867099, 0, 0, 1.303732, 0, 0.01452728, 0, 0 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 0, 1.099109, 1.110699, 1.150687, 0, 0, 0, 1.152674, 0, 0.3447759, 1.759094, 1.247504, 2.264704, 2.053617, 1.306867, 1.551986, 2.223851,
   1.54413, 2.466476, 2.052792, 2.198323, 1.692304, 3.079118, 2.412275, 1.468421, 2.615788, 2.084602, 3.544876, 3.749776, 4.494354, 3.656797, 4.84116, 3.75245,
   4.152778, 5.597659, 7.005115, 7.455246, 8.977022, 15.47958, 90.34972, 100.824, 39.86265, 27.5095, 20.47318, 15.72518, 11.75776, 8.973119, 7.210598, 5.39286,
   5.440415, 5.115283, 4.28904, 3.663369, 2.693898, 2.423126, 2.505717, 3.47924, 2.427696, 2.086436, 2.044236, 1.870493, 1.303801, 0.8306602, 1.2333, 1.552684,
   1.476322, 1.750165, 0, 0.970031, 0, 1.144167, 0, 1.867099, 0, 0, 1.303732, 0, 0.01452728, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(9.056509);
   Graph_h_data_sig_cut3002->SetMaximum(9056.509);
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
   
   Double_t gauss1_fx4[106] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5,
   4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5,
   8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[106] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.934541e-281, 6.717933e-232,
   3.066187e-187, 2.790161e-147, 5.06206e-112, 1.831019e-81, 1.320462e-55, 1.89857e-34, 5.442453e-18, 3.110501e-06, 0.04061846, 1.682728, 8.404174, 35.44325, 126.2203, 379.5617, 963.8129, 2066.619,
   3741.842, 5720.944, 7385.966, 8052.008, 7412.392, 5761.956, 3782.15, 2096.355, 981.1791, 387.7832, 129.4157, 36.47056, 8.678707, 1.743914, 0.04239716, 3.293427e-06,
   5.929544e-18, 2.128443e-34, 1.523247e-55, 2.173432e-81, 6.18286e-112, 3.506713e-147, 3.965323e-187, 8.93973e-232, 4.018258e-281, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(106,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",106,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(8.857209);
   Graph_gauss14->SetMaximum(8857.209);
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
   
   Double_t DCB_fx5[104] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[104] = { 0, 1.140604, 1.140604, 1.181014, 1.223968, 1.269701, 1.318473, 1.370583, 1.426362, 1.486192, 1.550503, 1.619787, 1.694612, 1.775628, 1.86359, 1.959378, 2.06402,
   2.178728, 2.304937, 2.444359, 2.599053, 2.771512, 2.964787, 3.182643, 3.429777, 3.712122, 4.037269, 4.415076, 4.858561, 5.385247, 6.019237, 6.794544, 7.760605,
   8.991881, 10.60544, 12.79545, 15.90649, 20.60753, 28.36916, 43.08406, 78.86454, 123.1061, 164.8972, 239.2447, 301.8788, 399.5533, 568.6721, 916.1852, 1917.082,
   5803.083, 11810.28, 15016.38, 11928.2, 5919.544, 1957.434, 927.3425, 573.5441, 402.1936, 303.5024, 240.3295, 165.4663, 123.449, 79.02309, 43.13971, 28.39615,
   20.62305, 15.9164, 12.80225, 10.61036, 8.995573, 7.763466, 6.796817, 6.02108, 5.386767, 4.859833, 4.416154, 4.038192, 3.71292, 3.430473, 3.183255, 2.965328,
   2.771994, 2.599483, 2.444746, 2.305287, 2.179046, 2.064309, 1.959642, 1.863832, 1.77585, 1.694817, 1.619977, 1.550679, 1.486356, 1.426515, 1.370725, 1.318606,
   1.269825, 1.224085, 1.181124, 1.140707, 1.140707, 1.140707, 0 };
   graph = new TGraph(104,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",104,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(16.51802);
   Graph_DCB5->SetMaximum(16518.02);
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
   
   Double_t model_fx6[105] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375,
   -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75,
   1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[105] = { 0, 1.140604, 1.140604, 1.181014, 1.223968, 1.269701, 1.318473, 1.370583, 1.426362, 1.486192, 1.550503, 1.619787, 1.694612, 1.775628, 1.86359, 1.959378, 2.06402,
   2.178728, 2.304937, 2.444359, 2.599053, 2.771512, 2.964787, 3.182643, 3.429777, 3.712122, 4.037269, 4.415076, 4.858561, 5.385247, 6.019237, 6.794544, 7.760605,
   8.991881, 10.60544, 12.79545, 15.90649, 20.60753, 28.36916, 43.08406, 78.86454, 123.1471, 166.5968, 275.1179, 429.8072, 784.9283, 1549.656, 3028.278, 5772.01,
   11789.73, 19749.23, 24017.11, 20655.96, 13206.66, 7312.402, 4550.04, 2996.358, 2135.337, 1681.611, 1433.131, 1156.937, 970.2917, 698.8869, 510.2245, 375.2837,
   206.3701, 115.9875, 67.01591, 40.1831, 25.28194, 16.8571, 11.97594, 9.054003, 7.230557, 6.034845, 5.207096, 4.602229, 4.137898, 3.766346, 3.4591, 3.198594,
   2.973548, 2.776398, 2.601843, 2.446011, 2.305964, 2.179409, 2.064504, 1.959746, 1.863888, 1.77588, 1.694833, 1.619986, 1.550683, 1.486358, 1.426516, 1.370726,
   1.318607, 1.269825, 1.224086, 1.181124, 1.140708, 1.140708, 1.140708, 0 };
   graph = new TGraph(105,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",105,-12.3003,12.3003);
   Graph_model6->SetMinimum(26.41882);
   Graph_model6->SetMaximum(26418.82);
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
   
   TH1D *frame_tau_108c2900__4 = new TH1D("frame_tau_108c2900__4"," ",80,-10,10);
   frame_tau_108c2900__4->SetBinContent(1,25217.96);
   frame_tau_108c2900__4->SetMinimum(5);
   frame_tau_108c2900__4->SetMaximum(500000);
   frame_tau_108c2900__4->SetEntries(3);
   frame_tau_108c2900__4->SetDirectory(nullptr);
   frame_tau_108c2900__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_108c2900__4->SetLineColor(ci);
   frame_tau_108c2900__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_108c2900__4->GetXaxis()->SetRange(25,56);
   frame_tau_108c2900__4->GetXaxis()->SetLabelFont(42);
   frame_tau_108c2900__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_108c2900__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_108c2900__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_108c2900__4->GetXaxis()->SetTitleFont(42);
   frame_tau_108c2900__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_108c2900__4->GetYaxis()->SetLabelFont(42);
   frame_tau_108c2900__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_108c2900__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_108c2900__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_108c2900__4->GetYaxis()->SetTitleFont(42);
   frame_tau_108c2900__4->GetZaxis()->SetLabelFont(42);
   frame_tau_108c2900__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_108c2900__4->GetZaxis()->SetTitleFont(42);
   frame_tau_108c2900__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"6 < #it{p}_{T}^{#mu#mu} < 8 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 44 / 56 ");
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

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT6_8.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT6_8.png");
}
