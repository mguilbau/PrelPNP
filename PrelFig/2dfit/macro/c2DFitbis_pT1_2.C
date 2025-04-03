#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT1_2()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 21:10:09 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",200,1103,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-8.75,-0.0886588,8.75,7.787629);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_13745b90__7 = new TH1D("frame_tau_13745b90__7"," ",80,-10,10);
   frame_tau_13745b90__7->SetBinContent(1,97299.35);
   frame_tau_13745b90__7->SetMinimum(5);
   frame_tau_13745b90__7->SetMaximum(1e+07);
   frame_tau_13745b90__7->SetEntries(2);
   frame_tau_13745b90__7->SetDirectory(nullptr);
   frame_tau_13745b90__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_13745b90__7->SetLineColor(ci);
   frame_tau_13745b90__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_13745b90__7->GetXaxis()->SetRange(13,68);
   frame_tau_13745b90__7->GetXaxis()->SetLabelFont(42);
   frame_tau_13745b90__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_13745b90__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_13745b90__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_13745b90__7->GetXaxis()->SetTitleFont(42);
   frame_tau_13745b90__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_13745b90__7->GetYaxis()->SetLabelFont(42);
   frame_tau_13745b90__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_13745b90__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_13745b90__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_13745b90__7->GetYaxis()->SetTitleFont(42);
   frame_tau_13745b90__7->GetZaxis()->SetLabelFont(42);
   frame_tau_13745b90__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_13745b90__7->GetZaxis()->SetTitleFont(42);
   frame_tau_13745b90__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 32, 22, 30, 33, 34, 32, 36, 46, 41, 48, 52, 60, 60, 49, 58, 73, 95,
   88, 97, 113, 111, 132, 128, 150, 185, 205, 246, 246, 261, 296, 356, 386, 462,
   601, 711, 931, 1360, 2581, 7469, 47703, 57679, 13871, 6218, 3478, 2102, 1434, 1076, 745, 608,
   519, 408, 308, 305, 261, 239, 211, 207, 189, 125, 130, 110, 110, 107, 86, 75,
   74, 88, 77, 42, 54, 50, 40, 37, 43, 45, 45, 27, 26, 37, 22 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 5.627135, 4.654502, 5.446522, 5.715302, 5.802128, 5.627135, 5.971996, 6.757581, 6.376898, 6.903979, 7.187836, 7.724317, 7.724317, 6.976026, 7.593751, 8.524388, 9.729612,
   9.362975, 9.831854, 10.1419, 10.04751, 11, 10.82475, 11.75765, 13.11066, 13.82655, 15.19235, 15.19235, 15.66323, 16.71191, 18.37459, 19.15324, 21,
   24.0204, 26.16927, 30.01639, 36.38157, 50.306, 85.92482, 217.9107, 239.665, 117.2763, 78.35588, 58.47669, 45.3503, 37.37149, 32.30625, 26.79927, 24.16272,
   22.28706, 19.7052, 17.05705, 16.97141, 15.66323, 14.96771, 14.03444, 13.89618, 13.25682, 10.69151, 10.91271, 10, 10, 9.856158, 9.255555, 8.640903,
   8.582844, 9.362975, 8.755868, 6.454831, 7.32564, 7.047337, 6.298, 6.055143, 6.531834, 6.683179, 6.683179, 5.163771, 5.066015, 6.055143, 4.654502 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 6.715753, 5.761366, 6.538046, 6.802567, 6.888101, 6.715753, 7.055545, 7.831489, 7.455185, 7.97633, 8.257346, 8.789023, 8.789023, 8.047634, 8.659564, 9.583044, 10.78102,
   10.41639, 10.88273, 11.1419, 11.04751, 12, 11.82475, 12.75765, 14.11066, 14.82655, 16.19235, 16.19235, 16.66323, 17.71191, 19.37459, 20.15324, 22,
   25.0204, 27.16927, 31.01639, 37.38157, 51.306, 86.92482, 218.9107, 240.665, 118.2763, 79.35588, 59.47669, 46.3503, 38.37149, 33.30625, 27.79927, 25.16272,
   23.28706, 20.7052, 18.05705, 17.97141, 16.66323, 15.96771, 15.03444, 14.89618, 14.25682, 11.69151, 11.91271, 11, 11, 10.85616, 10.30959, 9.698771,
   9.641101, 10.41639, 9.812979, 7.53218, 8.39385, 8.118225, 7.377261, 7.137555, 7.608278, 7.757905, 7.757905, 6.260244, 6.164324, 7.137555, 5.761366 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(15.61095);
   Graph_h_data3004->SetMaximum(63709.9);
   Graph_h_data3004->SetDirectory(nullptr);
   Graph_h_data3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h_data3004->SetLineColor(ci);
   Graph_h_data3004->GetXaxis()->SetLabelFont(42);
   Graph_h_data3004->GetXaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetXaxis()->SetTitleFont(42);
   Graph_h_data3004->GetYaxis()->SetLabelFont(42);
   Graph_h_data3004->GetYaxis()->SetTitleFont(42);
   Graph_h_data3004->GetZaxis()->SetLabelFont(42);
   Graph_h_data3004->GetZaxis()->SetTitleOffset(1);
   Graph_h_data3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_data3004);
   
   grae->Draw("p");
   
   Double_t model2_fx11[116] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25,
   -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t model2_fy11[116] = { 11.90625, 13.29141, 14.83772, 16.56392, 18.49095, 20.64217, 23.04366, 25.72454, 28.7173, 32.05825, 35.78787, 39.95139, 44.5993, 49.78794, 55.58022, 62.04637, 69.26478,
   77.32297, 86.31865, 96.36088, 107.5714, 120.0862, 134.0569, 149.6529, 167.0634, 186.4996, 208.1973, 232.4204, 259.466, 289.6725, 323.4434, 361.3162, 404.1908,
   454.1063, 516.9013, 611.3688, 800.7779, 985.9887, 1301.5, 1858.349, 2288.692, 2877.61, 3698.743, 4230.235, 4866.498, 5629.424, 6543.446, 7636.126, 8943.938,
   10531.96, 12536.3, 15217.15, 18956.27, 24083.33, 30486.55, 37219.57, 42553.18, 44726.73, 42996.61, 38127.58, 31881.36, 25964.27, 21288.36, 17936.32, 15563.26,
   13785.55, 12349.28, 11128, 10066.79, 9138.713, 8324.762, 6973.345, 5899.3, 5024.111, 4298.854, 3692.639, 2756.412, 2093.322, 1621.3, 1283.167, 860.8208,
   630.3972, 496.0976, 410.9506, 351.8171, 307.2027, 271.3118, 241.1474, 215.095, 192.2298, 171.9777, 153.9483, 137.8526, 123.4609, 110.5821, 99.05177, 88.72617,
   79.47816, 71.19466, 63.77479, 57.12835, 51.17465, 45.84146, 41.06408, 36.78459, 32.95109, 29.51709, 26.44098, 23.68544, 21.21706, 19.00593, 17.02523, 15.25095,
   13.66158, 12.23784, 12.23784 };
   TGraph *graph = new TGraph(116,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",116,-12,12);
   Graph_model211->SetMinimum(10.71562);
   Graph_model211->SetMaximum(49198.21);
   Graph_model211->SetDirectory(nullptr);
   Graph_model211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_model211->SetLineColor(ci);
   Graph_model211->GetXaxis()->SetLabelFont(42);
   Graph_model211->GetXaxis()->SetTitleOffset(1);
   Graph_model211->GetXaxis()->SetTitleFont(42);
   Graph_model211->GetYaxis()->SetLabelFont(42);
   Graph_model211->GetYaxis()->SetTitleFont(42);
   Graph_model211->GetZaxis()->SetLabelFont(42);
   Graph_model211->GetZaxis()->SetTitleOffset(1);
   Graph_model211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_model211);
   
   graph->Draw("l");
   
   Double_t tausigModel_fx12[110] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875,
   -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125,
   0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3,
   3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7,
   7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[110] = { 6.268034, 6.515399, 6.779373, 7.061556, 7.363753, 7.688001, 8.036616, 8.412234, 8.817867, 9.256977, 9.73355, 10.25221, 10.81833, 11.4382, 12.11924, 12.87022, 13.70158,
   14.62589, 15.65832, 16.81739, 18.12591, 19.61224, 21.31204, 23.2707, 25.54682, 28.21717, 31.38412, 35.18689, 39.81913, 45.55732, 52.80864, 62.19505, 74.70987,
   92.02951, 117.1889, 156.2166, 222.7322, 354.2532, 483.0901, 781.6535, 1145.529, 1447.345, 1871.856, 2459.866, 3257.934, 4317.504, 5697.411, 7477.888, 9808.693,
   13068.77, 18496.24, 27376.09, 37263.04, 45404.38, 48832.79, 46144.5, 38447.39, 28608.17, 19488.03, 13586.16, 10154.44, 7735.845, 5896.899, 4471.843, 3375.51,
   2547.533, 1935.806, 1493.136, 1177.925, 797.9223, 488.661, 357.3114, 224.1362, 156.9956, 117.6724, 92.35324, 74.93893, 62.36404, 52.93747, 45.65816, 39.89979,
   35.2526, 31.43847, 28.26273, 25.58546, 23.3038, 21.34065, 19.63717, 18.14779, 16.83671, 15.67548, 14.64121, 13.71534, 12.88262, 12.13046, 11.4484, 10.82762,
   10.26071, 9.741352, 9.264156, 8.824491, 8.41836, 8.042296, 7.693278, 7.368666, 7.06614, 6.783657, 6.51941, 6.271796, 6.271796 };
   graph = new TGraph(110,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",110,-12,12);
   Graph_tausigModel12->SetMinimum(5.641231);
   Graph_tausigModel12->SetMaximum(53715.45);
   Graph_tausigModel12->SetDirectory(nullptr);
   Graph_tausigModel12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_tausigModel12->SetLineColor(ci);
   Graph_tausigModel12->GetXaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetXaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetXaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetYaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetYaxis()->SetTitleFont(42);
   Graph_tausigModel12->GetZaxis()->SetLabelFont(42);
   Graph_tausigModel12->GetZaxis()->SetTitleOffset(1);
   Graph_tausigModel12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_tausigModel12);
   
   graph->Draw("l");
   
   Double_t exp_np_fx13[115] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625,
   -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.4375, 0.5, 0.5625, 0.625,
   0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2,
   2.125, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75,
   6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75,
   10, 10 };
   Double_t exp_np_fy13[115] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9.204779e-300,
   2.867563e-275, 8.140848e-252, 2.106481e-229, 4.968911e-208, 1.068756e-187, 2.096633e-168, 3.75254e-150, 6.129751e-133, 9.142399e-117, 1.245662e-101, 1.551434e-87, 1.767641e-74, 1.844167e-62, 1.763945e-51, 1.549325e-41, 1.252274e-32,
   9.341769e-25, 6.458768e-18, 4.164611e-12, 2.529281e-07, 0.001471452, 0.8465582, 8.690291, 22.70361, 35.05357, 52.88831, 78.90593, 118.3341, 180.8924, 281.8514, 439.3107, 665.623,
   955.6271, 1280.083, 1592.305, 1846.585, 2016.566, 2101.557, 2119.142, 2092.329, 2040.185, 1974.919, 1828.491, 1677.377, 1530.962, 1393.805, 1267.576, 1152.333,
   1047.443, 952.0704, 865.3758, 786.5745, 714.9487, 649.8451, 590.6699, 536.8832, 487.9944, 443.5574, 366.4543, 302.7539, 250.1265, 206.6473, 170.726, 141.0489,
   116.5305, 96.27414, 65.71274, 44.8528, 30.61466, 20.8963, 14.26295, 9.735301, 6.644913, 4.535543, 3.095774, 2.113047, 1.442279, 0.9844396, 0.6719378, 0.4586369,
   0.3130466, 0.2136726, 0.1458441, 0.09954715, 0.06794676, 0.04637765, 0.03165546, 0.02160671, 0.01474785, 0.01006627, 0.006870819, 0.004689737, 0.00320102, 0.002184884, 0.001491311, 0.001017907,
   0.0006947815, 0.0006947815 };
   graph = new TGraph(115,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",115,-12,12);
   Graph_exp_np13->SetMinimum(2.331056);
   Graph_exp_np13->SetMaximum(2331.056);
   Graph_exp_np13->SetDirectory(nullptr);
   Graph_exp_np13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_exp_np13->SetLineColor(ci);
   Graph_exp_np13->GetXaxis()->SetLabelFont(42);
   Graph_exp_np13->GetXaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetXaxis()->SetTitleFont(42);
   Graph_exp_np13->GetYaxis()->SetLabelFont(42);
   Graph_exp_np13->GetYaxis()->SetTitleFont(42);
   Graph_exp_np13->GetZaxis()->SetLabelFont(42);
   Graph_exp_np13->GetZaxis()->SetTitleOffset(1);
   Graph_exp_np13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_exp_np13);
   
   graph->Draw("l");
   
   Double_t Fit_Total_fx14[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.75, 0.875, 1, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[113] = { 18.17428, 19.80681, 21.61709, 23.62548, 25.8547, 28.33017, 31.08028, 34.13677, 37.53517, 41.31522, 45.52142, 50.2036, 55.41763, 61.22614, 67.69946, 74.91658, 82.96636,
   91.94886, 101.977, 113.1783, 125.6973, 139.6984, 155.3689, 172.9236, 192.6103, 214.7167, 239.5814, 267.6073, 299.2851, 335.2298, 376.2521, 423.5112, 478.9007,
   546.1358, 634.0903, 767.5854, 1023.51, 1655.755, 2341.486, 2881.95, 3660.11, 4847.179, 5682.693, 6747.044, 8103.567, 9824.084, 11988.68, 14694.24, 18088.76,
   22463.33, 28466.81, 37734.36, 51898.74, 68415.21, 83579.57, 92666.05, 92463.53, 83290.58, 68752.31, 53470.95, 41669.57, 33535.13, 27712.35, 23435.08, 20160.58,
   17553.28, 15428.31, 13679.97, 12235.06, 11033.65, 9165.072, 7768.787, 6665.105, 5002.02, 3820.913, 2967.304, 1883.72, 1281.247, 929.3977, 712.0855, 569.5887,
   470.4673, 397.7136, 341.8262, 297.2963, 260.7965, 230.2279, 204.208, 181.7876, 162.289, 145.2111, 130.1722, 116.8729, 105.0736, 94.57801, 85.22305, 76.87108,
   69.40466, 62.72259, 56.73703, 51.37117, 46.55759, 42.23685, 38.35633, 34.8694, 31.7346, 28.91503, 26.3778, 24.09356, 22.0361, 20.18201, 18.51033, 18.51033 };
   graph = new TGraph(113,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",113,-12,12);
   Graph_Fit_Total14->SetMinimum(16.35685);
   Graph_Fit_Total14->SetMaximum(101930.8);
   Graph_Fit_Total14->SetDirectory(nullptr);
   Graph_Fit_Total14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Fit_Total14->SetLineColor(ci);
   Graph_Fit_Total14->GetXaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetXaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetXaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetYaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetYaxis()->SetTitleFont(42);
   Graph_Fit_Total14->GetZaxis()->SetLabelFont(42);
   Graph_Fit_Total14->GetZaxis()->SetTitleOffset(1);
   Graph_Fit_Total14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Fit_Total14);
   
   graph->Draw("l");
   
   TH1D *frame_tau_13745b90__8 = new TH1D("frame_tau_13745b90__8"," ",80,-10,10);
   frame_tau_13745b90__8->SetBinContent(1,97299.35);
   frame_tau_13745b90__8->SetMinimum(5);
   frame_tau_13745b90__8->SetMaximum(1e+07);
   frame_tau_13745b90__8->SetEntries(2);
   frame_tau_13745b90__8->SetDirectory(nullptr);
   frame_tau_13745b90__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_13745b90__8->SetLineColor(ci);
   frame_tau_13745b90__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_13745b90__8->GetXaxis()->SetRange(13,68);
   frame_tau_13745b90__8->GetXaxis()->SetLabelFont(42);
   frame_tau_13745b90__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_13745b90__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_13745b90__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_13745b90__8->GetXaxis()->SetTitleFont(42);
   frame_tau_13745b90__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_13745b90__8->GetYaxis()->SetLabelFont(42);
   frame_tau_13745b90__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_13745b90__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_13745b90__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_13745b90__8->GetYaxis()->SetTitleFont(42);
   frame_tau_13745b90__8->GetZaxis()->SetLabelFont(42);
   frame_tau_13745b90__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_13745b90__8->GetZaxis()->SetTitleFont(42);
   frame_tau_13745b90__8->Draw("AXISSAME");
   TLatex *   tex = new TLatex(0.13,0.85,"ALICE preliminary, pp, #sqrt{s} = 13.6 TeV");
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
      tex = new TLatex(0.15,0.69,"1 < #it{p}_{T}^{#mu#mu} < 2 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 63551#pm321");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 93373#pm364");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.121#pm0.002");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.66,0.66,0.86,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Fit_Total","Total fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tausigModel","Prompt","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("exp_np","Non-prompt","l");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Background","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 489 / 78 ");
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
   pad1_2DFitbis__3->Modified();
   c2DFitbis->cd();
   c2DFitbis->Modified();
   c2DFitbis->SetSelected(c2DFitbis);

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT1_2.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT1_2.png");
}
