#ifdef __CLING__
#pragma cling optimize(0)
#endif
void c2DFitbis_pT6_8()
{
//=========Macro generated from canvas: c2DFitbis/c2DFitbis
//=========  (Mon Mar 31 17:21:54 2025) by ROOT version 6.32.06
   TCanvas *c2DFitbis = new TCanvas("c2DFitbis", "c2DFitbis",1667,743,1000,800);
   c2DFitbis->Range(0,0,1,1);
   c2DFitbis->SetFillColor(0);
   c2DFitbis->SetBorderMode(0);
   c2DFitbis->SetBorderSize(2);
   c2DFitbis->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_2DFitbis
   TPad *pad1_2DFitbis__3 = new TPad("pad1_2DFitbis", "",0,0,1,1);
   pad1_2DFitbis__3->Draw();
   pad1_2DFitbis__3->cd();
   pad1_2DFitbis__3->Range(-5,0.07396996,5,6.32397);
   pad1_2DFitbis__3->SetFillColor(0);
   pad1_2DFitbis__3->SetBorderMode(0);
   pad1_2DFitbis__3->SetBorderSize(2);
   pad1_2DFitbis__3->SetLogy();
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   pad1_2DFitbis__3->SetFrameBorderMode(0);
   
   TH1D *frame_tau_10ddaa90__7 = new TH1D("frame_tau_10ddaa90__7"," ",80,-10,10);
   frame_tau_10ddaa90__7->SetBinContent(1,29419.32);
   frame_tau_10ddaa90__7->SetMinimum(5);
   frame_tau_10ddaa90__7->SetMaximum(500000);
   frame_tau_10ddaa90__7->SetEntries(3);
   frame_tau_10ddaa90__7->SetDirectory(nullptr);
   frame_tau_10ddaa90__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_tau_10ddaa90__7->SetLineColor(ci);
   frame_tau_10ddaa90__7->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10ddaa90__7->GetXaxis()->SetRange(25,56);
   frame_tau_10ddaa90__7->GetXaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__7->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10ddaa90__7->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10ddaa90__7->GetXaxis()->SetTitleOffset(1);
   frame_tau_10ddaa90__7->GetXaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__7->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10ddaa90__7->GetYaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__7->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10ddaa90__7->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10ddaa90__7->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10ddaa90__7->GetYaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__7->GetZaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__7->GetZaxis()->SetTitleOffset(1);
   frame_tau_10ddaa90__7->GetZaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__7->Draw("FUNC");
   
   Double_t h_data_fx3004[80] = { -9.875, -9.625, -9.375, -9.125, -8.875, -8.625, -8.375, -8.125, -7.875, -7.625, -7.375, -7.125, -6.875, -6.625, -6.375, -6.125, -5.875,
   -5.625, -5.375, -5.125, -4.875, -4.625, -4.375, -4.125, -3.875, -3.625, -3.375, -3.125, -2.875, -2.625, -2.375, -2.125, -1.875,
   -1.625, -1.375, -1.125, -0.875, -0.625, -0.375, -0.125, 0.125, 0.375, 0.625, 0.875, 1.125, 1.375, 1.625, 1.875, 2.125,
   2.375, 2.625, 2.875, 3.125, 3.375, 3.625, 3.875, 4.125, 4.375, 4.625, 4.875, 5.125, 5.375, 5.625, 5.875, 6.125,
   6.375, 6.625, 6.875, 7.125, 7.375, 7.625, 7.875, 8.125, 8.375, 8.625, 8.875, 9.125, 9.375, 9.625, 9.875 };
   Double_t h_data_fy3004[80] = { 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 4, 2, 6, 5, 3, 3, 8,
   3, 6, 5, 6, 5, 10, 8, 8, 8, 10, 16, 16, 22, 21, 31, 26,
   27, 51, 76, 94, 137, 360, 8598, 11186, 2107, 1017, 564, 332, 191, 122, 77, 47,
   42, 38, 26, 22, 13, 8, 10, 12, 7, 6, 9, 6, 2, 3, 3, 3,
   3, 3, 0, 1, 0, 1, 0, 4, 0, 0, 2, 0, 1, 0, 0 };
   Double_t h_data_felx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fely3004[80] = { 0, 0.8272462, 0.8272462, 0.8272462, 0, 0, 0, 0.8272462, 0, 0.8272462, 1.914339, 1.291815, 2.379931, 2.159691, 1.632705, 1.632705, 2.768386,
   1.632705, 2.379931, 2.159691, 2.379931, 2.159691, 3.108694, 2.768386, 2.768386, 2.768386, 3.108694, 3.957801, 3.957801, 4.654502, 4.545807, 5.537565, 5.066015,
   5.163771, 7.117933, 8.698576, 9.678086, 11.21537, 18.48025, 92.22675, 105.2651, 45.40479, 31.39436, 23.25395, 17.72773, 13.32932, 10.55667, 8.755868, 6.831172,
   6.454831, 6.137163, 5.066015, 4.654502, 3.558662, 2.768386, 3.108694, 3.415266, 2.58147, 2.379931, 2.943461, 2.379931, 1.291815, 1.632705, 1.632705, 1.632705,
   1.632705, 1.632705, 0, 0.8272462, 0, 0.8272462, 0, 1.914339, 0, 0, 1.291815, 0, 0.8272462, 0, 0 };
   Double_t h_data_fehx3004[80] = { 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125,
   0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125, 0.125 };
   Double_t h_data_fehy3004[80] = { 1.147874, 2.299527, 2.299527, 2.299527, 1.147874, 1.147874, 1.147874, 2.299527, 1.147874, 2.299527, 3.162753, 2.63786, 3.583642, 3.382473, 2.918186, 2.918186, 3.945142,
   2.918186, 3.583642, 3.382473, 3.583642, 3.382473, 4.26695, 3.945142, 3.945142, 3.945142, 4.26695, 5.083066, 5.083066, 5.761366, 5.655182, 6.627601, 6.164324,
   6.260244, 8.188122, 9.756061, 10.72977, 12.21537, 19.48025, 93.22675, 106.2651, 46.40479, 32.39436, 24.25395, 18.72773, 14.32932, 11.55667, 9.812979, 7.904289,
   7.53218, 7.218484, 6.164324, 5.761366, 4.697573, 3.945142, 4.26695, 4.559819, 3.770281, 3.583642, 4.110204, 3.583642, 2.63786, 2.918186, 2.918186, 2.918186,
   2.918186, 2.918186, 1.147874, 2.299527, 1.147874, 2.299527, 1.147874, 3.162753, 1.147874, 1.147874, 2.63786, 1.147874, 2.299527, 1.147874, 1.147874 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(80,h_data_fx3004,h_data_fy3004,h_data_felx3004,h_data_fehx3004,h_data_fely3004,h_data_fehy3004);
   grae->SetName("h_data");
   grae->SetTitle("Histogram of data_plot__tau");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_h_data3004 = new TH1F("Graph_h_data3004","Histogram of data_plot__tau",100,-12,12);
   Graph_h_data3004->SetMinimum(12.42149);
   Graph_h_data3004->SetMaximum(12421.49);
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
   
   Double_t model2_fx11[113] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.625, -0.5, -0.4375, -0.375, -0.34375, -0.3125, -0.28125, -0.25, -0.21875, -0.1875, -0.15625,
   -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375,
   0.375, 0.4375, 0.5, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 1, 1.125, 1.25, 1.5, 1.75, 2, 2.25,
   2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5, 5.75, 6, 6.25,
   6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5, 9.75, 10, 10 };
   Double_t model2_fy11[113] = { 0.06976609, 0.0835424, 0.100039, 0.1197932, 0.143448, 0.1717739, 0.2056931, 0.2463101, 0.2949475, 0.3531891, 0.4229313, 0.5064451, 0.6064498, 0.726202, 0.8696009, 1.041316, 1.246939,
   1.493164, 1.788011, 2.141079, 2.563865, 3.070137, 3.676379, 4.402332, 5.271635, 6.312594, 7.559106, 9.051759, 10.83916, 12.9795, 15.54249, 18.61158, 22.28674,
   26.68799, 31.9619, 38.31168, 46.24771, 58.9572, 72.73163, 105.1051, 138.1664, 194.2626, 235.9782, 290.8674, 363.2774, 459.1252, 586.7294, 758.2187, 991.3497,
   1311.184, 1755.189, 2390.11, 3285.825, 4288.506, 4826.228, 4453.162, 3522.453, 2690.212, 2174.174, 1865.896, 1656.257, 1496.818, 1365.784, 1251.836, 1149.492,
   1056.305, 893.014, 755.9884, 640.9332, 544.2811, 463.0463, 394.7295, 337.2382, 288.8206, 213.5788, 159.9075, 121.4278, 73.47699, 47.66116, 33.08169, 24.33001,
   18.70091, 14.82387, 11.99028, 9.822189, 8.108861, 6.725765, 5.594143, 4.660606, 3.886642, 3.243067, 2.706975, 2.259949, 1.886965, 1.575647, 1.315744, 1.098738,
   0.9175361, 0.7662236, 0.6398675, 0.5343499, 0.4462335, 0.3726482, 0.3111975, 0.2598803, 0.2170255, 0.1812375, 0.1513511, 0.126393, 0.1055505, 0.08814504, 0.07360975, 0.07360975 };
   TGraph *graph = new TGraph(113,model2_fx11,model2_fy11);
   graph->SetName("model2");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_model211 = new TH1F("Graph_model211","Projection of Fit_Total",113,-12,12);
   Graph_model211->SetMinimum(0.06278949);
   Graph_model211->SetMaximum(5308.844);
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
   
   Double_t tausigModel_fx12[100] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.75, 1, 1.25, 1.5,
   1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25, 5.5,
   5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25, 9.5,
   9.75, 10, 10 };
   Double_t tausigModel_fy12[100] = { 1.124228, 1.164058, 1.206396, 1.251471, 1.299544, 1.350905, 1.405884, 1.464854, 1.528242, 1.596532, 1.670282, 1.750134, 1.836834, 1.931247, 2.034386, 2.147447, 2.271844,
   2.409264, 2.561737, 2.731721, 2.922221, 3.136949, 3.380535, 3.658826, 3.979305, 4.351687, 4.788805, 5.307929, 5.932817, 6.696992, 7.649183, 8.862781, 10.45318,
   12.61174, 15.67811, 20.31166, 27.96186, 42.46549, 77.73226, 121.3787, 164.1883, 270.7442, 421.9528, 767.9289, 1510.483, 2939.979, 5577.677, 11358.57, 18920.63,
   22737.19, 19062.91, 11513.78, 5657.179, 2980.285, 1532.402, 778.6348, 426.7025, 272.826, 164.8095, 121.7184, 77.88854, 42.52033, 27.98846, 20.32695, 15.68788,
   12.61844, 10.45802, 8.86642, 7.652003, 6.699232, 5.934634, 5.309427, 4.790059, 4.35275, 3.980215, 3.659613, 3.381221, 3.137552, 2.922754, 2.732195, 2.562162,
   2.409646, 2.272189, 2.14776, 2.034671, 1.931507, 1.837073, 1.750354, 1.670484, 1.596719, 1.528415, 1.465016, 1.406034, 1.351045, 1.299675, 1.251594, 1.206511,
   1.164166, 1.12433, 1.12433 };
   graph = new TGraph(100,tausigModel_fx12,tausigModel_fy12);
   graph->SetName("tausigModel");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cc0000");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_tausigModel12 = new TH1F("Graph_tausigModel12","Projection of Fit_Total",100,-12,12);
   Graph_tausigModel12->SetMinimum(1.011805);
   Graph_tausigModel12->SetMaximum(25010.8);
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
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125, 0, 0.03125,
   0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.28125, 0.3125, 0.34375, 0.375, 0.40625, 0.4375, 0.46875, 0.5, 0.53125,
   0.5625, 0.59375, 0.625, 0.65625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1, 1.0625, 1.125, 1.1875, 1.25, 1.375, 1.5,
   1.625, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5.25,
   5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9, 9.25,
   9.5, 9.75, 10, 10 };
   Double_t exp_np_fy13[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.816237e-284, 9.603447e-235, 4.866054e-190, 4.976037e-150,
   1.030245e-114, 4.338826e-84, 3.74357e-58, 6.695789e-37, 2.53661e-20, 2.130381e-08, 0.449484, 1.785835, 6.078511, 17.95549, 47.5574, 118.2756, 277.9133, 578.4798, 992.7045, 1376.95,
   1597.558, 1648.821, 1601.624, 1514.306, 1414.711, 1314.522, 1218.664, 1128.876, 1045.448, 968.1252, 896.5096, 830.1898, 768.7757, 711.9048, 659.241, 610.473,
   565.3126, 523.4931, 484.7672, 448.906, 415.6978, 356.4694, 305.6798, 262.1267, 224.779, 192.7526, 165.2893, 141.739, 121.5441, 104.2265, 76.64209, 56.3581,
   41.44244, 30.47435, 16.4783, 8.910262, 4.818019, 2.605233, 1.40872, 0.7617327, 0.4118894, 0.2227197, 0.1204306, 0.06512006, 0.03521217, 0.01904017, 0.01029553, 0.005567073,
   0.003010267, 0.001627732, 0.0008801589, 0.0004759257, 0.0002573458, 0.0001391538, 7.524424e-05, 4.068659e-05, 2.200034e-05, 1.189618e-05, 6.432583e-06, 3.478271e-06, 1.880795e-06, 1.016997e-06, 5.499175e-07, 2.973552e-07,
   1.60788e-07, 8.694241e-08, 4.701211e-08, 4.701211e-08 };
   graph = new TGraph(117,exp_np_fx13,exp_np_fy13);
   graph->SetName("exp_np");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_exp_np13 = new TH1F("Graph_exp_np13","Projection of Fit_Total",117,-12,12);
   Graph_exp_np13->SetMinimum(1.813703);
   Graph_exp_np13->SetMaximum(1813.703);
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
   
   Double_t Fit_Total_fx14[102] = { -10, -9.75, -9.5, -9.25, -9, -8.75, -8.5, -8.25, -8, -7.75, -7.5, -7.25, -7, -6.75, -6.5, -6.25, -6,
   -5.75, -5.5, -5.25, -5, -4.75, -4.5, -4.25, -4, -3.75, -3.5, -3.25, -3, -2.75, -2.5, -2.25, -2,
   -1.75, -1.5, -1.25, -1, -0.75, -0.5, -0.375, -0.3125, -0.25, -0.21875, -0.1875, -0.15625, -0.125, -0.09375, -0.0625, -0.03125,
   0, 0.03125, 0.0625, 0.09375, 0.125, 0.15625, 0.1875, 0.21875, 0.25, 0.3125, 0.375, 0.5, 0.625, 0.75, 0.875, 1,
   1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5,
   5.25, 5.5, 5.75, 6, 6.25, 6.5, 6.75, 7, 7.25, 7.5, 7.75, 8, 8.25, 8.5, 8.75, 9,
   9.25, 9.5, 9.75, 10, 10 };
   Double_t Fit_Total_fy14[102] = { 1.193994, 1.2476, 1.306435, 1.371264, 1.442992, 1.522678, 1.611577, 1.711164, 1.823189, 1.949721, 2.093213, 2.256579, 2.443284, 2.657449, 2.903987, 3.188763, 3.518783,
   3.902429, 4.349748, 4.8728, 5.486086, 6.207086, 7.056914, 8.061158, 9.25094, 10.66428, 12.34791, 14.35969, 16.77197, 19.67649, 23.19167, 27.47436, 32.73992,
   39.29973, 47.64001, 58.62333, 74.20957, 101.4227, 182.8374, 315.6416, 455.0733, 730.3189, 1010.468, 1532.226, 2519.788, 4298.72, 7451.141, 14026.6, 22784.94,
   28018.4, 25266.09, 17564.5, 10828.45, 7272.121, 5220.882, 4059.242, 3397.482, 2988.307, 2462.093, 2074.533, 1493.118, 1084.717, 793.7192, 584.9001, 434.3199,
   245.9813, 145.523, 90.75395, 60.01801, 42.10669, 31.17093, 24.12834, 19.33363, 15.89335, 13.31081, 11.30123, 9.694788, 8.385339, 7.303075, 6.399659, 5.640024,
   4.997712, 4.452137, 3.986921, 3.588813, 3.246975, 2.952465, 2.69787, 2.477015, 2.284744, 2.11674, 1.969379, 1.839619, 1.724899, 1.623061, 1.532283, 1.451026,
   1.377987, 1.312062, 1.252312, 1.19794, 1.19794 };
   graph = new TGraph(102,Fit_Total_fx14,Fit_Total_fy14);
   graph->SetName("Fit_Total");
   graph->SetTitle("Projection of Fit_Total");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Fit_Total14 = new TH1F("Graph_Fit_Total14","Projection of Fit_Total",102,-12,12);
   Graph_Fit_Total14->SetMinimum(1.074595);
   Graph_Fit_Total14->SetMaximum(30820.12);
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
   
   TH1D *frame_tau_10ddaa90__8 = new TH1D("frame_tau_10ddaa90__8"," ",80,-10,10);
   frame_tau_10ddaa90__8->SetBinContent(1,29419.32);
   frame_tau_10ddaa90__8->SetMinimum(5);
   frame_tau_10ddaa90__8->SetMaximum(500000);
   frame_tau_10ddaa90__8->SetEntries(3);
   frame_tau_10ddaa90__8->SetDirectory(nullptr);
   frame_tau_10ddaa90__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_tau_10ddaa90__8->SetLineColor(ci);
   frame_tau_10ddaa90__8->GetXaxis()->SetTitle("l_{J/#Psi} (mm)");
   frame_tau_10ddaa90__8->GetXaxis()->SetRange(25,56);
   frame_tau_10ddaa90__8->GetXaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__8->GetXaxis()->SetLabelSize(0.04);
   frame_tau_10ddaa90__8->GetXaxis()->SetTitleSize(0.045);
   frame_tau_10ddaa90__8->GetXaxis()->SetTitleOffset(1);
   frame_tau_10ddaa90__8->GetXaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__8->GetYaxis()->SetTitle("Events / ( 0.25 mm )");
   frame_tau_10ddaa90__8->GetYaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__8->GetYaxis()->SetLabelSize(0.04);
   frame_tau_10ddaa90__8->GetYaxis()->SetTitleSize(0.045);
   frame_tau_10ddaa90__8->GetYaxis()->SetTitleOffset(1.1);
   frame_tau_10ddaa90__8->GetYaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__8->GetZaxis()->SetLabelFont(42);
   frame_tau_10ddaa90__8->GetZaxis()->SetTitleOffset(1);
   frame_tau_10ddaa90__8->GetZaxis()->SetTitleFont(42);
   frame_tau_10ddaa90__8->Draw("AXISSAME");
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
      tex = new TLatex(0.15,0.69,"6 GeV/c < #it{p}_{T}^{#mu#mu} < 8 GeV/c");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.54,"N_{J/#psi} = 17722#pm150");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.49,"N_{bkg} = 7725#pm112");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.44,"f_{B} = 0.204#pm0.005");
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
      tex = new TLatex(0.15,0.39,"#chi^{2}/ndof = 47 / 57 ");
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

   c2DFitbis->SaveAs("../pdf/c2DFitbis_pT6_8.pdf");
   c2DFitbis->SaveAs("../png/c2DFitbis_pT6_8.png");
}
