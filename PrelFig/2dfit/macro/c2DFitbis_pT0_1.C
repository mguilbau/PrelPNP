#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT0_1()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 21:16:25 2025) by ROOT version 6.32.06
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
   
   TH1D *frame_tau_10e1a3c0__7 = new TH1D("frame_tau_10e1a3c0__7"," ",80,-10,10);
   frame_tau_10e1a3c0__7->SetBinContent(1,49961.99);
   frame_tau_10e1a3c0__7->SetMinimum(5);
   frame_tau_10e1a3c0__7->SetMaximum(1e+07);
   frame_tau_10e1a3c0__7->SetEntries(2);
   frame_tau_10e1a3c0__7->SetDirectory(nullptr);
   frame_tau_10e1a3c0__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10e1a3c0__7->SetLineColor(ci);
   frame_tau_10e1a3c0__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10e1a3c0__7->GetXaxis()->SetRange(13,68);
   frame_tau_10e1a3c0__7->GetXaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10e1a3c0__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10e1a3c0__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_10e1a3c0__7->GetXaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10e1a3c0__7->GetYaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10e1a3c0__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10e1a3c0__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10e1a3c0__7->GetYaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__7->GetZaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_10e1a3c0__7->GetZaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 19, 20, 27, 19, 22, 26, 23, 21, 27, 38, 42, 36, 33, 42, 46, 68, 65,
   60, 67, 62, 78, 85, 103, 100, 121, 122, 140, 153, 177, 201, 228, 274, 336,
   324, 408, 605, 896, 1710, 4950, 27148, 31997, 7970, 3622, 2018, 1226, 852, 627, 503, 409,
   306, 249, 207, 184, 165, 132, 134, 107, 107, 103, 71, 91, 78, 51, 69, 54,
   50, 41, 48, 44, 32, 37, 20, 28, 23, 35, 23, 18, 19, 20, 16 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 4.320219, 4.434448, 5.163771, 4.320219, 4.654502, 5.066015, 4.760717, 4.545807, 5.163771, 6.137163, 6.454831, 5.971996, 5.715302, 6.454831, 6.757581, 8.225883, 8.041463,
   7.724317, 8.164873, 7.852713, 8.812788, 9.201374, 9.661201, 9.983255, 10.51136, 10.55667, 11.34272, 11.87942, 12.81353, 13.68626, 14.60794, 16.0605, 17.83712,
   17.50694, 19.7052, 24.10183, 29.43743, 40.85517, 69.85801, 164.2673, 178.3778, 88.77626, 59.68513, 44.42494, 34.51785, 28.69332, 24.54496, 21.93323, 19.72993,
   17, 15.28765, 13.89618, 13.07387, 12.35496, 11, 11.08663, 9.856158, 9.856158, 9.661201, 8.406258, 9.521834, 8.812788, 7.117933, 8.286444, 7.32564,
   7.047337, 6.376898, 6.903979, 6.60794, 5.627135, 6.055143, 4.434448, 5.259711, 4.760717, 5.887675, 4.760717, 4.202887, 4.320219, 4.434448, 3.957801 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 5.435196, 5.546519, 6.260244, 5.435196, 5.761366, 6.164324, 5.865235, 5.655182, 6.260244, 7.218484, 7.53218, 7.055545, 6.802567, 7.53218, 7.831489, 9.28666, 9.103628,
   8.789023, 9.226102, 8.916365, 9.869531, 10.25573, 10.6612, 11.03336, 11.51136, 11.55667, 12.34272, 12.87942, 13.81353, 14.68626, 15.60794, 17.0605, 18.83712,
   18.50694, 20.7052, 25.10183, 30.43743, 41.85517, 70.85801, 165.2673, 179.3778, 89.77626, 60.68513, 45.42494, 35.51785, 29.69332, 25.54496, 22.93323, 20.72993,
   18, 16.28765, 14.89618, 14.07387, 13.35496, 12, 12.08663, 10.85616, 10.85616, 10.6612, 9.465736, 10.57436, 9.869531, 8.188122, 9.346779, 8.39385,
   8.118225, 7.455185, 7.97633, 7.68351, 6.715753, 7.137555, 5.546519, 6.354446, 5.865235, 6.97241, 5.865235, 5.321007, 5.435196, 5.546519, 5.083066 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(10.83798);
   Graph_h_data3004->SetMaximum(35392.81);
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
   
   Double_t model2_fx11[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.6875, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125,
   -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875,
   0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.125, 1.25,
   1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t model2_fy11[117] = { 9.070884, 10.04506, 11.12387, 12.31853, 13.6415, 15.10654, 16.72893, 18.52556, 20.51514, 22.71839, 25.15826, 27.86017, 30.85225, 34.16567, 37.83494, 41.89828, 46.398,
   51.38098, 56.89912, 63.00988, 69.77691, 77.27071, 85.56932, 94.75921, 104.9362, 116.2064, 128.6881, 142.5131, 157.832, 174.8232, 193.7212, 214.8963, 239.0925,
   268.142, 307.1172, 370.8212, 503.4234, 630.5851, 841.5576, 998.6693, 1208.073, 1489.905, 1870.856, 2383.763, 2701.273, 3066.465, 3486.34, 3972.423, 4546.848,
   5252.32, 6163.6, 7391.973, 9067.667, 11286.35, 14023.31, 17051.4, 19923.99, 22071.38, 22996.59, 22480.12, 20677.45, 18049.19, 15166.72, 12506.14, 10330.89,
   8691.734, 7503.253, 6633.553, 5964.949, 5416.923, 4943.783, 4523.015, 3802.543, 3216.759, 2741.606, 2354.51, 2036.042, 1548.409, 1199.69, 946.0269, 759.912,
   519.8406, 383.7949, 302.5005, 250.4794, 214.5122, 187.6994, 166.4032, 148.6734, 133.4355, 120.0731, 108.2113, 97.60511, 88.08178, 79.50993, 71.78374, 64.81424,
   58.52446, 52.84662, 47.72044, 43.09191, 38.91253, 35.13861, 31.73076, 28.65344, 25.87458, 23.36523, 21.09924, 19.05301, 17.20523, 15.53665, 14.02989, 12.66926,
   11.44058, 10.33106, 9.329145, 9.329145 };
   TGraph *graph = new TGraph(117,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",117,-12,12);
   Graph_model211->SetMinimum(8.163796);
   Graph_model211->SetMaximum(25295.34);
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
   
   Double_t tausigModel_fx12[112] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875,
   -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125,
   0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.75, 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5,
   2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25, 6.5,
   6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t tausigModel_fy12[112] = { 5.345457, 5.532023, 5.730261, 5.941239, 6.166161, 6.40638, 6.663424, 6.939029, 7.235165, 7.55409, 7.89839, 8.271048, 8.67552, 9.115826, 9.596678, 10.12362, 10.70323,
   11.34335, 12.05342, 12.84487, 13.73172, 14.73126, 15.86508, 17.16052, 18.65256, 20.38675, 22.42333, 24.8436, 27.75974, 31.33059, 35.78813, 41.48373, 48.97394,
   59.19067, 73.8096, 96.14465, 133.8666, 221.2087, 353.1801, 488.1922, 708.594, 1055.952, 1292.477, 1580.263, 1928.077, 2348.331, 2862.158, 3512.171, 4398.42,
   5802.865, 8386.787, 11908.81, 16003.39, 20032.06, 23135.78, 24530.48, 23834.2, 21239.79, 17426.75, 13267.16, 9499.232, 6534.516, 4794.167, 3779.922, 3065.459,
   2511.69, 2062.567, 1691.712, 1384.544, 1131.386, 757.6136, 518.727, 371.6882, 228.2671, 136.0713, 97.35669, 74.57196, 59.70854, 49.34559, 41.76166, 36.00276,
   31.50066, 27.89737, 24.95695, 22.51808, 20.46697, 18.72124, 17.21988, 15.91683, 14.77672, 13.77193, 12.88065, 12.08543, 11.37214, 10.72924, 10.14722, 9.618175,
   9.135477, 8.693542, 8.287629, 7.913687, 7.568241, 7.24829, 6.951229, 6.674791, 6.416991, 6.176087, 5.950542, 5.738994, 5.540235, 5.353192, 5.353192 };
   graph = new TGraph(112,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",112,-12,12);
   Graph_tausigModel12->SetMinimum(4.810912);
   Graph_tausigModel12->SetMaximum(26982.99);
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
   
   Double_t exp_np_fx13[117] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625, -0.125,
   -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.375, 0.5,
   0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5, 1.625, 1.75,
   1.875, 2, 2.125, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[117] = { 0, 0, 0, 0, 0, 0, 1.976765e-308, 1.467849e-290, 3.199381e-273, 2.047074e-256, 3.845128e-240, 2.120446e-224, 3.433328e-209, 1.632342e-194, 2.279056e-180, 9.345257e-167, 1.125564e-153,
   3.982428e-141, 4.139884e-129, 1.264629e-117, 1.135418e-106, 2.996817e-96, 2.325878e-86, 5.309623e-77, 3.56649e-68, 7.051758e-60, 4.10626e-52, 7.046072e-45, 3.565472e-38, 5.325396e-32, 2.350457e-26, 3.070185e-21, 1.189164e-16,
   1.36943e-12, 4.706278e-09, 4.852977e-06, 0.001513977, 0.1448114, 0.9151301, 4.346193, 8.528261, 15.66802, 27.37673, 36.00524, 47.82927, 64.90455, 90.53779, 129.2997, 186.3374,
   265.7902, 368.6215, 490.7883, 622.9077, 752.0521, 865.1808, 952.7204, 1010.688, 1040.615, 1047.726, 1038.541, 1018.985, 993.469, 964.8242, 903.8884, 781.6602,
   723.6424, 668.7986, 617.4888, 569.8016, 525.6518, 484.8609, 447.211, 412.476, 380.4359, 350.8837, 323.6268, 298.4873, 253.9149, 215.9985, 183.744, 156.306,
   132.9652, 113.1099, 96.21945, 81.85125, 59.23116, 42.86226, 31.01701, 22.44527, 16.24238, 11.7537, 8.505493, 6.154948, 4.45399, 3.223103, 2.332379, 1.687811,
   1.221374, 0.8838401, 0.6395855, 0.4628321, 0.3349256, 0.2423669, 0.1753873, 0.1269179, 0.09184338, 0.0664619, 0.04809475, 0.03480347, 0.02518532, 0.0182252, 0.01318855, 0.009543816,
   0.006906324, 0.004997719, 0.003616569, 0.003616569 };
   graph = new TGraph(117,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",117,-12,12);
   Graph_exp_np13->SetMinimum(1.152499);
   Graph_exp_np13->SetMaximum(1152.499);
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
   
   Double_t Fit_Total_fx14[115] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.875, -0.75, -0.625, -0.5625, -0.5, -0.4375, -0.40625, -0.375, -0.34375, -0.3125, -0.28125, -0.25,
   -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25,
   0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.875, 1, 1.25, 1.5, 1.75,
   2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75,
   6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75,
   10, 10 };
   Double_t Fit_Total_fy14[115] = { 14.41634, 15.57709, 16.85413, 18.25977, 19.80766, 21.51292, 23.39236, 25.46459, 27.7503, 30.27248, 33.05665, 36.13122, 39.52777, 43.2815, 47.43162, 52.0219, 57.10123,
   62.72433, 68.95253, 75.85475, 83.50863, 92.00196, 101.4344, 111.9197, 123.5887, 136.5932, 151.1114, 167.3567, 185.5917, 206.1538, 229.5093, 256.38, 288.0664,
   327.3327, 380.9268, 466.9658, 637.2916, 795.9634, 1062.911, 1562.168, 1980.164, 2583.796, 3448.243, 4005.398, 4662.396, 5435.216, 6348.131, 7445.011, 8812.32,
   10626.92, 13285.38, 17583.75, 23381.49, 30292.49, 37452.09, 43550.56, 47224.77, 47582.84, 44585.09, 39056.92, 32327.03, 25706.57, 20088.38, 16163.6, 13490.64,
   11562.18, 10110.07, 8962.189, 8012.523, 7201.272, 6496.532, 5341.817, 4459.129, 3782.093, 3254.773, 2834.111, 2202.088, 1748.237, 1155.756, 810.4111, 599.8094,
   464.956, 374.0923, 309.7462, 262.0623, 225.3176, 196.0756, 172.196, 152.2938, 135.438, 120.9799, 108.4526, 97.50974, 87.88805, 79.38271, 71.83127, 65.1026,
   59.08926, 53.70197, 48.86563, 44.51645, 40.59969, 37.06799, 33.88011, 30.99993, 28.39562, 26.03904, 23.90521, 21.97187, 20.21917, 18.62934, 17.18648, 15.87629,
   14.68595, 14.68595 };
   graph = new TGraph(115,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",115,-12,12);
   Graph_Fit_Total14->SetMinimum(12.97471);
   Graph_Fit_Total14->SetMaximum(52339.69);
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
   
   TH1D *frame_tau_10e1a3c0__8 = new TH1D("frame_tau_10e1a3c0__8"," ",80,-10,10);
   frame_tau_10e1a3c0__8->SetBinContent(1,49961.99);
   frame_tau_10e1a3c0__8->SetMinimum(5);
   frame_tau_10e1a3c0__8->SetMaximum(1e+07);
   frame_tau_10e1a3c0__8->SetEntries(2);
   frame_tau_10e1a3c0__8->SetDirectory(nullptr);
   frame_tau_10e1a3c0__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10e1a3c0__8->SetLineColor(ci);
   frame_tau_10e1a3c0__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10e1a3c0__8->GetXaxis()->SetRange(13,68);
   frame_tau_10e1a3c0__8->GetXaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10e1a3c0__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10e1a3c0__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_10e1a3c0__8->GetXaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10e1a3c0__8->GetYaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10e1a3c0__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10e1a3c0__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10e1a3c0__8->GetYaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__8->GetZaxis()->SetLabelFont(42);
   frame_tau_10e1a3c0__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_10e1a3c0__8->GetZaxis()->SetTitleFont(42);
   frame_tau_10e1a3c0__8->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"0 GeV/c < #it{p}_{T}^{#mu#mu} < 1 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 37705#pm249");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 53001#pm278");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.120#pm0.003");
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
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 355 / 78 ");
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

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT0_1.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT0_1.png");
}
