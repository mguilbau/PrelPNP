#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT10_15()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 17:01:00 2025) by ROOT version 6.32.06
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
   pad1_TauzPP__1->Range(-5,0.1613412,5,5.537629);
   pad1_TauzPP__1->SetFillColor(0);
   pad1_TauzPP__1->SetBorderMode(0);
   pad1_TauzPP__1->SetBorderSize(2);
   pad1_TauzPP__1->SetLogy();
   pad1_TauzPP__1->SetFrameBorderMode(0);
   pad1_TauzPP__1->SetFrameBorderMode(0);
   
   TH1D *frame_tau_dce2c30__3 = new TH1D("frame_tau_dce2c30__3"," ",80,-10,10);
   frame_tau_dce2c30__3->SetBinContent(1,9834.54);
   frame_tau_dce2c30__3->SetMinimum(5);
   frame_tau_dce2c30__3->SetMaximum(100000);
   frame_tau_dce2c30__3->SetEntries(3);
   frame_tau_dce2c30__3->SetDirectory(nullptr);
   frame_tau_dce2c30__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_dce2c30__3->SetLineColor(ci);
   frame_tau_dce2c30__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_dce2c30__3->GetXaxis()->SetRange(25,56);
   frame_tau_dce2c30__3->GetXaxis()->SetLabelFont(42);
   frame_tau_dce2c30__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_dce2c30__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_dce2c30__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_dce2c30__3->GetXaxis()->SetTitleFont(42);
   frame_tau_dce2c30__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_dce2c30__3->GetYaxis()->SetLabelFont(42);
   frame_tau_dce2c30__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_dce2c30__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_dce2c30__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_dce2c30__3->GetYaxis()->SetTitleFont(42);
   frame_tau_dce2c30__3->GetZaxis()->SetLabelFont(42);
   frame_tau_dce2c30__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_dce2c30__3->GetZaxis()->SetTitleFont(42);
   frame_tau_dce2c30__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2112635, 0, 0, 0, 0, 1.262102,
   -0.851586, 1.224977, 1.251761, 0, 1.995103, 0, 2.117002, 0, 1.654739, 0.6414803, 3.527418, 5.591559, 3.570102, 4.027304, 1.90247, 10.8451,
   3.44256, 4.877467, 3.534231, 4.944471, 17.02005, 24.32544, 2091.512, 2736.546, 479.6675, 229.9323, 130.9869, 72.383, 30.69137, 29.76267, 12.68305, 4.055049,
   -0.2074294, 2.544779, 3.834064, 2.048102, 2.700224, 3.860237, 0, 0.3083193, -0.7116203, 0, 0.3894488, 0, 1.1141, 0, 0, 0,
   1.19751, -0.0819143, 2.006052, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2112635, 0, 0, 0, 0, 1.262102,
   0.851586, 1.224977, 1.251761, 0, 1.410278, 0, 1.517813, 0, 1.795651, 1.280032, 2.348068, 2.639058, 2.324066, 1.99564, 2.371174, 3.611938,
   2.160838, 3.035924, 3.120992, 4.357717, 5.049433, 7.692844, 52.13563, 61.74496, 28.72423, 20.29008, 14.80097, 11.01607, 7.966932, 6.641264, 4.947664, 3.411191,
   2.179595, 2.411698, 2.668468, 1.475805, 1.742207, 2.235287, 0, 0.3083193, 0.7116203, 0, 1.323942, 0, 1.1141, 0, 0, 0,
   1.19751, 0.0819143, 1.430523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2112635, 0, 0, 0, 0, 1.262102,
   0.851586, 1.224977, 1.251761, 0, 1.410278, 0, 1.517813, 0, 1.795651, 1.280032, 2.348068, 2.639058, 2.324066, 1.99564, 2.371174, 3.611938,
   2.160838, 3.035924, 3.120992, 4.357717, 5.049433, 7.692844, 52.13563, 61.74496, 28.72423, 20.29008, 14.80097, 11.01607, 7.966932, 6.641264, 4.947664, 3.411191,
   2.179595, 2.411698, 2.668468, 1.475805, 1.742207, 2.235287, 0, 0.3083193, 0.7116203, 0, 1.323942, 0, 1.1141, 0, 0, 0,
   1.19751, 0.0819143, 1.430523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(3.078205);
   Graph_h_data_sig_cut3002->SetMaximum(3078.205);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.220619e-265, 4.087261e-219,
   5.07261e-177, 2.333337e-139, 3.978052e-106, 2.513682e-77, 5.887041e-53, 5.110115e-33, 1.644036e-17, 1.960373e-06, 0.01475393, 0.4917912, 2.235448, 8.663895, 28.63034, 80.66864, 193.7973, 396.968,
   693.3109, 1032.441, 1310.894, 1419.17, 1309.985, 1031.01, 691.8693, 395.8678, 193.1262, 80.33353, 28.49163, 8.61594, 2.221533, 0.488391, 0.0146316, 1.938732e-06,
   1.616888e-17, 4.997914e-33, 5.725911e-53, 2.431349e-77, 3.826458e-106, 2.231997e-139, 4.825441e-177, 3.866584e-219, 1.148325e-265, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_gauss14->SetMinimum(1.561087);
   Graph_gauss14->SetMaximum(1561.087);
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
   
   Double_t DCB_fx5[98] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0,
   0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.25, 0.5, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25,
   10.25025 };
   Double_t DCB_fy5[98] = { 0, 0.3599055, 0.3599055, 0.3714137, 0.3836054, 0.3965409, 0.4102877, 0.4249216, 0.440528, 0.4572031, 0.4750563, 0.494212, 0.5148123, 0.5370204, 0.5610244, 0.5870425, 0.6153288,
   0.646181, 0.6799502, 0.7170533, 0.7579886, 0.8033565, 0.8538872, 0.9104765, 0.9742353, 1.046557, 1.129212, 1.224483, 1.335362, 1.46584, 1.621361, 1.809534, 2.041307,
   2.332986, 2.709904, 3.213513, 3.916307, 4.956691, 6.633169, 9.718483, 16.94117, 47.77756, 78.15886, 110.5482, 179.3095, 401.3967, 1851.104, 5263.419, 7449.163,
   5247.462, 1839.897, 399.4204, 178.8486, 110.356, 78.05615, 47.73538, 16.9347, 9.716117, 6.631984, 4.955991, 3.91585, 3.213193, 2.709669, 2.332807, 2.041166,
   1.809421, 1.621268, 1.465762, 1.335297, 1.224428, 1.129164, 1.046515, 0.9741984, 0.9104439, 0.8538582, 0.8033305, 0.7579652, 0.7170322, 0.679931, 0.6461635, 0.6153127,
   0.5870278, 0.5610108, 0.5370078, 0.5148007, 0.4942012, 0.4750463, 0.4571937, 0.4405192, 0.4249134, 0.41028, 0.3965336, 0.3835986, 0.3714072, 0.3598994, 0.3598994, 0.3598994,
   0 };
   graph = new TGraph(98,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",100,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(8.194079);
   Graph_DCB5->SetMaximum(8194.079);
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
   
   Double_t model_fx6[104] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t model_fy6[104] = { 0, 0.3599055, 0.3599055, 0.3714137, 0.3836054, 0.3965409, 0.4102877, 0.4249216, 0.440528, 0.4572031, 0.4750563, 0.494212, 0.5148123, 0.5370204, 0.5610244, 0.5870425, 0.6153288,
   0.646181, 0.6799502, 0.7170533, 0.7579886, 0.8033565, 0.8538872, 0.9104765, 0.9742353, 1.046557, 1.129212, 1.224483, 1.335362, 1.46584, 1.621361, 1.809534, 2.041307,
   2.332986, 2.709904, 3.213513, 3.916307, 4.956691, 6.633169, 9.718483, 16.94117, 25.61149, 56.63398, 88.97773, 161.0774, 310.5296, 591.2873, 1129.883, 2975.362,
   6816.381, 9366.229, 7290.157, 3702.554, 1917.51, 1358.676, 1036.608, 839.445, 718.5604, 639.1053, 531.229, 449.5452, 325.2401, 236.6434, 172.7651, 92.86133,
   50.55886, 28.03318, 15.96777, 9.454999, 5.900112, 3.927755, 2.807154, 2.148925, 1.744817, 1.482876, 1.302476, 1.17044, 1.068344, 0.9857428, 0.9165493, 0.857087,
   0.8050381, 0.7588682, 0.7175097, 0.6801836, 0.646297, 0.6153834, 0.5870651, 0.5610306, 0.5370183, 0.5148062, 0.4942041, 0.4750478, 0.4571946, 0.4405197, 0.4249137, 0.4102801,
   0.3965337, 0.3835986, 0.3714073, 0.3598994, 0.3598994, 0.3598994, 0 };
   graph = new TGraph(104,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",104,-12.3003,12.3003);
   Graph_model6->SetMinimum(10.30285);
   Graph_model6->SetMaximum(10302.85);
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
   
   TH1D *frame_tau_dce2c30__4 = new TH1D("frame_tau_dce2c30__4"," ",80,-10,10);
   frame_tau_dce2c30__4->SetBinContent(1,9834.54);
   frame_tau_dce2c30__4->SetMinimum(5);
   frame_tau_dce2c30__4->SetMaximum(100000);
   frame_tau_dce2c30__4->SetEntries(3);
   frame_tau_dce2c30__4->SetDirectory(nullptr);
   frame_tau_dce2c30__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_dce2c30__4->SetLineColor(ci);
   frame_tau_dce2c30__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_dce2c30__4->GetXaxis()->SetRange(25,56);
   frame_tau_dce2c30__4->GetXaxis()->SetLabelFont(42);
   frame_tau_dce2c30__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_dce2c30__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_dce2c30__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_dce2c30__4->GetXaxis()->SetTitleFont(42);
   frame_tau_dce2c30__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_dce2c30__4->GetYaxis()->SetLabelFont(42);
   frame_tau_dce2c30__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_dce2c30__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_dce2c30__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_dce2c30__4->GetYaxis()->SetTitleFont(42);
   frame_tau_dce2c30__4->GetZaxis()->SetLabelFont(42);
   frame_tau_dce2c30__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_dce2c30__4->GetZaxis()->SetTitleFont(42);
   frame_tau_dce2c30__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"10 GeV/c < #it{p}_{T}^{#mu#mu} < 15 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 21 / 34 ");
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

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT10_15.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT10_15.png");
}
