#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauzFig_PP_pT1_2()
{
//=========Macro generated from canvas: cTauzFig_PP/cTauzFig
//=========  (Mon Mar 31 21:09:40 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_tau_12b26da0__3 = new TH1D("frame_tau_12b26da0__3"," ",80,-10,10);
   frame_tau_12b26da0__3->SetBinContent(1,55299.14);
   frame_tau_12b26da0__3->SetMinimum(5);
   frame_tau_12b26da0__3->SetMaximum(1000000);
   frame_tau_12b26da0__3->SetEntries(3);
   frame_tau_12b26da0__3->SetDirectory(nullptr);
   frame_tau_12b26da0__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_12b26da0__3->SetLineColor(ci);
   frame_tau_12b26da0__3->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_12b26da0__3->GetXaxis()->SetRange(13,68);
   frame_tau_12b26da0__3->GetXaxis()->SetLabelFont(42);
   frame_tau_12b26da0__3->GetXaxis()->SetLabelSize(0.04);
   frame_tau_12b26da0__3->GetXaxis()->SetTitleSize(0.045);
   frame_tau_12b26da0__3->GetXaxis()->SetTitleOffset(1);
   frame_tau_12b26da0__3->GetXaxis()->SetTitleFont(42);
   frame_tau_12b26da0__3->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_12b26da0__3->GetYaxis()->SetLabelFont(42);
   frame_tau_12b26da0__3->GetYaxis()->SetLabelSize(0.04);
   frame_tau_12b26da0__3->GetYaxis()->SetTitleSize(0.045);
   frame_tau_12b26da0__3->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_12b26da0__3->GetYaxis()->SetTitleFont(42);
   frame_tau_12b26da0__3->GetZaxis()->SetLabelFont(42);
   frame_tau_12b26da0__3->GetZaxis()->SetTitleOffset(1);
   frame_tau_12b26da0__3->GetZaxis()->SetTitleFont(42);
   frame_tau_12b26da0__3->Draw("FUNC");
   
   Double_t h_data_sig_cut_fx3002[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_sig_cut_fy3002[80] = { 6.026559, 5.774888, 10.09852, -0.742919, 8.605408, 5.052071, 15.15074, 6.004257, 13.51463, 12.86648, 12.54893, 10.45739, 15.55768, 19.18538, 15.14684, 17.57696, 17.06584,
   29.53599, 22.50402, 26.23669, 17.26714, 27.02604, 32.06574, 31.18741, 31.33499, 34.47733, 47.51411, 39.74324, 63.65771, 55.36591, 43.66241, 60.13506, 65.69408,
   77.12428, 106.3404, 153.456, 262.2512, 665.5563, 2497.92, 25464.22, 26135.47, 3436.762, 1355.703, 758.3976, 469.6003, 293.1523, 233.2957, 156.7746, 95.7602,
   70.98892, 58.59736, 32.1893, 43.35847, 34.53499, 13.02835, 20.67237, 29.36035, 26.05785, 20.94213, 30.54199, 7.884268, 25.07591, 11.20724, 13.9369, 12.6097,
   12.19349, 14.83271, -2.368648, 3.181471, 11.21887, 6.418387, 5.75549, 9.528259, 7.918184, 12.29526, 18.08892, 4.103748, 5.603192, 2.205297, 9.38852 };
   Double_t h_data_sig_cut_felx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fely3002[80] = { 3.850435, 3.424243, 4.450331, 3.142354, 4.242412, 3.935651, 4.936092, 4.479361, 4.838465, 4.875299, 5.235268, 5.362892, 5.629843, 5.637359, 5.670704, 6.067494, 6.439964,
   7.203016, 7.043886, 7.666498, 6.70911, 7.974645, 8.04625, 8.276692, 8.584459, 9.31949, 10.89395, 10.45043, 11.23744, 11.38415, 11.95522, 12.85711, 13.84746,
   15.53044, 17.09332, 20.05393, 25.01139, 36.42804, 66.36618, 191.4172, 200.8679, 84.88077, 55.3979, 41.19029, 32.63409, 26.02864, 22.86553, 19.15457, 16.5955,
   14.97332, 13.11524, 11.00788, 11.39613, 10.77964, 9.120193, 9.371112, 9.315715, 8.967008, 7.397043, 7.933748, 6.383879, 7.574332, 6.563359, 6.26314, 5.858024,
   5.831206, 6.524829, 4.907266, 4.120356, 5.056294, 4.479587, 4.114844, 4.569495, 4.466128, 4.902346, 5.441191, 3.634079, 3.640194, 3.759386, 3.936204 };
   Double_t h_data_sig_cut_fehx3002[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_sig_cut_fehy3002[80] = { 3.850435, 3.424243, 4.450331, 3.142354, 4.242412, 3.935651, 4.936092, 4.479361, 4.838465, 4.875299, 5.235268, 5.362892, 5.629843, 5.637359, 5.670704, 6.067494, 6.439964,
   7.203016, 7.043886, 7.666498, 6.70911, 7.974645, 8.04625, 8.276692, 8.584459, 9.31949, 10.89395, 10.45043, 11.23744, 11.38415, 11.95522, 12.85711, 13.84746,
   15.53044, 17.09332, 20.05393, 25.01139, 36.42804, 66.36618, 191.4172, 200.8679, 84.88077, 55.3979, 41.19029, 32.63409, 26.02864, 22.86553, 19.15457, 16.5955,
   14.97332, 13.11524, 11.00788, 11.39613, 10.77964, 9.120193, 9.371112, 9.315715, 8.967008, 7.397043, 7.933748, 6.383879, 7.574332, 6.563359, 6.26314, 5.858024,
   5.831206, 6.524829, 4.907266, 4.120356, 5.056294, 4.479587, 4.114844, 4.569495, 4.466128, 4.902346, 5.441191, 3.634079, 3.640194, 3.759386, 3.936204 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_sig_cut_fx3002,h_data_sig_cut_fy3002,h_data_sig_cut_felx3002,h_data_sig_cut_fehx3002,h_data_sig_cut_fely3002,h_data_sig_cut_fehy3002);
   grae->SetName("h_data_sig_cut");
   grae->SetTitle("Histogram of data_sig_cut_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data_sig_cut3002 = new TH1F("Graph_h_data_sig_cut3002","Histogram of data_sig_cut_plot__tau",100,-12,12);
   Graph_h_data_sig_cut3002->SetMinimum(28.97005);
   Graph_h_data_sig_cut3002->SetMaximum(28970.05);
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
   
   Double_t gauss1_fx4[117] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.46875, -0.4375, -0.40625, -0.375, -0.34375, -0.3125,
   -0.28125, -0.25, -0.21875, -0.1875, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875,
   0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.5625, 0.625, 0.75, 1, 1.25, 1.5, 1.75,
   2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75,
   6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75,
   10, 10, 10.25, 10.25025 };
   Double_t gauss1_fy4[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 1.076255e-296, 3.214322e-272, 8.732011e-249, 2.157695e-226, 4.849723e-205, 9.915045e-185, 1.843841e-165, 3.118911e-147, 4.79881e-130, 6.716067e-114, 8.549632e-99, 9.899899e-85, 1.042714e-71, 9.989649e-60, 8.705353e-49,
   6.900387e-39, 4.975211e-30, 3.262875e-22, 1.946437e-15, 1.056163e-09, 5.212821e-05, 0.2340267, 6.38162, 26.6168, 95.56725, 171.1921, 295.3864, 490.9409, 785.9592, 1212.001, 1800.27,
   2575.756, 3549.798, 4712.319, 6025.564, 8804.81, 10061.88, 11075.68, 11743.4, 11993.59, 11798.76, 11180.36, 10204.87, 8972.035, 7598.126, 6198.037, 4870.054,
   3685.917, 2687.134, 1886.97, 1276.359, 831.5968, 521.8969, 315.4923, 183.7066, 103.0369, 28.96844, 7.011091, 0.2619939, 6.059549e-05, 1.274795e-09, 2.439448e-15, 4.246132e-22,
   6.722742e-30, 9.681671e-39, 1.268251e-48, 1.511161e-59, 1.637825e-71, 1.614638e-84, 1.447884e-98, 1.180982e-113, 8.762006e-130, 5.913095e-147, 3.629754e-165, 2.026704e-184, 1.02933e-204, 4.755208e-226, 1.998184e-248, 7.637522e-272,
   2.655341e-296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0 };
   TGraph *graph = new TGraph(117,gauss1_fx4,gauss1_fy4);
   graph->SetName("gauss1");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_gauss14 = new TH1F("Graph_gauss14","Projection of ",117,-12.3003,12.3003);
   Graph_gauss14->SetMinimum(13.19295);
   Graph_gauss14->SetMaximum(13192.95);
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
   
   Double_t DCB_fx5[110] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.375, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5,
   3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5,
   7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25, 10.25025 };
   Double_t DCB_fy5[110] = { 0, 6.656255, 6.656255, 6.918941, 7.199265, 7.498926, 7.819839, 8.16417, 8.534378, 8.93326, 9.364017, 9.830323, 10.33641, 10.88719, 11.48838, 12.14665, 12.86987,
   13.66736, 14.55021, 15.53177, 16.62814, 17.859, 19.24857, 20.82696, 22.63204, 24.71201, 27.12911, 29.96485, 33.32795, 37.36625, 42.28539, 48.37899, 56.07943,
   66.0472, 79.33716, 97.72951, 124.4472, 165.8921, 236.5275, 375.9605, 506.6295, 734.4993, 921.0926, 1201.834, 1659.45, 2009.16, 2500.492, 3228.725, 4390.646,
   6456.686, 10837.02, 19009.8, 28495.31, 36473.18, 39863.75, 37203.77, 29648.33, 20175.19, 11723.02, 6829.516, 4585.336, 3344.923, 2576.217, 2061.68, 1697.607,
   1224.107, 935.3891, 744.3061, 511.9159, 379.1801, 238.0184, 166.7194, 124.9606, 98.07329, 79.5804, 66.22666, 56.21624, 48.48608, 42.37105, 37.43603, 33.38567,
   30.01323, 27.17014, 24.74716, 22.66242, 20.85343, 19.2718, 17.87952, 16.64637, 15.54804, 14.56482, 13.68052, 12.88179, 12.15747, 11.49825, 10.89623, 10.3447,
   9.837947, 9.371051, 8.939766, 8.540409, 8.169774, 7.825057, 7.503793, 7.203814, 6.923201, 6.66025, 6.66025, 6.66025, 0 };
   graph = new TGraph(110,DCB_fx5,DCB_fy5);
   graph->SetName("DCB");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_DCB5 = new TH1F("Graph_DCB5","Projection of ",110,-12.3003,12.3003);
   Graph_DCB5->SetMinimum(43.85012);
   Graph_DCB5->SetMaximum(43850.12);
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
   
   Double_t model_fx6[114] = { -10.25025, -10.25, -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5,
   -6.25, -6, -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5,
   -2.25, -2, -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25,
   -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10, 10.25,
   10.25025 };
   Double_t model_fy6[114] = { 0, 6.656255, 6.656255, 6.918941, 7.199265, 7.498926, 7.819839, 8.16417, 8.534378, 8.93326, 9.364017, 9.830323, 10.33641, 10.88719, 11.48838, 12.14665, 12.86987,
   13.66736, 14.55021, 15.53177, 16.62814, 17.859, 19.24857, 20.82696, 22.63204, 24.71201, 27.12911, 29.96485, 33.32795, 37.36625, 42.28539, 48.37899, 56.07943,
   66.0472, 79.33716, 97.72951, 124.4472, 165.8921, 236.5275, 376.1955, 513.0411, 830.6059, 1218.33, 1540.241, 1993.317, 2621.291, 3474.131, 4607.148, 6083.808,
   7991.018, 10491.13, 13992.74, 19820.35, 29349.97, 39992.52, 48821.19, 52665.85, 50005.71, 41988.09, 31640.73, 22002.05, 15737.75, 12068.48, 9459.396, 7458.1,
   5892.867, 4675.48, 3743.081, 3041.142, 2520.115, 2136.216, 1640.552, 1153.853, 887.2895, 562.8849, 374.5338, 257.8977, 183.112, 133.9789, 101.0249, 78.47641,
   62.72572, 51.48003, 43.26296, 37.11311, 32.39764, 28.69543, 25.72288, 23.28658, 21.2527, 19.52721, 18.0429, 16.75088, 15.6149, 14.60759, 13.70788, 12.89929,
   12.16867, 11.50541, 10.90081, 10.34763, 9.839822, 9.37225, 8.940533, 8.5409, 8.170088, 7.825258, 7.503922, 7.203897, 6.923253, 6.660284, 6.660284, 6.660284,
   0 };
   graph = new TGraph(114,model_fx6,model_fy6);
   graph->SetName("model");
   graph->SetTitle("Projection of ");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model6 = new TH1F("Graph_model6","Projection of ",114,-12.3003,12.3003);
   Graph_model6->SetMinimum(57.93244);
   Graph_model6->SetMaximum(57932.44);
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
   
   TH1D *frame_tau_12b26da0__4 = new TH1D("frame_tau_12b26da0__4"," ",80,-10,10);
   frame_tau_12b26da0__4->SetBinContent(1,55299.14);
   frame_tau_12b26da0__4->SetMinimum(5);
   frame_tau_12b26da0__4->SetMaximum(1000000);
   frame_tau_12b26da0__4->SetEntries(3);
   frame_tau_12b26da0__4->SetDirectory(nullptr);
   frame_tau_12b26da0__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_12b26da0__4->SetLineColor(ci);
   frame_tau_12b26da0__4->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_12b26da0__4->GetXaxis()->SetRange(13,68);
   frame_tau_12b26da0__4->GetXaxis()->SetLabelFont(42);
   frame_tau_12b26da0__4->GetXaxis()->SetLabelSize(0.04);
   frame_tau_12b26da0__4->GetXaxis()->SetTitleSize(0.045);
   frame_tau_12b26da0__4->GetXaxis()->SetTitleOffset(1);
   frame_tau_12b26da0__4->GetXaxis()->SetTitleFont(42);
   frame_tau_12b26da0__4->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_12b26da0__4->GetYaxis()->SetLabelFont(42);
   frame_tau_12b26da0__4->GetYaxis()->SetLabelSize(0.04);
   frame_tau_12b26da0__4->GetYaxis()->SetTitleSize(0.045);
   frame_tau_12b26da0__4->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_12b26da0__4->GetYaxis()->SetTitleFont(42);
   frame_tau_12b26da0__4->GetZaxis()->SetLabelFont(42);
   frame_tau_12b26da0__4->GetZaxis()->SetTitleOffset(1);
   frame_tau_12b26da0__4->GetZaxis()->SetTitleFont(42);
   frame_tau_12b26da0__4->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"1 GeV/c < #it{p}_{T}^{#mu#mu} < 2 GeV/c");
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
      tex = new TLatex(0.15,0.59,"#chi^{2}/ndof = 110 / 76 ");
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

   cTauzFig_PP->SaveAs("../pdf/cTauzFig_PP_pT1_2.pdf");
   cTauzFig_PP->SaveAs("../png/cTauzFig_PP_pT1_2.png");
}
