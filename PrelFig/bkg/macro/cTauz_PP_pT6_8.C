#ifdef __CLING__
#pragma cling optimize(0)
#endif
void cTauz_PP_pT6_8()
{
//=========Macro generated from canvas: cTauz_PP/cTauz
//=========  (Mon Mar 31 17:21:45 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_tau_10cfae40__5 = new TH1D("frame_tau_10cfae40__5"," ",80,-10,10);
   frame_tau_10cfae40__5->SetBinContent(1,5067.459);
   frame_tau_10cfae40__5->SetMinimum(4);
   frame_tau_10cfae40__5->SetMaximum(50000);
   frame_tau_10cfae40__5->SetEntries(2);
   frame_tau_10cfae40__5->SetDirectory(nullptr);
   frame_tau_10cfae40__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10cfae40__5->SetLineColor(ci);
   frame_tau_10cfae40__5->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10cfae40__5->GetXaxis()->SetRange(25,56);
   frame_tau_10cfae40__5->GetXaxis()->SetLabelFont(42);
   frame_tau_10cfae40__5->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10cfae40__5->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10cfae40__5->GetXaxis()->SetTitleOffset(1);
   frame_tau_10cfae40__5->GetXaxis()->SetTitleFont(42);
   frame_tau_10cfae40__5->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10cfae40__5->GetYaxis()->SetLabelFont(42);
   frame_tau_10cfae40__5->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10cfae40__5->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10cfae40__5->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_10cfae40__5->GetYaxis()->SetTitleFont(42);
   frame_tau_10cfae40__5->GetZaxis()->SetLabelFont(42);
   frame_tau_10cfae40__5->GetZaxis()->SetTitleOffset(1);
   frame_tau_10cfae40__5->GetZaxis()->SetTitleFont(42);
   frame_tau_10cfae40__5->Draw("FUNC");
   
   Double_t h_dataw_bkg_fx3003[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_dataw_bkg_fy3003[80] = { 0, -0.09915806, -0.1107485, -0.1507399, 0, 0, 0, -0.152727, 0, 1.344846, 2.721791, 0.3666843, 1.742453, 2.441796, 2.073218, 0.5199919, 5.466528,
   0.9875826, 1.265958, 0.9073922, 3.157912, 3.616435, 1.132477, 2.67064, 6.140283, 3.000124, 6.592739, 7.073522, 6.080127, 7.264383, 14.90724, 15.21245, 21.24319,
   16.07462, 33.14211, 43.46571, 55.44152, 94.65218, 215.4248, 1689.147, 3053.458, 1052.654, 504.1132, 299.1156, 163.1113, 104.28, 76.20728, 40.73929, 31.93942,
   26.30836, 20.96514, 15.9177, 17.20075, 10.14994, 4.953019, 6.653794, 0.5097356, 3.137261, 3.852284, 8.173996, 4.267032, 1.456748, 3.51813, 2.568617, 1.027935,
   1.323558, 0.02077538, 0, 0.02993081, 0, -0.1442195, 0, 0.3913558, 0, 0, 1.460057, 0, 0.985513, 0, 0 };
   Double_t h_dataw_bkg_felx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fely3003[80] = { 0, 0.09915807, 0.1107485, 0.1507399, 0, 0, 0, 0.152727, 0, 1.344846, 2.130351, 0.538289, 1.616873, 2.025195, 1.689539, 0.6699505, 2.806986,
   1.166073, 1.617414, 1.014442, 2.269143, 2.25768, 1.321644, 1.777882, 2.537129, 2.20075, 2.744353, 3.273303, 3.197275, 3.567924, 4.710449, 4.781659, 5.528941,
   4.73252, 6.828006, 7.746511, 8.512913, 11.52827, 17.62084, 54.25976, 71.32596, 39.84363, 27.35105, 21.29387, 15.54126, 12.48281, 10.53285, 7.515106, 6.779771,
   6.341798, 5.486283, 4.922748, 5.08169, 3.815486, 2.788959, 3.096281, 1.060952, 2.273517, 2.461366, 3.395219, 2.456265, 1.616671, 2.174032, 1.912714, 1.211169,
   1.351614, 0.323858, 0, 0.02993081, 0, 0.1442195, 0, 0.5186929, 0, 0, 1.618662, 0, 0.985513, 0, 0 };
   Double_t h_dataw_bkg_fehx3003[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_dataw_bkg_fehy3003[80] = { 0, 0.09915807, 0.1107485, 0.1507399, 0, 0, 0, 0.152727, 0, 1.344846, 2.130351, 0.538289, 1.616873, 2.025195, 1.689539, 0.6699505, 2.806986,
   1.166073, 1.617414, 1.014442, 2.269143, 2.25768, 1.321644, 1.777882, 2.537129, 2.20075, 2.744353, 3.273303, 3.197275, 3.567924, 4.710449, 4.781659, 5.528941,
   4.73252, 6.828006, 7.746511, 8.512913, 11.52827, 17.62084, 54.25976, 71.32596, 39.84363, 27.35105, 21.29387, 15.54126, 12.48281, 10.53285, 7.515106, 6.779771,
   6.341798, 5.486283, 4.922748, 5.08169, 3.815486, 2.788959, 3.096281, 1.060952, 2.273517, 2.461366, 3.395219, 2.456265, 1.616671, 2.174032, 1.912714, 1.211169,
   1.351614, 0.323858, 0, 0.02993081, 0, 0.1442195, 0, 0.5186929, 0, 0, 1.618662, 0, 0.985513, 0, 0 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_dataw_bkg_fx3003,h_dataw_bkg_fy3003,h_dataw_bkg_felx3003,h_dataw_bkg_fehx3003,h_dataw_bkg_fely3003,h_dataw_bkg_fehy3003);
   grae->SetName("h_dataw_bkg");
   grae->SetTitle("Histogram of dataw_bkg_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_dataw_bkg3003 = new TH1F("Graph_h_dataw_bkg3003","Histogram of dataw_bkg_plot__tau",100,-12,12);
   Graph_h_dataw_bkg3003->SetMinimum(3.437278);
   Graph_h_dataw_bkg3003->SetMaximum(3437.278);
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
   
   Double_t exp_DDS_fx7[103] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.875, -1.75, -1.625, -1.5, -1.375, -1.25, -1.125, -1, -0.875, -0.75, -0.625, -0.5, -0.375, -0.25, -0.125, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.375,
   1.5, 1.625, 1.75, 1.875, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t exp_DDS_fy7[103] = { 0.069765, 0.08354109, 0.1000375, 0.1197913, 0.1434458, 0.1717712, 0.2056898, 0.2463062, 0.2949429, 0.3531835, 0.4229246, 0.5064371, 0.6064403, 0.7261905, 0.8695872, 1.0413, 1.246919,
   1.493141, 1.787983, 2.141045, 2.563825, 3.070089, 3.676321, 4.402263, 5.271552, 6.312495, 7.558987, 9.051616, 10.83899, 12.9793, 15.54225, 18.61128, 22.28634,
   24.38766, 26.6871, 29.20335, 31.95685, 34.96996, 38.26718, 41.87528, 45.82358, 50.14415, 54.87209, 60.04582, 65.70737, 71.90272, 78.68214, 86.07405, 89.84857,
   91.55885, 92.88149, 93.50099, 93.2165, 92.12483, 90.52792, 83.01364, 75.86409, 69.32741, 63.35395, 57.89519, 52.90676, 48.34816, 44.18233, 40.37545, 36.89658,
   33.71746, 30.81226, 28.15738, 25.73126, 23.51418, 19.63664, 16.39852, 13.69437, 11.43614, 9.550301, 7.975438, 6.660272, 5.56198, 4.644799, 3.878862, 3.23923,
   2.705075, 2.259003, 1.886489, 1.575403, 1.315616, 1.098668, 0.9174957, 0.7661989, 0.6398512, 0.5343385, 0.446225, 0.3726416, 0.3111923, 0.2598761, 0.217022, 0.1812346,
   0.1513487, 0.126391, 0.1055489, 0.08814365, 0.07360859, 0.07360859 };
   TGraph *graph = new TGraph(103,exp_DDS_fx7,exp_DDS_fy7);
   graph->SetName("exp_DDS");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_DDS7 = new TH1F("Graph_exp_DDS7","Projection of model2",103,-12,12);
   Graph_exp_DDS7->SetMinimum(0.0627885);
   Graph_exp_DDS7->SetMaximum(102.8441);
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
   
   Double_t model1_fx8[119] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.125,
   1.25, 1.375, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75,
   5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75,
   9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model1_fy8[119] = { 1.54959e-36, 1.494738e-35, 1.441828e-34, 1.390791e-33, 1.34156e-32, 1.294072e-31, 1.248265e-30, 1.204079e-29, 1.161458e-28, 1.120345e-27, 1.080687e-26, 1.042434e-25, 1.005534e-24, 9.699404e-24, 9.356068e-23, 9.024886e-22, 8.705426e-21,
   8.397275e-20, 8.100031e-19, 7.813309e-18, 7.536737e-17, 7.269954e-16, 7.012615e-15, 6.764385e-14, 6.524942e-13, 6.293975e-12, 6.071183e-11, 5.856277e-10, 5.648979e-09, 5.449019e-08, 5.256136e-07, 5.070082e-06, 4.890613e-05,
   0.0004717497, 0.004550508, 0.04389431, 0.4234056, 4.08418, 12.68467, 22.35456, 39.3961, 69.42891, 92.16878, 122.3566, 162.4315, 215.6302, 286.2418, 379.9197, 504.0014,
   667.6542, 881.4418, 1155.667, 1496.1, 1892.186, 2290.797, 2578.933, 2646.076, 2501.131, 2265.179, 2038.756, 1846.541, 1680.53, 1533.232, 1400.822, 1280.838,
   1171.535, 1071.691, 980.3906, 896.8761, 820.4772, 750.5864, 686.6491, 574.6497, 480.9186, 402.476, 336.8281, 281.888, 235.9093, 197.4301, 165.2273, 115.7227,
   81.05041, 56.76647, 39.75838, 19.50303, 9.566995, 4.692983, 2.302091, 1.129265, 0.5539484, 0.2717332, 0.1332957, 0.06538673, 0.03207474, 0.01573391, 0.007718093, 0.003786025,
   0.001857192, 0.0009110251, 0.0004468932, 0.0002192185, 0.0001075352, 5.27502e-05, 2.587602e-05, 1.26932e-05, 6.226507e-06, 3.054344e-06, 1.498274e-06, 7.349618e-07, 3.605274e-07, 1.768527e-07, 8.675312e-08, 4.255578e-08,
   2.087527e-08, 1.024013e-08, 5.023182e-09, 2.464066e-09, 1.20872e-09, 1.20872e-09 };
   graph = new TGraph(119,model1_fx8,model1_fy8);
   graph->SetName("model1");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model18 = new TH1F("Graph_model18","Projection of model2",119,-12,12);
   Graph_model18->SetMinimum(1.394631e-36);
   Graph_model18->SetMaximum(2910.683);
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
   
   Double_t resolution_bkg_fx9[99] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5, 0.75, 1, 1.25, 1.5, 1.75,
   2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75,
   6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75,
   10, 10 };
   Double_t resolution_bkg_fy9[99] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.997796e-290, 5.645196e-240, 1.271297e-194, 5.707983e-154,
   5.109587e-118, 9.119193e-87, 3.244849e-60, 2.301973e-38, 3.255917e-21, 9.181508e-09, 0.5162084, 2.24444, 8.246539, 25.71714, 69.42253, 171.08, 408.0375, 903.4175, 1616.624, 2086.575,
   1858.744, 1165.094, 560.8855, 238.8975, 98.53534, 38.10356, 12.95783, 3.757535, 0.9215801, 0.03339167, 5.761717e-06, 5.118352e-17, 9.06517e-33, 3.201026e-53, 2.253565e-78, 3.16314e-108,
   8.851854e-143, 4.938757e-182, 5.493745e-226, 1.218392e-274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0 };
   graph = new TGraph(99,resolution_bkg_fx9,resolution_bkg_fy9);
   graph->SetName("resolution_bkg");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_resolution_bkg9 = new TH1F("Graph_resolution_bkg9","Projection of model2",100,-12,12);
   Graph_resolution_bkg9->SetMinimum(2.295233);
   Graph_resolution_bkg9->SetMaximum(2295.233);
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
   
   Double_t model2_fx10[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy10[113] = { 0.069765, 0.08354109, 0.1000375, 0.1197913, 0.1434458, 0.1717712, 0.2056898, 0.2463062, 0.2949429, 0.3531835, 0.4229246, 0.5064371, 0.6064403, 0.7261905, 0.8695872, 1.0413, 1.246919,
   1.493141, 1.787983, 2.141045, 2.563825, 3.070089, 3.676321, 4.402263, 5.271552, 6.312495, 7.558987, 9.051616, 10.83899, 12.9793, 15.54225, 18.61129, 22.28639,
   26.68757, 31.9614, 38.31107, 46.24698, 58.95627, 72.73049, 105.1035, 138.1642, 194.2596, 235.9745, 290.8628, 363.2717, 459.118, 586.7202, 758.2067, 991.3341,
   1311.163, 1755.161, 2390.072, 3285.774, 4288.439, 4826.152, 4453.092, 3522.398, 2690.17, 2174.14, 1865.867, 1656.231, 1496.794, 1365.763, 1251.816, 1149.474,
   1056.288, 892.9999, 755.9765, 640.9232, 544.2726, 463.0391, 394.7233, 337.2328, 288.816, 213.5754, 159.905, 121.4259, 73.47584, 47.66041, 33.08117, 24.32963,
   18.70061, 14.82364, 11.99009, 9.822034, 8.108733, 6.725659, 5.594055, 4.660533, 3.88658, 3.243016, 2.706932, 2.259914, 1.886936, 1.575622, 1.315724, 1.098721,
   0.9175216, 0.7662116, 0.6398574, 0.5343415, 0.4462265, 0.3726424, 0.3111926, 0.2598762, 0.2170221, 0.1812347, 0.1513487, 0.126391, 0.1055489, 0.08814366, 0.07360859, 0.07360859 };
   graph = new TGraph(113,model2_fx10,model2_fy10);
   graph->SetName("model2");
   graph->SetTitle("Projection of model2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model210 = new TH1F("Graph_model210","Projection of model2",113,-12,12);
   Graph_model210->SetMinimum(0.0627885);
   Graph_model210->SetMaximum(5308.76);
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
   
   TH1D *frame_tau_10cfae40__6 = new TH1D("frame_tau_10cfae40__6"," ",80,-10,10);
   frame_tau_10cfae40__6->SetBinContent(1,5067.459);
   frame_tau_10cfae40__6->SetMinimum(4);
   frame_tau_10cfae40__6->SetMaximum(50000);
   frame_tau_10cfae40__6->SetEntries(2);
   frame_tau_10cfae40__6->SetDirectory(nullptr);
   frame_tau_10cfae40__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10cfae40__6->SetLineColor(ci);
   frame_tau_10cfae40__6->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10cfae40__6->GetXaxis()->SetRange(25,56);
   frame_tau_10cfae40__6->GetXaxis()->SetLabelFont(42);
   frame_tau_10cfae40__6->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10cfae40__6->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10cfae40__6->GetXaxis()->SetTitleOffset(1);
   frame_tau_10cfae40__6->GetXaxis()->SetTitleFont(42);
   frame_tau_10cfae40__6->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10cfae40__6->GetYaxis()->SetLabelFont(42);
   frame_tau_10cfae40__6->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10cfae40__6->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10cfae40__6->GetYaxis()->SetTitleOffset(0.99);
   frame_tau_10cfae40__6->GetYaxis()->SetTitleFont(42);
   frame_tau_10cfae40__6->GetZaxis()->SetLabelFont(42);
   frame_tau_10cfae40__6->GetZaxis()->SetTitleOffset(1);
   frame_tau_10cfae40__6->GetZaxis()->SetTitleFont(42);
   frame_tau_10cfae40__6->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.74,"6 GeV/c < #it{p}_{T}^{#mu#mu} < 8 GeV/c");
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
      tex = new TLatex(0.15,0.64,"#chi^{2}/ndof = 52 / 53 ");
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
