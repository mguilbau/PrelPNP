#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT0_1()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 21:15:56 2025) by ROOT version 6.32.06
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
   pad1_TauzPP__1->Range(-8.75,0.03634121,8.75,6.662629);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_d6336c0__3 = new TH1D("frame_tau_d6336c0__3"," ",80,-10,10);
   frame_tau_d6336c0__3->SetBinContent(1,27871.51);
   frame_tau_d6336c0__3->SetMinimum(5);
   frame_tau_d6336c0__3->SetMaximum(1000000);
   frame_tau_d6336c0__3->SetEntries(3);
   frame_tau_d6336c0__3->SetDirectory(nullptr);
   frame_tau_d6336c0__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_d6336c0__3->SetLineColor(ci);
   frame_tau_d6336c0__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_d6336c0__3->GetXaxis()->SetRange(13,68);
   frame_tau_d6336c0__3->GetXaxis()->SetLabelFont(42);
   frame_tau_d6336c0__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_d6336c0__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_d6336c0__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_d6336c0__3->GetXaxis()->SetTitleFont(42);
   frame_tau_d6336c0__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_d6336c0__3->GetYaxis()->SetLabelFont(42);
   frame_tau_d6336c0__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_d6336c0__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_d6336c0__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_d6336c0__3->GetYaxis()->SetTitleFont(42);
   frame_tau_d6336c0__3->GetZaxis()->SetLabelFont(42);
   frame_tau_d6336c0__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_d6336c0__3->GetZaxis()->SetTitleFont(42);
   frame_tau_d6336c0__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 9.296395, 1.537734, 12.53598, -0.5804874, 1.08888, 11.87765, 5.428386, 7.183731, -2.117699, 7.028626, 13.72758, 12.26411, 9.27402, 12.28425, 7.097057, 27.14436, 9.32886,
   20.97598, 23.18128, 16.03228, 10.01828, 19.85752, 16.43261, 26.73793, 14.74692, 13.91631, 31.2858, 21.74197, 27.95036, 37.59025, 33.43324, 82.74765, 35.83679,
   54.50411, 91.02088, 120.0993, 195.4239, 471.1395, 1905.324, 14615.8, 14859.51, 2139.843, 980.6714, 496.9171, 326.6758, 176.0847, 145.1584, 90.38401, 87.45512,
   45.72989, 56.22157, 40.31826, 20.12679, 17.93931, 14.96304, 8.395159, 3.381675, 18.48051, 22.278, 9.535323, 0.9194354, 15.31015, -4.51496, 4.068707, 17.85685,
   12.12767, 8.303203, 5.993292, 6.484227, 6.531619, 1.858178, 1.948805, 8.815869, 7.808737, 9.263132, 0.6230967, 3.271577, 1.695385, 4.030111, 2.683647 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 3.419083, 2.874609, 4.328209, 2.168232, 3.216086, 4.421143, 3.521302, 3.673491, 2.86878, 3.966419, 5.106132, 4.493017, 4.092802, 4.895931, 4.595306, 6.388214, 5.53834,
   6.044685, 6.385705, 5.886162, 5.879568, 6.660187, 6.793683, 7.184081, 6.986026, 6.689114, 8.513793, 8.059318, 8.812641, 9.567518, 9.398836, 12.31189, 11.69152,
   11.97708, 13.71545, 16.71205, 21.38989, 30.547, 56.72122, 147.9496, 153.0268, 64.87016, 43.80101, 32.19964, 25.54331, 20.24647, 17.87102, 14.51003, 13.81094,
   12.12956, 11.05737, 9.965336, 8.897909, 8.263909, 7.364585, 7.126076, 6.150685, 6.537513, 6.733746, 5.792581, 5.525945, 6.052239, 4.093504, 5.356049, 5.268415,
   5.22128, 4.681574, 4.918454, 4.172894, 3.799026, 3.743625, 2.869185, 4.044527, 3.601735, 4.086909, 2.712583, 2.726149, 2.920615, 3.2647, 2.726219 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 3.419083, 2.874609, 4.328209, 2.168232, 3.216086, 4.421143, 3.521302, 3.673491, 2.86878, 3.966419, 5.106132, 4.493017, 4.092802, 4.895931, 4.595306, 6.388214, 5.53834,
   6.044685, 6.385705, 5.886162, 5.879568, 6.660187, 6.793683, 7.184081, 6.986026, 6.689114, 8.513793, 8.059318, 8.812641, 9.567518, 9.398836, 12.31189, 11.69152,
   11.97708, 13.71545, 16.71205, 21.38989, 30.547, 56.72122, 147.9496, 153.0268, 64.87016, 43.80101, 32.19964, 25.54331, 20.24647, 17.87102, 14.51003, 13.81094,
   12.12956, 11.05737, 9.965336, 8.897909, 8.263909, 7.364585, 7.126076, 6.150685, 6.537513, 6.733746, 5.792581, 5.525945, 6.052239, 4.093504, 5.356049, 5.268415,
   5.22128, 4.681574, 4.918454, 4.172894, 3.799026, 3.743625, 2.869185, 4.044527, 3.601735, 4.086909, 2.712583, 2.726149, 2.920615, 3.2647, 2.726219 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(16.51394);
   Graph_h_data_sig_cut3002->SetMaximum(16513.94);
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
   
   Double_t gauss1_fx4[125] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.6875, -0.625, -0.59375, -0.5625, -0.53125, -0.5, -0.46875, -0.4375,
   -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375,
   0.125, 0.15625, 0.1875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125, 0.5625, 0.59375, 0.625,
   0.65625, 0.6875, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75,
   4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75,
   8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[125] = { 0, 0, 0, 0, 0, 0, 0, 0, 2.004545e-305, 1.445123e-287, 3.055357e-270, 1.894466e-253, 3.444924e-237, 1.837132e-221, 2.873221e-206, 1.317849e-191, 1.772679e-177,
   6.992981e-164, 8.090264e-151, 2.744928e-138, 2.731285e-126, 7.970234e-115, 6.820921e-104, 1.711918e-93, 1.260059e-83, 2.719985e-74, 1.721908e-65, 3.196845e-57, 1.740608e-49, 2.779383e-42, 1.301559e-35, 1.787504e-29, 7.199429e-24,
   8.50388e-19, 2.945806e-14, 2.992671e-10, 8.91624e-07, 0.0007790627, 0.1996324, 2.017371, 15.00229, 36.46698, 82.1006, 119.6971, 171.1974, 240.2075, 330.6374, 446.4714, 591.4408,
   768.6081, 979.8842, 1225.52, 1503.635, 1809.841, 2137.049, 2813.135, 3136.121, 3429.818, 3679.81, 3873.074, 3999.099, 4050.836, 4025.346, 3924.08, 3752.741,
   3520.751, 3240.396, 2925.748, 2251.868, 1919.596, 1605.288, 1316.959, 1059.906, 836.8329, 648.1658, 492.5037, 367.1208, 268.4631, 192.5911, 135.5389, 93.57666,
   63.37928, 42.11174, 17.55266, 2.4229, 0.2461189, 0.00101208, 1.220542e-06, 4.316764e-10, 4.477462e-14, 1.361989e-18, 1.215019e-23, 3.178778e-29, 2.438965e-35, 5.488058e-42, 3.621594e-49, 7.008883e-57,
   3.978009e-65, 6.621412e-74, 3.232238e-83, 4.627262e-93, 1.942731e-103, 2.392044e-114, 8.637611e-126, 9.147154e-138, 2.840836e-150, 2.587465e-163, 6.911471e-177, 5.414203e-191, 1.243846e-205, 8.38043e-221, 1.6559e-236, 9.595547e-253,
   1.630697e-269, 8.127272e-287, 1.187912e-304, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraph *graph = new TGraph(125,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",125,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(4.45592);
   Graph_gauss14->SetMaximum(4455.92);
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
   
   Double_t DCB_fx5[111] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25,
   3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25,
   7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[111] = { 0, 5.702265, 5.702265, 5.901284, 6.112753, 6.337815, 6.57775, 6.834004, 7.108206, 7.402206, 7.71811, 8.058323, 8.425605, 8.823138, 9.254607, 9.724304, 10.23725,
   10.79937, 11.41766, 12.10051, 12.85798, 13.70226, 14.64831, 15.71456, 16.92407, 18.30598, 19.89762, 21.74756, 23.92008, 26.5019, 29.61269, 33.42189, 38.17697,
   44.25275, 52.24294, 63.14163, 78.73637, 102.5615, 142.6026, 220.972, 294.6541, 425.2549, 534.9954, 705.8607, 831.2547, 1001.446, 1243.365, 1609.559, 2216.504,
   3377.069, 5810.482, 9273.897, 17496.12, 20680.99, 22117.04, 21399.78, 18733.46, 14837.24, 10631.99, 6892.907, 4044.945, 2522.672, 1780.363, 1350.481, 1074.056,
   883.2836, 744.7266, 558.7403, 441.0632, 302.9216, 225.9512, 144.9078, 103.8542, 79.54961, 63.69406, 52.63939, 44.54924, 38.40594, 33.60332, 29.75951, 26.62282,
   24.02116, 21.83313, 19.97087, 18.3693, 16.97928, 15.76306, 14.6912, 13.74043, 12.89213, 12.13123, 11.44541, 10.82455, 10.26018, 9.745267, 9.273833, 8.840825,
   8.441923, 8.073419, 7.73211, 7.415221, 7.120331, 6.845323, 6.588339, 6.347738, 6.122069, 5.910044, 5.710515, 5.710515, 5.710515, 0 };
   graph = new TGraph(111,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",111,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(24.32875);
   Graph_DCB5->SetMaximum(24328.75);
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
   
   Double_t model_fx6[116] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125,
   -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875,
   0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2,
   2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6,
   6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10,
   10, 10.25, 10.25025 };
   Double_t model_fy6[116] = { 0, 5.702265, 5.702265, 5.901284, 6.112753, 6.337815, 6.57775, 6.834004, 7.108206, 7.402206, 7.71811, 8.058323, 8.425605, 8.823138, 9.254607, 9.724304, 10.23725,
   10.79937, 11.41766, 12.10051, 12.85798, 13.70226, 14.64831, 15.71456, 16.92407, 18.30598, 19.89762, 21.74756, 23.92008, 26.5019, 29.61269, 33.42189, 38.17697,
   44.25275, 52.24294, 63.14163, 78.73637, 102.5623, 142.8031, 236.0627, 377.3122, 522.0359, 758.5332, 1131.61, 1385.81, 1695.234, 2069.36, 2521.633, 3074.961,
   3775.501, 4731.234, 6244.96, 9024.878, 12816.61, 17232.7, 21592.55, 24977.17, 26544.29, 25878.48, 23177.42, 19160.19, 14754.78, 10749.77, 7587.56, 5721.543,
   4623.931, 3842.705, 3231.256, 2730.799, 2313.725, 1964.763, 1673.757, 1234.573, 941.672, 749.478, 534.3011, 341.8853, 236.8929, 169.5144, 124.5314, 93.77979,
   72.36984, 57.21921, 46.32553, 38.36272, 32.44062, 27.95536, 24.49358, 21.76996, 19.58591, 17.80199, 16.3194, 15.06742, 13.99485, 13.06417, 12.24757, 11.52409,
   10.87775, 10.29616, 9.769596, 9.290285, 8.851951, 8.449447, 8.078507, 7.735551, 7.417547, 7.121904, 6.846387, 6.589059, 6.348225, 6.122398, 5.910267, 5.710666,
   5.710666, 5.710666, 0 };
   graph = new TGraph(116,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",116,-12.3003,12.3003);
   Graph_model6->SetMinimum(29.19872);
   Graph_model6->SetMaximum(29198.72);
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
   
   TH1D *frame_tau_d6336c0__4 = new TH1D("frame_tau_d6336c0__4"," ",80,-10,10);
   frame_tau_d6336c0__4->SetBinContent(1,27871.51);
   frame_tau_d6336c0__4->SetMinimum(5);
   frame_tau_d6336c0__4->SetMaximum(1000000);
   frame_tau_d6336c0__4->SetEntries(3);
   frame_tau_d6336c0__4->SetDirectory(nullptr);
   frame_tau_d6336c0__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_d6336c0__4->SetLineColor(ci);
   frame_tau_d6336c0__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_d6336c0__4->GetXaxis()->SetRange(13,68);
   frame_tau_d6336c0__4->GetXaxis()->SetLabelFont(42);
   frame_tau_d6336c0__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_d6336c0__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_d6336c0__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_d6336c0__4->GetXaxis()->SetTitleFont(42);
   frame_tau_d6336c0__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_d6336c0__4->GetYaxis()->SetLabelFont(42);
   frame_tau_d6336c0__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_d6336c0__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_d6336c0__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_d6336c0__4->GetYaxis()->SetTitleFont(42);
   frame_tau_d6336c0__4->GetZaxis()->SetLabelFont(42);
   frame_tau_d6336c0__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_d6336c0__4->GetZaxis()->SetTitleFont(42);
   frame_tau_d6336c0__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"0 < #it{p}_{T}^{#mu#mu} < 1 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 176 / 73 ");
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

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT0_1.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT0_1.png");
}
